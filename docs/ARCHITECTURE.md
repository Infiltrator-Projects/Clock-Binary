# Binary Digital Clock — Common dependency and source ownership

Clock-Binary owns its clock behaviour, provider identity and native release artifacts. Common owns reusable arithmetic, date/time coordinate helpers, public provider ABI and validation.

The authoritative Common 1.19.80 Git submodule is pinned to `dc4aac326964ca4400b6e21851d16eea674040c8`. Each portable and native build compiles its exact Common archive with matching compiler flags and links the archive into this standalone provider `.so`. No copied `include/infiltratr/` headers are built. The native `.run` and source ZIP contain the reviewed Common source snapshot for offline builds; they do not depend on the host Common development installation.

Historical provenance records the earlier 1.19.78 code extraction, not a current dependency. Provider accuracy fixtures, ABI checks and the two-pass native installer remain release gates.
