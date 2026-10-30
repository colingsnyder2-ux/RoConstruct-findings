# Constructor-qualified twin binding corrections, 2026-10-30

A code/data/map audit found 19 direct constructor-call conflicts among 66 observations across seven linked modules. Relocation masking hides constructor identity: a byte-identical factory can be bound to another class's original address.

The seven corrected bindings below each have one byte/data-identical candidate whose original direct callee has only the expected observed root-vptr class. The full original caller address, callee address, symbol and actual selected linker-map owner are in proof.json. Unknown RTTI provenance was never treated as negative evidence.

- RbxApp: Hole 0040de10 -> 00580230; Glue 0048f490 -> 004b2890; Teams 00407820 -> 00490450.
- XTP: ColorSelector 006b6c90 -> 006ea020; QuickAccessPopup 006e7aa0 -> 00722e60; SystemPopupBarListCaption 006adcb0 -> 0079b1d0; RibbonTab 006dbd20 -> 00794170.

Recompiled genuine source files through explicit native_units bindings: RbxApp four/four exact (including the separately corrected GlobalSettings); XTP four/four exact. Both forced links and runtime tests passed. RbxApp retains 85 forced roots and 936 unique-address inventory entries; XTP has 441 forced roots and 4837 unique-address inventory entries. These are binding corrections, not seven newly integrated functions. RbxApp still has 105 fallback source compilation errors; XTP has no layer compile errors.

Final same-scope audit: 54 matching observations, 12 conflicts. The remaining conflicts have no single typed/data-qualified replacement; do not blanket swap them or claim full native authenticity from normalized bytes. Class layout and broader callee provenance still need work.

Replay now preserves excluded.json and vdrop.json and remaps cached helpers only to retained or byte-identical providers. This prevents a native replay from re-enabling known bad swaps. The published source's swap installation suite passed 28 tests, including native context refresh, stale helpers and rejected installs.

No server acceptance receipts or webhook deliveries are claimed. This campaign changes standalone library module configurations; the current native source queue accepts rbxgs source patches. The configured submitting contributor remains colin.

After refreshing RbxUtil, placement rerun reports 422 distinct addresses (previous campaign: 411). RbxUtil now participates with 13 placed addresses; CodegenAnalogs remains freshness-deferred. Placement narrows address ambiguity and is not server native acceptance. RbxUtil link/runtime passes, but one primary Sound.cpp error (missing genuine fmod.hpp) and 22 fallback source/header errors remain.
