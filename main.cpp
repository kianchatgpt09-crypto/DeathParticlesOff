#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(DeathParticlesOffPlayer, PlayerObject) {
    void playDeathEffect() {
        log::info("DeathParticlesOff: death effect triggered");

        // TODO:
        // The final version will filter only the CCParticleSystem
        // created by the death burst here.
        //
        // We do NOT call a full replacement yet because that would
        // remove the entire death effect.
        
        PlayerObject::playDeathEffect();
    }
};
