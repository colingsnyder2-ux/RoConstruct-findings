// roc 2009-12 00412f80  unit: CRbxChildFrame  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00412f80
//
// 00412f80  c701dc219a00         mov dword ptr [ecx], 0x9a21dc
// 00412f86  e967103e00           jmp 0x7f3ff2
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
