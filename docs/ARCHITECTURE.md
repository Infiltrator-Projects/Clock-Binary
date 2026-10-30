# Binary Digital Clock — Common dependency and source ownership

Clock-Binary owns its clock behaviour, provider identity and native release artifacts. Common owns reusable arithmetic, date/time coordinate helpers, public provider ABI and validation.

The authoritative Common 1.19.80 Git submodule is pinned to `90c5b2c86afb7158e91794231ed970197aaf1e04`. Each portable and native build compiles its exact Common archive with matching compiler flags and links the archive into this standalone provider `.so`. No copied `include/infiltratr/` headers are built. The native `.run` and source ZIP contain the reviewed Common source snapshot for offline builds; they do not depend on the host Common development installation.

Historical provenance records the earlier 1.19.78 code extraction, not a current dependency. Provider accuracy fixtures, ABI checks and the two-pass native installer remain release gates.

## Implementation language

The clock provider and its arithmetic remain ISO C11: they require no C++ runtime, exception machinery or dynamic resource ownership. C exports preserve the exact Common temporal ABI. Builds link against the pinned Common gitlink (90c5b2c86afb7158e91794231ed970197aaf1e04) and must pass the native output, accuracy, package and upgrade checks before publication.
