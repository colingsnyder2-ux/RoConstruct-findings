// roc 2009-12 00867570  unit: CPropertyGridItemBrickColor  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00867570
//
// 00867570  c7015cf89a00         mov dword ptr [ecx], 0x9af85c
// 00867576  e915ccf8ff           jmp 0x7f4190
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
