// roc 2009-12 00804950  unit: CXTPCommandBar  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804950
//
// 00804950  c701f82a9f00         mov dword ptr [ecx], 0x9f2af8
// 00804956  e9d5a8c0ff           jmp 0x40f230
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
