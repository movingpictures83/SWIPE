#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "SWIPEPlugin.h"

void SWIPEPlugin::input(std::string file) {
   readParameterFile(file);
}

void SWIPEPlugin::run() {}

void SWIPEPlugin::output(std::string file) {
//swipe -p 1 -i /biorg/tools/prokka/bin/GFF/Pseudomonas_veronii_R02_5004.fna/PROKKA_05192021.fsa -d /biorg/tools/prokka/db/kingdom/Bacteria/sprot -e 0.001 -a 8 >& output.tx
 std::string outputfile = file;
 std::string myCommand = "";
 myCommand += "swipe -p "+myParameters["symtype"]+" -i "+myParameters["input"]+" -d "+myParameters["database"]+" -e "+myParameters["error"]+" -a "+myParameters["numthreads"]+" >& "+file;
std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<SWIPEPlugin> SWIPEPluginProxy = PluginProxy<SWIPEPlugin>("SWIPE", PluginManager::getInstance());
