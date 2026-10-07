// roc 2008-06 00483500  unit: G3D::Win32Window  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00483500
//
// 00483500  56                   push esi
// 00483501  8b3558298000         mov esi, dword ptr [0x802958]
// 00483507  68e10d0000           push 0xde1
// 0048350c  ffd6                 call esi
// 0048350e  803d81ee960000       cmp byte ptr [0x96ee81], 0
// 00483515  7407                 je 0x48351e
// 00483517  686f800000           push 0x806f
// 0048351c  ffd6                 call esi
// 0048351e  803d86ee960000       cmp byte ptr [0x96ee86], 0
// 00483525  7407                 je 0x48352e
// 00483527  6813850000           push 0x8513
// 0048352c  ffd6                 call esi
// 0048352e  68e00d0000           push 0xde0
// 00483533  ffd6                 call esi
// 00483535  803d79ee960000       cmp byte ptr [0x96ee79], 0
// 0048353c  7407                 je 0x483545
// 0048353e  68f5840000           push 0x84f5
// 00483543  ffd6                 call esi
// 00483545  5e                   pop esi
// 00483546  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glDisableAllTextures@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp
