// from server: 100% by auto
// roc 2009-06 004a6da0  unit: G3D::TextureManager::TextureArgs  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a6da0
//
// 004a6da0  64a100000000         mov eax, dword ptr fs:[0]
// 004a6da6  6aff                 push -1
// 004a6da8  68d9b88500           push 0x85b8d9
// 004a6dad  50                   push eax
// 004a6dae  64892500000000       mov dword ptr fs:[0], esp
// 004a6db5  83ec1c               sub esp, 0x1c
// 004a6db8  68031f0000           push 0x1f03
// 004a6dbd  ff158cea8900         call dword ptr [0x89ea8c]
// 004a6dc3  68740d8c00           push 0x8c0d74
// 004a6dc8  50                   push eax
// 004a6dc9  ff1504e98900         call dword ptr [0x89e904]
// 004a6dcf  83c408               add esp, 8
// 004a6dd2  85c0                 test eax, eax
// 004a6dd4  741b                 je 0x4a6df1
// 004a6dd6  833d4cd2a30000       cmp dword ptr [0xa3d24c], 0
// 004a6ddd  7412                 je 0x4a6df1
// 004a6ddf  833d54d2a30000       cmp dword ptr [0xa3d254], 0
// 004a6de6  7409                 je 0x4a6df1
// 004a6de8  833d48d2a30000       cmp dword ptr [0xa3d248], 0
// 004a6def  7516                 jne 0x4a6e07
// 004a6df1  c60507c9a30000       mov byte ptr [0xa3c907], 0
// 004a6df8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004a6dfc  64890d00000000       mov dword ptr fs:[0], ecx
// 004a6e03  83c428               add esp, 0x28
// 004a6e06  c3                   ret 
// 004a6e07  56                   push esi
// 004a6e08  e883feffff           call 0x4a6c90
// 004a6e0d  686cad8b00           push 0x8bad6c
// 004a6e12  8d4c2408             lea ecx, [esp + 8]
// 004a6e16  8bf0                 mov esi, eax
// 004a6e18  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a6e1e  8d442404             lea eax, [esp + 4]
// 004a6e22  50                   push eax
// 004a6e23  56                   push esi
// 004a6e24  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004a6e2c  e8afd60c00           call 0x5744e0
// 004a6e31  83c408               add esp, 8
// 004a6e34  8d4c2404             lea ecx, [esp + 4]
// 004a6e38  a207c9a300           mov byte ptr [0xa3c907], al
// 004a6e3d  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004a6e45  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a6e4b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004a6e4f  5e                   pop esi
// 004a6e50  64890d00000000       mov dword ptr fs:[0], ecx
// 004a6e57  83c428               add esp, 0x28
// 004a6e5a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?checkBug_slowVBO@GLCaps@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
