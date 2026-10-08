// roc 2009-12 0088f590  unit: CXTPShortcutManager  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088f590
//
// 0088f590  c7017c31a000         mov dword ptr [ecx], 0xa0317c
// 0088f596  e975fdffff           jmp 0x88f310
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
