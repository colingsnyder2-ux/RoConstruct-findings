// from server: 100% by auto
// roc 2010-06 0048ed40  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048ed40
//
// 0048ed40  56                   push esi
// 0048ed41  8b35e0aa9e00         mov esi, dword ptr [0x9eaae0]
// 0048ed47  68e10d0000           push 0xde1
// 0048ed4c  ffd6                 call esi
// 0048ed4e  803dbd38c00000       cmp byte ptr [0xc038bd], 0
// 0048ed55  7407                 je 0x48ed5e
// 0048ed57  686f800000           push 0x806f
// 0048ed5c  ffd6                 call esi
// 0048ed5e  803dc238c00000       cmp byte ptr [0xc038c2], 0
// 0048ed65  7407                 je 0x48ed6e
// 0048ed67  6813850000           push 0x8513
// 0048ed6c  ffd6                 call esi
// 0048ed6e  68e00d0000           push 0xde0
// 0048ed73  ffd6                 call esi
// 0048ed75  803db538c00000       cmp byte ptr [0xc038b5], 0
// 0048ed7c  7407                 je 0x48ed85
// 0048ed7e  68f5840000           push 0x84f5
// 0048ed83  ffd6                 call esi
// 0048ed85  5e                   pop esi
// 0048ed86  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glDisableAllTextures@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp
