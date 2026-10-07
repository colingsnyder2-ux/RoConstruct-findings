// roc 2009-06 006efcd0  unit: seg_006e0000  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006efcd0
//
// 006efcd0  83ec0c               sub esp, 0xc
// 006efcd3  55                   push ebp
// 006efcd4  56                   push esi
// 006efcd5  8bf0                 mov esi, eax
// 006efcd7  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 006efcda  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 006efce2  c644241201           mov byte ptr [esp + 0x12], 1
// 006efce7  8a4532               mov al, byte ptr [ebp + 0x32]
// 006efcea  88442410             mov byte ptr [esp + 0x10], al
// 006efcee  c644241100           mov byte ptr [esp + 0x11], 0
// 006efcf3  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 006efcf6  8d542408             lea edx, [esp + 8]
// 006efcfa  894c2408             mov dword ptr [esp + 8], ecx
// 006efcfe  56                   push esi
// 006efcff  895514               mov dword ptr [ebp + 0x14], edx
// 006efd02  e8d9290000           call 0x6f26e0
// 006efd07  83c404               add esp, 4
// 006efd0a  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 006efd11  7424                 je 0x6efd37
// 006efd13  681d010000           push 0x11d
// 006efd18  56                   push esi
// 006efd19  e8d2140000           call 0x6f11f0
// 006efd1e  50                   push eax
// 006efd1f  8b4634               mov eax, dword ptr [esi + 0x34]
// 006efd22  68b8dd8e00           push 0x8eddb8
// 006efd27  50                   push eax
// 006efd28  e87393fdff           call 0x6c90a0
// 006efd2d  50                   push eax
// 006efd2e  56                   push esi
// 006efd2f  e8bc150000           call 0x6f12f0
// 006efd34  83c41c               add esp, 0x1c
// 006efd37  57                   push edi
// 006efd38  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006efd3b  56                   push esi
// 006efd3c  e89f290000           call 0x6f26e0
// 006efd41  8b4610               mov eax, dword ptr [esi + 0x10]
// 006efd44  83c404               add esp, 4
// 006efd47  83f82c               cmp eax, 0x2c
// 006efd4a  742e                 je 0x6efd7a
// 006efd4c  83f83d               cmp eax, 0x3d
// 006efd4f  7417                 je 0x6efd68
// 006efd51  3d0b010000           cmp eax, 0x10b
// 006efd56  7422                 je 0x6efd7a
// 006efd58  680ce08e00           push 0x8ee00c
// 006efd5d  56                   push esi
// 006efd5e  e88d150000           call 0x6f12f0
// 006efd63  83c408               add esp, 8
// 006efd66  eb1f                 jmp 0x6efd87
// 006efd68  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006efd6c  51                   push ecx
// 006efd6d  57                   push edi
// 006efd6e  8bfe                 mov edi, esi
// 006efd70  e8bbfaffff           call 0x6ef830
// 006efd75  83c408               add esp, 8
// 006efd78  eb0d                 jmp 0x6efd87
// 006efd7a  53                   push ebx
// 006efd7b  57                   push edi
// 006efd7c  8bde                 mov ebx, esi
// 006efd7e  e8ddfcffff           call 0x6efa60
// 006efd83  83c404               add esp, 4
// 006efd86  5b                   pop ebx
// 006efd87  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006efd8b  6808010000           push 0x108
// 006efd90  bf06010000           mov edi, 0x106
// 006efd95  e8f6daffff           call 0x6ed890
// 006efd9a  8b7514               mov esi, dword ptr [ebp + 0x14]
// 006efd9d  8b16                 mov edx, dword ptr [esi]
// 006efd9f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006efda2  895514               mov dword ptr [ebp + 0x14], edx
// 006efda5  0fb65608             movzx edx, byte ptr [esi + 8]
// 006efda9  83c404               add esp, 4
// 006efdac  e8afdcffff           call 0x6eda60
// 006efdb1  807e0900             cmp byte ptr [esi + 9], 0
// 006efdb5  5f                   pop edi
// 006efdb6  7414                 je 0x6efdcc
// 006efdb8  0fb64608             movzx eax, byte ptr [esi + 8]
// 006efdbc  6a00                 push 0
// 006efdbe  6a00                 push 0
// 006efdc0  50                   push eax
// 006efdc1  6a23                 push 0x23
// 006efdc3  55                   push ebp
// 006efdc4  e807a40000           call 0x6fa1d0
// 006efdc9  83c414               add esp, 0x14
// 006efdcc  0fb64d32             movzx ecx, byte ptr [ebp + 0x32]
// 006efdd0  894d24               mov dword ptr [ebp + 0x24], ecx
// 006efdd3  8b5604               mov edx, dword ptr [esi + 4]
// 006efdd6  52                   push edx
// 006efdd7  55                   push ebp
// 006efdd8  e853a60000           call 0x6fa430
// 006efddd  83c408               add esp, 8
// 006efde0  5e                   pop esi
// 006efde1  5d                   pop ebp
// 006efde2  83c40c               add esp, 0xc
// 006efde5  c3                   ret 
// library lua-5.1.4/lparser.c (function _forstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
