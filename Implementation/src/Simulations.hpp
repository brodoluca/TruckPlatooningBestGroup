#ifndef SIMULATIONS_HPP
#define SIMULATIONS_HPP

#include "Leader.hpp"
#include "Truck.hpp"

#include "utils/PlatoonTypes.hpp"
#include "utils/include.hpp"

#include "Event.hpp"
#include "DrivingEvent.hpp"
#include "OrganizationalEvent.hpp"
#include "SafetyCriticalEvent.hpp"

#include "Communication.hpp"

#include <pthread.h>
#include <vector>
#include <random>



void TruckCreatesPlatoon(const int &NumberOfThreads = 4);

void LeaderLeaves(const int &NumberOfTrucks = 4);
void MemberLeaves(const int &NumberOfTrucks = 4);

#endif
