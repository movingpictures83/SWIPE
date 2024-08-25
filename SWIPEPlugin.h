#ifndef SWIPEPLUGIN_H
#define SWIPEPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class SWIPEPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "SWIPE";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
