// roc 2009-06 004a6790  unit: G3D::TextureManager::TextureArgs  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a6790
//
// 004a6790  6aff                 push -1
// 004a6792  68d9b88500           push 0x85b8d9
// 004a6797  64a100000000         mov eax, dword ptr fs:[0]
// 004a679d  50                   push eax
// 004a679e  64892500000000       mov dword ptr fs:[0], esp
// 004a67a5  83ec20               sub esp, 0x20
// 004a67a8  68031f0000           push 0x1f03
// 004a67ad  ff158cea8900         call dword ptr [0x89ea8c]
// 004a67b3  50                   push eax
// 004a67b4  8d4c2408             lea ecx, [esp + 8]
// 004a67b8  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a67be  6a17                 push 0x17
// 004a67c0  6a00                 push 0
// 004a67c2  68acfc8b00           push 0x8bfcac
// 004a67c7  8d4c2410             lea ecx, [esp + 0x10]
// 004a67cb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004a67d3  ff1524e58900         call dword ptr [0x89e524]
// 004a67d9  8b0d6ce48900         mov ecx, dword ptr [0x89e46c]
// 004a67df  3b01                 cmp eax, dword ptr [ecx]
// 004a67e1  8d4c2404             lea ecx, [esp + 4]
// 004a67e5  0f95c2               setne dl
// 004a67e8  881521c9a300         mov byte ptr [0xa3c921], dl
// 004a67ee  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004a67f6  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a67fc  68ffff0f00           push 0xfffff
// 004a6801  ff1584ea8900         call dword ptr [0x89ea84]
// 004a6807  8d0424               lea eax, [esp]
// 004a680a  50                   push eax
// 004a680b  6a01                 push 1
// 004a680d  ff15bceb8900         call dword ptr [0x89ebbc]
// 004a6813  8b0c24               mov ecx, dword ptr [esp]
// 004a6816  51                   push ecx
// 004a6817  68e10d0000           push 0xde1
// 004a681c  ff15c0eb8900         call dword ptr [0x89ebc0]
// 004a6822  803d21c9a30000       cmp byte ptr [0xa3c921], 0
// 004a6829  7412                 je 0x4a683d
// 004a682b  6a01                 push 1
// 004a682d  6891810000           push 0x8191
// 004a6832  68e10d0000           push 0xde1
// 004a6837  ff15cceb8900         call dword ptr [0x89ebcc]
// 004a683d  56                   push esi
// 004a683e  6a30                 push 0x30
// 004a6840  e8d5242700           call 0x718d1a
// 004a6845  6a30                 push 0x30
// 004a6847  8bf0                 mov esi, eax
// 004a6849  6a00                 push 0
// 004a684b  56                   push esi
// 004a684c  e823342700           call 0x719c74
// 004a6851  83c410               add esp, 0x10
// 004a6854  33c0                 xor eax, eax
// 004a6856  c60430ff             mov byte ptr [eax + esi], 0xff
// 004a685a  83c003               add eax, 3
// 004a685d  83f830               cmp eax, 0x30
// 004a6860  7cf4                 jl 0x4a6856
// 004a6862  56                   push esi
// 004a6863  6801140000           push 0x1401
// 004a6868  6807190000           push 0x1907
// 004a686d  6a00                 push 0
// 004a686f  6a04                 push 4
// 004a6871  6a04                 push 4
// 004a6873  6851800000           push 0x8051
// 004a6878  6a00                 push 0
// 004a687a  68e10d0000           push 0xde1
// 004a687f  ff15d4eb8900         call dword ptr [0x89ebd4]
// 004a6885  56                   push esi
// 004a6886  6801140000           push 0x1401
// 004a688b  6807190000           push 0x1907
// 004a6890  6a00                 push 0
// 004a6892  68e10d0000           push 0xde1
// 004a6897  ff15c4eb8900         call dword ptr [0x89ebc4]
// 004a689d  803eff               cmp byte ptr [esi], 0xff
// 004a68a0  7513                 jne 0x4a68b5
// 004a68a2  807e0100             cmp byte ptr [esi + 1], 0
// 004a68a6  750d                 jne 0x4a68b5
// 004a68a8  807e0200             cmp byte ptr [esi + 2], 0
// 004a68ac  c60505c9a30000       mov byte ptr [0xa3c905], 0
// 004a68b3  7407                 je 0x4a68bc
// 004a68b5  c60505c9a30001       mov byte ptr [0xa3c905], 1
// 004a68bc  56                   push esi
// 004a68bd  e81c242700           call 0x718cde
// 004a68c2  83c404               add esp, 4
// 004a68c5  8d542404             lea edx, [esp + 4]
// 004a68c9  52                   push edx
// 004a68ca  6a01                 push 1
// 004a68cc  ff15a0eb8900         call dword ptr [0x89eba0]
// 004a68d2  ff15a8ea8900         call dword ptr [0x89eaa8]
// 004a68d8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004a68dc  5e                   pop esi
// 004a68dd  64890d00000000       mov dword ptr fs:[0], ecx
// 004a68e4  83c42c               add esp, 0x2c
// 004a68e7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?checkBug_redBlueMipmapSwap@GLCaps@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
