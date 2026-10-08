// roc 2009-12 0089a590  unit: CXTPRibbonBar  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089a590
//
// 0089a590  c7013452a000         mov dword ptr [ecx], 0xa05234
// 0089a596  e9479ef5ff           jmp 0x7f43e2
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
