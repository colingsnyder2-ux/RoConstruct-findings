// roc 2009-12 005d4650  unit: RBX::G3DPart  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d4650
//
// 005d4650  c701b8119c00         mov dword ptr [ecx], 0x9c11b8
// 005d4656  e945fbffff           jmp 0x5d41a0
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
