// roc 2009-12 004d9f50  unit: G3D::Win32Window  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d9f50
//
// 004d9f50  56                   push esi
// 004d9f51  8b35dcbb9800         mov esi, dword ptr [0x98bbdc]
// 004d9f57  68e10d0000           push 0xde1
// 004d9f5c  ffd6                 call esi
// 004d9f5e  803dc1d0b70000       cmp byte ptr [0xb7d0c1], 0
// 004d9f65  7407                 je 0x4d9f6e
// 004d9f67  686f800000           push 0x806f
// 004d9f6c  ffd6                 call esi
// 004d9f6e  803dc6d0b70000       cmp byte ptr [0xb7d0c6], 0
// 004d9f75  7407                 je 0x4d9f7e
// 004d9f77  6813850000           push 0x8513
// 004d9f7c  ffd6                 call esi
// 004d9f7e  68e00d0000           push 0xde0
// 004d9f83  ffd6                 call esi
// 004d9f85  803db9d0b70000       cmp byte ptr [0xb7d0b9], 0
// 004d9f8c  7407                 je 0x4d9f95
// 004d9f8e  68f5840000           push 0x84f5
// 004d9f93  ffd6                 call esi
// 004d9f95  5e                   pop esi
// 004d9f96  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glDisableAllTextures@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp
