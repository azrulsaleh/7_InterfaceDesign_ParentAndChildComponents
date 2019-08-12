/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class SunComponent    : public Component
{
public:
    SunComponent();
    ~SunComponent();
    void paint (Graphics&) override;
    void resized() override;
private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SunComponent)
};
//==============================================================================
class WallComponent    : public Component
{
public:
    WallComponent();
    ~WallComponent();
    void paint (Graphics&) override;
    void resized() override;
private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WallComponent)
};
//==============================================================================
class RoofComponent    : public Component
{
public:
    RoofComponent();
    ~RoofComponent();
    void paint (Graphics&) override;
    void resized() override;
private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RoofComponent)
};
//==============================================================================
class FloorComponent    : public Component
{
public:
    FloorComponent();
    ~FloorComponent();
    void paint (Graphics&) override;
    void resized() override;
private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FloorComponent)
};
//==============================================================================
class HouseComponent    : public Component
{
public:
    HouseComponent();
    ~HouseComponent();
    void paint (Graphics&) override;
    void resized() override;
private:
    WallComponent wall;
    RoofComponent roof;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (HouseComponent)
};
//==============================================================================
class StreetComponent    : public Component
{
public:
    StreetComponent();
    ~StreetComponent();
    void paint (Graphics&) override;
    void resized() override;
private:
    HouseComponent house1, house2, house3;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (StreetComponent)
};
//==============================================================================
class SceneComponent    : public Component
{
public:
    SceneComponent();
    ~SceneComponent();
    void paint (Graphics&) override;
    void resized() override;
private:
    FloorComponent floor;
    HouseComponent house;
    HouseComponent smallHouse;
    StreetComponent street;
    SunComponent sun;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SceneComponent)
};
//==============================================================================
class MainComponent   : public Component
{
public:
    MainComponent();
    ~MainComponent();
    void paint (Graphics&) override;
    void resized() override;
private:
    SceneComponent scene;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
