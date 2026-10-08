// roc 2009-12 0086c110  unit: CXTPPropertyGridItemEnum  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086c110
//
// 0086c110  c701ecff9f00         mov dword ptr [ecx], 0x9fffec
// 0086c116  e985f6ffff           jmp 0x86b7a0
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
