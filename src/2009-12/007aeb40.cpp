// roc 2009-12 007aeb40  unit: RBX::Humanoid  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007aeb40
//
// 007aeb40  c7010cde9e00         mov dword ptr [ecx], 0x9ede0c
// 007aeb46  e9c5a00200           jmp 0x7d8c10
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
