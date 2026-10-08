// from server: 100% by auto
// roc 2007-08 00480170  unit: G3D::Win32Window  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00480170
//
// 00480170  56                   push esi
// 00480171  8b354ceb7700         mov esi, dword ptr [0x77eb4c]
// 00480177  68e10d0000           push 0xde1
// 0048017c  ffd6                 call esi
// 0048017e  803d65cf8b0000       cmp byte ptr [0x8bcf65], 0
// 00480185  7407                 je 0x48018e
// 00480187  686f800000           push 0x806f
// 0048018c  ffd6                 call esi
// 0048018e  803d6acf8b0000       cmp byte ptr [0x8bcf6a], 0
// 00480195  7407                 je 0x48019e
// 00480197  6813850000           push 0x8513
// 0048019c  ffd6                 call esi
// 0048019e  68e00d0000           push 0xde0
// 004801a3  ffd6                 call esi
// 004801a5  803d5dcf8b0000       cmp byte ptr [0x8bcf5d], 0
// 004801ac  7407                 je 0x4801b5
// 004801ae  68f5840000           push 0x84f5
// 004801b3  ffd6                 call esi
// 004801b5  5e                   pop esi
// 004801b6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glDisableAllTextures@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp
