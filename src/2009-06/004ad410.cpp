// from server: 100% by auto
// roc 2009-06 004ad410  unit: G3D::Win32Window  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ad410
//
// 004ad410  56                   push esi
// 004ad411  8b35b8eb8900         mov esi, dword ptr [0x89ebb8]
// 004ad417  68e10d0000           push 0xde1
// 004ad41c  ffd6                 call esi
// 004ad41e  803d11c9a30000       cmp byte ptr [0xa3c911], 0
// 004ad425  7407                 je 0x4ad42e
// 004ad427  686f800000           push 0x806f
// 004ad42c  ffd6                 call esi
// 004ad42e  803d16c9a30000       cmp byte ptr [0xa3c916], 0
// 004ad435  7407                 je 0x4ad43e
// 004ad437  6813850000           push 0x8513
// 004ad43c  ffd6                 call esi
// 004ad43e  68e00d0000           push 0xde0
// 004ad443  ffd6                 call esi
// 004ad445  803d09c9a30000       cmp byte ptr [0xa3c909], 0
// 004ad44c  7407                 je 0x4ad455
// 004ad44e  68f5840000           push 0x84f5
// 004ad453  ffd6                 call esi
// 004ad455  5e                   pop esi
// 004ad456  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glDisableAllTextures@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp
