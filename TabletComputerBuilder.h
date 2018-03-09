#pragma once

#include "ComputerBuilder.h"

class TabletComputerBuilder : public ComputerBuilder {
private:
    Computer* result;

public:
	TabletComputerBuilder(){result = new Computer();}
    virtual Computer* getResult(){return result;}
    virtual void buildCPU() { result->setCPU("Incredible 2.0GHz Intel i123 Processor for tablets."); }
    virtual void buildVideoCard() { result->setVideoCard("Not an actrual GPU cause this is a tablet!"); }
    virtual void buildKeyboard() { result->setKeyboard("Just a cool virtural keyboard"); }
    virtual void buildScreen() { result->setScreen("20 feet wide"); }
};