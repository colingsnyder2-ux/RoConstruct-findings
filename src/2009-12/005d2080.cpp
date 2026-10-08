// roc 2009-12 005d2080  unit: RBX::G3DPart  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d2080
//
// 005d2080  c701a8119c00         mov dword ptr [ecx], 0x9c11a8
// 005d2086  e925fbffff           jmp 0x5d1bb0
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
