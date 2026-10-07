#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>
#include <cmath>

using namespace geode::prelude;

class $modify(AlwaysWavePulsePlayer, PlayerObject) {
    struct Fields {
        float pulseTime = 0.f;
    };

    void updateStreaks(float dt) {
        PlayerObject::updateStreaks(dt);

        if (!m_waveTrail || !m_isDart)
            return;

        m_fields->pulseTime += dt;

        constexpr float speed = 5.0f;
        constexpr float strength = 0.25f;

        float wave =
            (std::sin(m_fields->pulseTime * speed) + 1.0f) * 0.5f;

        m_waveTrail->m_pulseSize = wave * strength;
    }
};
