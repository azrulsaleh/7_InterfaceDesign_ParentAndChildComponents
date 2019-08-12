/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

SunComponent::SunComponent()
{
    
}
SunComponent::~SunComponent()
{
    
}
void SunComponent::paint (Graphics& g)
{
    g.setColour(Colours::yellow);
    auto lineThickness = 3.0f;
    double radius = getWidth() < getHeight() ? radius = getWidth() : radius = getHeight();
    g.drawEllipse(lineThickness * 0.5f,
                  lineThickness * 0.5f,
                  radius - lineThickness,
                  radius - lineThickness,
                  lineThickness);
}
void SunComponent::resized()
{
    
}
//==============================================================================
WallComponent::WallComponent()
{
    
}
WallComponent::~WallComponent()
{
    
}
void WallComponent::paint (Graphics& g)
{
    g.fillCheckerBoard(getLocalBounds().toFloat(), 30, 10, Colours::sandybrown, Colours::saddlebrown);
}
void WallComponent::resized()
{
    
}
//==============================================================================
RoofComponent::RoofComponent()
{
    
}
RoofComponent::~RoofComponent()
{
    
}
void RoofComponent::paint (Graphics& g)
{
    g.setColour(Colours::red);
    Path roof;
    roof.addTriangle(0, getHeight(), getWidth(), getHeight(), getWidth() / 2, 0);
    g.fillPath(roof);
}
void RoofComponent::resized()
{
    
}
//==============================================================================
FloorComponent::FloorComponent()
{
    
}
FloorComponent::~FloorComponent()
{
    
}
void FloorComponent::paint (Graphics& g)
{
    g.setColour(Colours::green);
    g.drawLine(0, getHeight() / 2, getWidth(), getHeight() / 2, 5);
}
void FloorComponent::resized()
{
    
}
//==============================================================================
HouseComponent::HouseComponent()
{
    addAndMakeVisible(wall);
    addAndMakeVisible(roof);
}
HouseComponent::~HouseComponent()
{
    
}
void HouseComponent::paint (Graphics& g)
{
    
}
void HouseComponent::resized()
{
    auto separation = jlimit (2, 10, getHeight() / 20);
    roof.setBounds(0, 0, getWidth(), (getHeight() * 0.2) - (separation / 2));
    wall.setBounds(0, getHeight() * 0.20 + separation / 2, getWidth(), (getHeight() * 0.80) - separation);
}
//==============================================================================
StreetComponent::StreetComponent()
{
    addAndMakeVisible(house1);
    addAndMakeVisible(house2);
    addAndMakeVisible(house3);
}
StreetComponent::~StreetComponent()
{
    
}
void StreetComponent::paint (Graphics& g)
{

}
void StreetComponent::resized()
{
    house1.setBounds(0, 0, 50, 50);
    house2.setBounds(0, 70, 50, 50);
    house3.setBounds(0, 140, 50, 50);
}
//==============================================================================
SceneComponent::SceneComponent()
{
    addAndMakeVisible(floor);
    addAndMakeVisible(house);
    addAndMakeVisible(smallHouse);
    addAndMakeVisible(street);
    addAndMakeVisible(sun);
}
SceneComponent::~SceneComponent()
{
    
}
void SceneComponent::paint (Graphics& g)
{
    g.fillAll (Colours::lightblue);
}
void SceneComponent::resized()
{
    floor.setBounds(10, 297, 580, 5);
    house.setBounds(300, 70, 200, 220);
    smallHouse.setBounds(50, 70, 50, 50);
    street.setBounds(180, 70, 50, 300);
    sun.setBounds(530, 10, 60, 60);
}
//==============================================================================
MainComponent::MainComponent()
{
    addAndMakeVisible(scene);
    setSize (600, 400);
}
MainComponent::~MainComponent()
{
}
void MainComponent::paint (Graphics& g)
{
    scene.setBounds(getLocalBounds());
}
void MainComponent::resized()
{
    scene.setBounds(getLocalBounds());
}
