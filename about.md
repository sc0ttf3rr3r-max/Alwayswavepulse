# Always Wave Pulse

Always Wave Pulse makes the Geometry Dash wave trail pulse continuously while the player is in wave mode.

## Features

- Automatic continuous wave-trail pulsing
- Completely independent of level music and downloaded songs
- Smooth pulse with subtle variation
- No gameplay or physics changes
- Lightweight: one small frame hook

## Tuning

Edit `src/main.cpp`:

- `PULSE_SPEED` controls how quickly the trail pulses.
- `PULSE_STRENGTH` controls how strong the pulse is.

The default values are intentionally moderate so the effect stays readable instead of becoming a flicker.
