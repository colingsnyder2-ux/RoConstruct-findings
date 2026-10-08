// roc 2009-12 0042d460  unit: CMultiPlayerPane  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042d460
//
// 0042d460  c701e44f9a00         mov dword ptr [ecx], 0x9a4fe4
// 0042d466  e9ab6e3c00           jmp 0x7f4316
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
