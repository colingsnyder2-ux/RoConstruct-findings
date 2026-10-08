// roc 2009-12 005d1ef0  unit: RBX::G3DPart  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d1ef0
//
// 005d1ef0  c70190119c00         mov dword ptr [ecx], 0x9c1190
// 005d1ef6  e945f9ffff           jmp 0x5d1840
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
