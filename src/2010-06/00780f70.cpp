// roc 2010-06 00780f70  unit: seg_00780000  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00780f70
//
// 00780f70  83ec0c               sub esp, 0xc
// 00780f73  55                   push ebp
// 00780f74  56                   push esi
// 00780f75  8bf0                 mov esi, eax
// 00780f77  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 00780f7a  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00780f82  c644241201           mov byte ptr [esp + 0x12], 1
// 00780f87  8a4532               mov al, byte ptr [ebp + 0x32]
// 00780f8a  88442410             mov byte ptr [esp + 0x10], al
// 00780f8e  c644241100           mov byte ptr [esp + 0x11], 0
// 00780f93  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00780f96  8d542408             lea edx, [esp + 8]
// 00780f9a  894c2408             mov dword ptr [esp + 8], ecx
// 00780f9e  56                   push esi
// 00780f9f  895514               mov dword ptr [ebp + 0x14], edx
// 00780fa2  e8d9290000           call 0x783980
// 00780fa7  83c404               add esp, 4
// 00780faa  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 00780fb1  7424                 je 0x780fd7
// 00780fb3  681d010000           push 0x11d
// 00780fb8  56                   push esi
// 00780fb9  e8d2140000           call 0x782490
// 00780fbe  50                   push eax
// 00780fbf  8b4634               mov eax, dword ptr [esi + 0x34]
// 00780fc2  683830a500           push 0xa53038
// 00780fc7  50                   push eax
// 00780fc8  e8131efbff           call 0x732de0
// 00780fcd  50                   push eax
// 00780fce  56                   push esi
// 00780fcf  e8bc150000           call 0x782590
// 00780fd4  83c41c               add esp, 0x1c
// 00780fd7  57                   push edi
// 00780fd8  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00780fdb  56                   push esi
// 00780fdc  e89f290000           call 0x783980
// 00780fe1  8b4610               mov eax, dword ptr [esi + 0x10]
// 00780fe4  83c404               add esp, 4
// 00780fe7  83f82c               cmp eax, 0x2c
// 00780fea  742e                 je 0x78101a
// 00780fec  83f83d               cmp eax, 0x3d
// 00780fef  7417                 je 0x781008
// 00780ff1  3d0b010000           cmp eax, 0x10b
// 00780ff6  7422                 je 0x78101a
// 00780ff8  688c32a500           push 0xa5328c
// 00780ffd  56                   push esi
// 00780ffe  e88d150000           call 0x782590
// 00781003  83c408               add esp, 8
// 00781006  eb1f                 jmp 0x781027
// 00781008  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0078100c  51                   push ecx
// 0078100d  57                   push edi
// 0078100e  8bfe                 mov edi, esi
// 00781010  e8bbfaffff           call 0x780ad0
// 00781015  83c408               add esp, 8
// 00781018  eb0d                 jmp 0x781027
// 0078101a  53                   push ebx
// 0078101b  57                   push edi
// 0078101c  8bde                 mov ebx, esi
// 0078101e  e8ddfcffff           call 0x780d00
// 00781023  83c404               add esp, 4
// 00781026  5b                   pop ebx
// 00781027  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0078102b  6808010000           push 0x108
// 00781030  bf06010000           mov edi, 0x106
// 00781035  e8f6daffff           call 0x77eb30
// 0078103a  8b7514               mov esi, dword ptr [ebp + 0x14]
// 0078103d  8b16                 mov edx, dword ptr [esi]
// 0078103f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00781042  895514               mov dword ptr [ebp + 0x14], edx
// 00781045  0fb65608             movzx edx, byte ptr [esi + 8]
// 00781049  83c404               add esp, 4
// 0078104c  e8afdcffff           call 0x77ed00
// 00781051  807e0900             cmp byte ptr [esi + 9], 0
// 00781055  5f                   pop edi
// 00781056  7414                 je 0x78106c
// 00781058  0fb64608             movzx eax, byte ptr [esi + 8]
// 0078105c  6a00                 push 0
// 0078105e  6a00                 push 0
// 00781060  50                   push eax
// 00781061  6a23                 push 0x23
// 00781063  55                   push ebp
// 00781064  e8f7ea0000           call 0x78fb60
// 00781069  83c414               add esp, 0x14
// 0078106c  0fb64d32             movzx ecx, byte ptr [ebp + 0x32]
// 00781070  894d24               mov dword ptr [ebp + 0x24], ecx
// 00781073  8b5604               mov edx, dword ptr [esi + 4]
// 00781076  52                   push edx
// 00781077  55                   push ebp
// 00781078  e843ed0000           call 0x78fdc0
// 0078107d  83c408               add esp, 8
// 00781080  5e                   pop esi
// 00781081  5d                   pop ebp
// 00781082  83c40c               add esp, 0xc
// 00781085  c3                   ret 
// library lua-5.1.4/lparser.c (function _forstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
