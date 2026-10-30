# Boost native forced replay — 2026-10-30

Local baseline 352 -> 479 owned exact addresses: 128 additions, one ambiguous twin 005a0460 no longer attributed to Boost (still owned by RbxgsApp). Counts overlap other modules; no accepted integration credits claimed.

Added all 10 genuine upstream Boost 1.34.1 Program Options sources. All upstream files compile without errors. Verified layer uses 19 preexisting mining objects (hashes recorded), not a fresh source recompilation of those historical objects. Section pruning retains real dependencies; 24 external swapped symbols are forced with linker /INCLUDE. Missing custom throw_exception/TSS dependencies remain excluded; no fake implementations. Module link and runtime return zero.

Runtime covers original once/mutex/two-thread join/signals/regex/filesystem/date tests, plus Program Options typed integer/boolean parsing, rejection of unknown options, and UTF-8/wide conversion roundtrip (accented Latin and Euro).

Reproduce using config/boost.json, tests/boost_core.cpp and corresponding verified objects from mining replay. Do not confuse owned-object matches with independently accepted server integration. Full instruction and referenced-data matcher used by module build.
