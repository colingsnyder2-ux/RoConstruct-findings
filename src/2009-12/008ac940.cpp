// roc 2009-12 008ac940  unit: CXTPDockingPaneWindowSelect  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ac940
//
// 008ac940  c7015c6ba000         mov dword ptr [ecx], 0xa06b5c
// 008ac946  e9d59bf4ff           jmp 0x7f6520
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
