// roc 2007-08 0046d0b0  unit: RBX::LDraw2Lua::LuaWriter  size: 382 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046d0b0
//
// 0046d0b0  6aff                 push -1
// 0046d0b2  6809417400           push 0x744109
// 0046d0b7  64a100000000         mov eax, dword ptr fs:[0]
// 0046d0bd  50                   push eax
// 0046d0be  83ec24               sub esp, 0x24
// 0046d0c1  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046d0c6  33c4                 xor eax, esp
// 0046d0c8  89442420             mov dword ptr [esp + 0x20], eax
// 0046d0cc  56                   push esi
// 0046d0cd  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046d0d2  33c4                 xor eax, esp
// 0046d0d4  50                   push eax
// 0046d0d5  8d44242c             lea eax, [esp + 0x2c]
// 0046d0d9  64a300000000         mov dword ptr fs:[0], eax
// 0046d0df  68031f0000           push 0x1f03
// 0046d0e4  ff15a8eb7700         call dword ptr [0x77eba8]
// 0046d0ea  50                   push eax
// 0046d0eb  8d4c2410             lea ecx, [esp + 0x10]
// 0046d0ef  ff1598e67700         call dword ptr [0x77e698]
// 0046d0f5  6a17                 push 0x17
// 0046d0f7  6a00                 push 0
// 0046d0f9  68b0657900           push 0x7965b0
// 0046d0fe  8d4c2418             lea ecx, [esp + 0x18]
// 0046d102  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0046d10a  ff157ce57700         call dword ptr [0x77e57c]
// 0046d110  8b0d3ce67700         mov ecx, dword ptr [0x77e63c]
// 0046d116  3b01                 cmp eax, dword ptr [ecx]
// 0046d118  8d4c240c             lea ecx, [esp + 0xc]
// 0046d11c  0f95c2               setne dl
// 0046d11f  881575cf8b00         mov byte ptr [0x8bcf75], dl
// 0046d125  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0046d12d  ff15ace67700         call dword ptr [0x77e6ac]
// 0046d133  68ffff0f00           push 0xfffff
// 0046d138  ff1540eb7700         call dword ptr [0x77eb40]
// 0046d13e  8d442408             lea eax, [esp + 8]
// 0046d142  50                   push eax
// 0046d143  6a01                 push 1
// 0046d145  ff153ceb7700         call dword ptr [0x77eb3c]
// 0046d14b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046d14f  51                   push ecx
// 0046d150  68e10d0000           push 0xde1
// 0046d155  ff1550eb7700         call dword ptr [0x77eb50]
// 0046d15b  803d75cf8b0000       cmp byte ptr [0x8bcf75], 0
// 0046d162  7412                 je 0x46d176
// 0046d164  6a01                 push 1
// 0046d166  6891810000           push 0x8191
// 0046d16b  68e10d0000           push 0xde1
// 0046d170  ff155ceb7700         call dword ptr [0x77eb5c]
// 0046d176  6a30                 push 0x30
// 0046d178  e8b52d1c00           call 0x62ff32
// 0046d17d  6a30                 push 0x30
// 0046d17f  8bf0                 mov esi, eax
// 0046d181  6a00                 push 0
// 0046d183  56                   push esi
// 0046d184  e8033a1c00           call 0x630b8c
// 0046d189  83c410               add esp, 0x10
// 0046d18c  33c0                 xor eax, eax
// 0046d18e  8bff                 mov edi, edi
// 0046d190  c60430ff             mov byte ptr [eax + esi], 0xff
// 0046d194  83c003               add eax, 3
// 0046d197  83f830               cmp eax, 0x30
// 0046d19a  7cf4                 jl 0x46d190
// 0046d19c  56                   push esi
// 0046d19d  6801140000           push 0x1401
// 0046d1a2  6807190000           push 0x1907
// 0046d1a7  6a00                 push 0
// 0046d1a9  6a04                 push 4
// 0046d1ab  6a04                 push 4
// 0046d1ad  6851800000           push 0x8051
// 0046d1b2  6a00                 push 0
// 0046d1b4  68e10d0000           push 0xde1
// 0046d1b9  ff1558eb7700         call dword ptr [0x77eb58]
// 0046d1bf  56                   push esi
// 0046d1c0  6801140000           push 0x1401
// 0046d1c5  6807190000           push 0x1907
// 0046d1ca  6a00                 push 0
// 0046d1cc  68e10d0000           push 0xde1
// 0046d1d1  ff1538eb7700         call dword ptr [0x77eb38]
// 0046d1d7  803eff               cmp byte ptr [esi], 0xff
// 0046d1da  7513                 jne 0x46d1ef
// 0046d1dc  807e0100             cmp byte ptr [esi + 1], 0
// 0046d1e0  750d                 jne 0x46d1ef
// 0046d1e2  807e0200             cmp byte ptr [esi + 2], 0
// 0046d1e6  c60559cf8b0000       mov byte ptr [0x8bcf59], 0
// 0046d1ed  7407                 je 0x46d1f6
// 0046d1ef  c60559cf8b0001       mov byte ptr [0x8bcf59], 1
// 0046d1f6  56                   push esi
// 0046d1f7  e82a2d1c00           call 0x62ff26
// 0046d1fc  83c404               add esp, 4
// 0046d1ff  8d542408             lea edx, [esp + 8]
// 0046d203  52                   push edx
// 0046d204  6a01                 push 1
// 0046d206  ff1590eb7700         call dword ptr [0x77eb90]
// 0046d20c  ff158ceb7700         call dword ptr [0x77eb8c]
// 0046d212  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0046d216  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d21d  59                   pop ecx
// 0046d21e  5e                   pop esi
// 0046d21f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046d223  33cc                 xor ecx, esp
// 0046d225  e8f4371c00           call 0x630a1e
// 0046d22a  83c430               add esp, 0x30
// 0046d22d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?checkBug_redBlueMipmapSwap@GLCaps@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
