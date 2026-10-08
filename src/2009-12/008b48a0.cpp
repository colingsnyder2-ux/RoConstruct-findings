// roc 2009-12 008b48a0  unit: CXTPDockingPaneSplitterContainer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b48a0
//
// 008b48a0  c701d879a000         mov dword ptr [ecx], 0xa079d8
// 008b48a6  e9a540f8ff           jmp 0x838950
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
