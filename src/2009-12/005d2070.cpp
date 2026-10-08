// roc 2009-12 005d2070  unit: RBX::G3DPart  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d2070
//
// 005d2070  c701a0119c00         mov dword ptr [ecx], 0x9c11a0
// 005d2076  e9c5faffff           jmp 0x5d1b40
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
