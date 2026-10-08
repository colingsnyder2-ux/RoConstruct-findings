// roc 2009-12 006ec1c0  unit: RBX::Geometry  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ec1c0
//
// 006ec1c0  c701ccb49d00         mov dword ptr [ecx], 0x9db4cc
// 006ec1c6  e975290c00           jmp 0x7aeb40
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
