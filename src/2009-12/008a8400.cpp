// roc 2009-12 008a8400  unit: CXTPDockingPaneBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a8400
//
// 008a8400  c7012c63a000         mov dword ptr [ecx], 0xa0632c
// 008a8406  e915e1f4ff           jmp 0x7f6520
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
