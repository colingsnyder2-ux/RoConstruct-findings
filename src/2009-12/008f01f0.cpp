// roc 2009-12 008f01f0  unit: CXTPRibbonControls  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f01f0
//
// 008f01f0  c7018ce6a000         mov dword ptr [ecx], 0xa0e68c
// 008f01f6  e9e569f5ff           jmp 0x846be0
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
