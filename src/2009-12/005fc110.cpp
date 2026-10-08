// roc 2009-12 005fc110  unit: G3D::TextInput::WrongSymbol  size: 538 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fc110
//
// 005fc110  6aff                 push -1
// 005fc112  68edf99300           push 0x93f9ed
// 005fc117  64a100000000         mov eax, dword ptr fs:[0]
// 005fc11d  50                   push eax
// 005fc11e  64892500000000       mov dword ptr fs:[0], esp
// 005fc125  83ec74               sub esp, 0x74
// 005fc128  53                   push ebx
// 005fc129  55                   push ebp
// 005fc12a  56                   push esi
// 005fc12b  57                   push edi
// 005fc12c  8bf1                 mov esi, ecx
// 005fc12e  6a04                 push 4
// 005fc130  89742414             mov dword ptr [esp + 0x14], esi
// 005fc134  e827771f00           call 0x7f3860
// 005fc139  33ed                 xor ebp, ebp
// 005fc13b  83c404               add esp, 4
// 005fc13e  3bc5                 cmp eax, ebp
// 005fc140  7404                 je 0x5fc146
// 005fc142  8930                 mov dword ptr [eax], esi
// 005fc144  eb02                 jmp 0x5fc148
// 005fc146  33c0                 xor eax, eax
// 005fc148  8906                 mov dword ptr [esi], eax
// 005fc14a  896e10               mov dword ptr [esi + 0x10], ebp
// 005fc14d  896e14               mov dword ptr [esi + 0x14], ebp
// 005fc150  896e18               mov dword ptr [esi + 0x18], ebp
// 005fc153  896e1c               mov dword ptr [esi + 0x1c], ebp
// 005fc156  8d5e20               lea ebx, [esi + 0x20]
// 005fc159  89ac248c000000       mov dword ptr [esp + 0x8c], ebp
// 005fc160  896b04               mov dword ptr [ebx + 4], ebp
// 005fc163  896b08               mov dword ptr [ebx + 8], ebp
// 005fc166  892b                 mov dword ptr [ebx], ebp
// 005fc168  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 005fc16f  50                   push eax
// 005fc170  8d4e38               lea ecx, [esi + 0x38]
// 005fc173  c684249000000001     mov byte ptr [esp + 0x90], 1
// 005fc17b  e8d0e9ffff           call 0x5fab50
// 005fc180  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 005fc183  8bbc2498000000       mov edi, dword ptr [esp + 0x98]
// 005fc18a  41                   inc ecx
// 005fc18b  c684248c00000002     mov byte ptr [esp + 0x8c], 2
// 005fc193  896e2c               mov dword ptr [esi + 0x2c], ebp
// 005fc196  c7463401000000       mov dword ptr [esi + 0x34], 1
// 005fc19d  894e30               mov dword ptr [esi + 0x30], ecx
// 005fc1a0  396e54               cmp dword ptr [esi + 0x54], ebp
// 005fc1a3  0f8539010000         jne 0x5fc2e2
// 005fc1a9  837f140e             cmp dword ptr [edi + 0x14], 0xe
// 005fc1ad  737f                 jae 0x5fc22e
// 005fc1af  68001f9b00           push 0x9b1f00
// 005fc1b4  8d4c2450             lea ecx, [esp + 0x50]
// 005fc1b8  ff15f4b69800         call dword ptr [0x98b6f4]
// 005fc1be  57                   push edi
// 005fc1bf  50                   push eax
// 005fc1c0  8d542438             lea edx, [esp + 0x38]
// 005fc1c4  52                   push edx
// 005fc1c5  c684249800000003     mov byte ptr [esp + 0x98], 3
// 005fc1cd  ff159cb59800         call dword ptr [0x98b59c]
// 005fc1d3  68001f9b00           push 0x9b1f00
// 005fc1d8  50                   push eax
// 005fc1d9  8d442428             lea eax, [esp + 0x28]
// 005fc1dd  50                   push eax
// 005fc1de  c68424a400000004     mov byte ptr [esp + 0xa4], 4
// 005fc1e6  ff1580b69800         call dword ptr [0x98b680]
// 005fc1ec  83c418               add esp, 0x18
// 005fc1ef  50                   push eax
// 005fc1f0  8d4e40               lea ecx, [esi + 0x40]
// 005fc1f3  c684249000000005     mov byte ptr [esp + 0x90], 5
// 005fc1fb  ff159cb69800         call dword ptr [0x98b69c]
// 005fc201  8d4c2414             lea ecx, [esp + 0x14]
// 005fc205  c684248c00000004     mov byte ptr [esp + 0x8c], 4
// 005fc20d  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc213  8d4c2430             lea ecx, [esp + 0x30]
// 005fc217  c684248c00000003     mov byte ptr [esp + 0x8c], 3
// 005fc21f  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc225  8d4c244c             lea ecx, [esp + 0x4c]
// 005fc229  e9a6000000           jmp 0x5fc2d4
// 005fc22e  6a0a                 push 0xa
// 005fc230  55                   push ebp
// 005fc231  8d4c2470             lea ecx, [esp + 0x70]
// 005fc235  51                   push ecx
// 005fc236  8bcf                 mov ecx, edi
// 005fc238  ff15a8b69800         call dword ptr [0x98b6a8]
// 005fc23e  8be8                 mov ebp, eax
// 005fc240  68001f9b00           push 0x9b1f00
// 005fc245  8d4c2418             lea ecx, [esp + 0x18]
// 005fc249  c684249000000006     mov byte ptr [esp + 0x90], 6
// 005fc251  ff15f4b69800         call dword ptr [0x98b6f4]
// 005fc257  55                   push ebp
// 005fc258  50                   push eax
// 005fc259  8d542438             lea edx, [esp + 0x38]
// 005fc25d  52                   push edx
// 005fc25e  c684249800000007     mov byte ptr [esp + 0x98], 7
// 005fc266  ff159cb59800         call dword ptr [0x98b59c]
// 005fc26c  68982e9c00           push 0x9c2e98
// 005fc271  50                   push eax
// 005fc272  8d442460             lea eax, [esp + 0x60]
// 005fc276  50                   push eax
// 005fc277  c68424a400000008     mov byte ptr [esp + 0xa4], 8
// 005fc27f  ff1580b69800         call dword ptr [0x98b680]
// 005fc285  83c418               add esp, 0x18
// 005fc288  50                   push eax
// 005fc289  8d4e40               lea ecx, [esi + 0x40]
// 005fc28c  c684249000000009     mov byte ptr [esp + 0x90], 9
// 005fc294  ff159cb69800         call dword ptr [0x98b69c]
// 005fc29a  8d4c244c             lea ecx, [esp + 0x4c]
// 005fc29e  c684248c00000008     mov byte ptr [esp + 0x8c], 8
// 005fc2a6  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc2ac  8d4c2430             lea ecx, [esp + 0x30]
// 005fc2b0  c684248c00000007     mov byte ptr [esp + 0x8c], 7
// 005fc2b8  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc2be  8d4c2414             lea ecx, [esp + 0x14]
// 005fc2c2  c684248c00000006     mov byte ptr [esp + 0x8c], 6
// 005fc2ca  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc2d0  8d4c2468             lea ecx, [esp + 0x68]
// 005fc2d4  c684248c00000002     mov byte ptr [esp + 0x8c], 2
// 005fc2dc  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc2e2  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 005fc2e5  6a01                 push 1
// 005fc2e7  51                   push ecx
// 005fc2e8  8bcb                 mov ecx, ebx
// 005fc2ea  e8e1dbffff           call 0x5f9ed0
// 005fc2ef  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 005fc2f3  8b4624               mov eax, dword ptr [esi + 0x24]
// 005fc2f6  7205                 jb 0x5fc2fd
// 005fc2f8  8b7f04               mov edi, dword ptr [edi + 4]
// 005fc2fb  eb03                 jmp 0x5fc300
// 005fc2fd  83c704               add edi, 4
// 005fc300  8b13                 mov edx, dword ptr [ebx]
// 005fc302  50                   push eax
// 005fc303  57                   push edi
// 005fc304  52                   push edx
// 005fc305  e866ecfeff           call 0x5eaf70
// 005fc30a  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 005fc311  83c40c               add esp, 0xc
// 005fc314  5f                   pop edi
// 005fc315  8bc6                 mov eax, esi
// 005fc317  5e                   pop esi
// 005fc318  5d                   pop ebp
// 005fc319  5b                   pop ebx
// 005fc31a  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc321  81c480000000         add esp, 0x80
// 005fc327  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TextInput@G3D@@QAE@W4FS@01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVSettings@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
