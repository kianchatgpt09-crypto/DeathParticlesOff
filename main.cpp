#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

/*
 DeathParticlesOff source template

 Intended:
 - keep death animation
 - keep death visual/glow
 - suppress only death particle emitters
*/

class $modify(DeathParticlesOffPlayer, PlayerObject) {
    // The final particle suppression hook goes here.
};
