// roc 2009-12 005d1f00  unit: RBX::G3DPart  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d1f00
//
// 005d1f00  c70198119c00         mov dword ptr [ecx], 0x9c1198
// 005d1f06  e9a5f9ffff           jmp 0x5d18b0
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
