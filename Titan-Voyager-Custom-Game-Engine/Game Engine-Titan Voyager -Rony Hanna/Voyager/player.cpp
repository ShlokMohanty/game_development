#include "player.h"
#include "Renderer.h"
#include "Utils.h"
#include "Dependencies/SDL2/include/SDL.h "
#include "Audio.h"

player::Player() : 
m_jumpHeight(50.0f),
m_upwardSpeed(0.0f),
m_health(100),
m_isInAir(false),
m_swapped(false),
m_sniperAiming(false),
m_toggleFlashlight(false),
m_dead(false)
{}

Player::Player()
{
  delete m_assultRifle;
  m_assaultRifle = nullptr;
  
  delete m_sniperRifle;
  m_sniperRifle = nullptr;
  
  delete m_spotlight;
  m_spotlight = nullptr;
}

