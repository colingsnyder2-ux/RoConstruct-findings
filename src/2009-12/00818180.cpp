// roc 2009-12 00818180  unit: CXTPCommandBarsOptions  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00818180
//
// 00818180  c7016c419f00         mov dword ptr [ecx], 0x9f416c
// 00818186  e905c0fdff           jmp 0x7f4190
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
