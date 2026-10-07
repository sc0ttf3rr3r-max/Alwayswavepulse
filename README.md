# Always Wave Pulse — Geode Mod

This is the complete source project for an Android64 Geode mod.

## What it does

The mod hooks `PlayerObject::updateStreaks(float dt)` and drives the wave trail's pulse value every frame while wave mode is active. It does not read song timing, BPM, or downloaded music.

## Recommended build target

- Geometry Dash: 2.2081
- Geode: v5.10.1
- Android target: Android64 (`arm64-v8a`)

## Local build

With the Geode SDK installed and `GEODE_SDK` configured:

```bash
geode build -p android64
```

The resulting `.geode` package is produced by the Geode build process.

## Phone-friendly build

The repository includes a GitHub Actions workflow at:

`.github/workflows/build-android.yml`

That workflow uses Geode's official build action to build an Android64 `.geode` package.
