#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>
#include <cmath>

using namespace geode::prelude;

class $modify(AlwaysWavePulsePlayer, PlayerObject) {
    float m_pulseTime = 0.f;

    void updateStreaks(float dt) {
        PlayerObject::updateStreaks(dt);

        if (!m_waveTrail || !m_isDart)
            return;

        m_pulseTime += dt;

        // Smooth pulse that runs independently of the song.
        constexpr float speed = 5.0f;
        constexpr float strength = 0.25f;

        float wave = (std::sin(m_pulseTime * speed) + 1.0f) * 0.5f;
        m_waveTrail->m_pulseSize = wave * strength;
    }
};
