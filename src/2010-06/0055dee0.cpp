// roc 2010-06 0055dee0  unit: G3D::TextInput::WrongSymbol  size: 538 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055dee0
//
// 0055dee0  6aff                 push -1
// 0055dee2  68ed169900           push 0x9916ed
// 0055dee7  64a100000000         mov eax, dword ptr fs:[0]
// 0055deed  50                   push eax
// 0055deee  64892500000000       mov dword ptr fs:[0], esp
// 0055def5  83ec74               sub esp, 0x74
// 0055def8  53                   push ebx
// 0055def9  55                   push ebp
// 0055defa  56                   push esi
// 0055defb  57                   push edi
// 0055defc  8bf1                 mov esi, ecx
// 0055defe  6a04                 push 4
// 0055df00  89742414             mov dword ptr [esp + 0x14], esi
// 0055df04  e8979a2400           call 0x7a79a0
// 0055df09  33ed                 xor ebp, ebp
// 0055df0b  83c404               add esp, 4
// 0055df0e  3bc5                 cmp eax, ebp
// 0055df10  7404                 je 0x55df16
// 0055df12  8930                 mov dword ptr [eax], esi
// 0055df14  eb02                 jmp 0x55df18
// 0055df16  33c0                 xor eax, eax
// 0055df18  8906                 mov dword ptr [esi], eax
// 0055df1a  896e10               mov dword ptr [esi + 0x10], ebp
// 0055df1d  896e14               mov dword ptr [esi + 0x14], ebp
// 0055df20  896e18               mov dword ptr [esi + 0x18], ebp
// 0055df23  896e1c               mov dword ptr [esi + 0x1c], ebp
// 0055df26  8d5e20               lea ebx, [esi + 0x20]
// 0055df29  89ac248c000000       mov dword ptr [esp + 0x8c], ebp
// 0055df30  896b04               mov dword ptr [ebx + 4], ebp
// 0055df33  896b08               mov dword ptr [ebx + 8], ebp
// 0055df36  892b                 mov dword ptr [ebx], ebp
// 0055df38  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0055df3f  50                   push eax
// 0055df40  8d4e38               lea ecx, [esi + 0x38]
// 0055df43  c684249000000001     mov byte ptr [esp + 0x90], 1
// 0055df4b  e8d0e9ffff           call 0x55c920
// 0055df50  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0055df53  8bbc2498000000       mov edi, dword ptr [esp + 0x98]
// 0055df5a  41                   inc ecx
// 0055df5b  c684248c00000002     mov byte ptr [esp + 0x8c], 2
// 0055df63  896e2c               mov dword ptr [esi + 0x2c], ebp
// 0055df66  c7463401000000       mov dword ptr [esi + 0x34], 1
// 0055df6d  894e30               mov dword ptr [esi + 0x30], ecx
// 0055df70  396e54               cmp dword ptr [esi + 0x54], ebp
// 0055df73  0f8539010000         jne 0x55e0b2
// 0055df79  837f140e             cmp dword ptr [edi + 0x14], 0xe
// 0055df7d  737f                 jae 0x55dffe
// 0055df7f  682830a100           push 0xa13028
// 0055df84  8d4c2450             lea ecx, [esp + 0x50]
// 0055df88  ff1510a49e00         call dword ptr [0x9ea410]
// 0055df8e  57                   push edi
// 0055df8f  50                   push eax
// 0055df90  8d542438             lea edx, [esp + 0x38]
// 0055df94  52                   push edx
// 0055df95  c684249800000003     mov byte ptr [esp + 0x98], 3
// 0055df9d  ff1504a79e00         call dword ptr [0x9ea704]
// 0055dfa3  682830a100           push 0xa13028
// 0055dfa8  50                   push eax
// 0055dfa9  8d442428             lea eax, [esp + 0x28]
// 0055dfad  50                   push eax
// 0055dfae  c68424a400000004     mov byte ptr [esp + 0xa4], 4
// 0055dfb6  ff1588a49e00         call dword ptr [0x9ea488]
// 0055dfbc  83c418               add esp, 0x18
// 0055dfbf  50                   push eax
// 0055dfc0  8d4e40               lea ecx, [esi + 0x40]
// 0055dfc3  c684249000000005     mov byte ptr [esp + 0x90], 5
// 0055dfcb  ff1568a49e00         call dword ptr [0x9ea468]
// 0055dfd1  8d4c2414             lea ecx, [esp + 0x14]
// 0055dfd5  c684248c00000004     mov byte ptr [esp + 0x8c], 4
// 0055dfdd  ff1500a49e00         call dword ptr [0x9ea400]
// 0055dfe3  8d4c2430             lea ecx, [esp + 0x30]
// 0055dfe7  c684248c00000003     mov byte ptr [esp + 0x8c], 3
// 0055dfef  ff1500a49e00         call dword ptr [0x9ea400]
// 0055dff5  8d4c244c             lea ecx, [esp + 0x4c]
// 0055dff9  e9a6000000           jmp 0x55e0a4
// 0055dffe  6a0a                 push 0xa
// 0055e000  55                   push ebp
// 0055e001  8d4c2470             lea ecx, [esp + 0x70]
// 0055e005  51                   push ecx
// 0055e006  8bcf                 mov ecx, edi
// 0055e008  ff155ca49e00         call dword ptr [0x9ea45c]
// 0055e00e  8be8                 mov ebp, eax
// 0055e010  682830a100           push 0xa13028
// 0055e015  8d4c2418             lea ecx, [esp + 0x18]
// 0055e019  c684249000000006     mov byte ptr [esp + 0x90], 6
// 0055e021  ff1510a49e00         call dword ptr [0x9ea410]
// 0055e027  55                   push ebp
// 0055e028  50                   push eax
// 0055e029  8d542438             lea edx, [esp + 0x38]
// 0055e02d  52                   push edx
// 0055e02e  c684249800000007     mov byte ptr [esp + 0x98], 7
// 0055e036  ff1504a79e00         call dword ptr [0x9ea704]
// 0055e03c  68c00ba200           push 0xa20bc0
// 0055e041  50                   push eax
// 0055e042  8d442460             lea eax, [esp + 0x60]
// 0055e046  50                   push eax
// 0055e047  c68424a400000008     mov byte ptr [esp + 0xa4], 8
// 0055e04f  ff1588a49e00         call dword ptr [0x9ea488]
// 0055e055  83c418               add esp, 0x18
// 0055e058  50                   push eax
// 0055e059  8d4e40               lea ecx, [esi + 0x40]
// 0055e05c  c684249000000009     mov byte ptr [esp + 0x90], 9
// 0055e064  ff1568a49e00         call dword ptr [0x9ea468]
// 0055e06a  8d4c244c             lea ecx, [esp + 0x4c]
// 0055e06e  c684248c00000008     mov byte ptr [esp + 0x8c], 8
// 0055e076  ff1500a49e00         call dword ptr [0x9ea400]
// 0055e07c  8d4c2430             lea ecx, [esp + 0x30]
// 0055e080  c684248c00000007     mov byte ptr [esp + 0x8c], 7
// 0055e088  ff1500a49e00         call dword ptr [0x9ea400]
// 0055e08e  8d4c2414             lea ecx, [esp + 0x14]
// 0055e092  c684248c00000006     mov byte ptr [esp + 0x8c], 6
// 0055e09a  ff1500a49e00         call dword ptr [0x9ea400]
// 0055e0a0  8d4c2468             lea ecx, [esp + 0x68]
// 0055e0a4  c684248c00000002     mov byte ptr [esp + 0x8c], 2
// 0055e0ac  ff1500a49e00         call dword ptr [0x9ea400]
// 0055e0b2  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0055e0b5  6a01                 push 1
// 0055e0b7  51                   push ecx
// 0055e0b8  8bcb                 mov ecx, ebx
// 0055e0ba  e8b199ffff           call 0x557a70
// 0055e0bf  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 0055e0c3  8b4624               mov eax, dword ptr [esi + 0x24]
// 0055e0c6  7205                 jb 0x55e0cd
// 0055e0c8  8b7f04               mov edi, dword ptr [edi + 4]
// 0055e0cb  eb03                 jmp 0x55e0d0
// 0055e0cd  83c704               add edi, 4
// 0055e0d0  8b13                 mov edx, dword ptr [ebx]
// 0055e0d2  50                   push eax
// 0055e0d3  57                   push edi
// 0055e0d4  52                   push edx
// 0055e0d5  e87604ffff           call 0x54e550
// 0055e0da  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0055e0e1  83c40c               add esp, 0xc
// 0055e0e4  5f                   pop edi
// 0055e0e5  8bc6                 mov eax, esi
// 0055e0e7  5e                   pop esi
// 0055e0e8  5d                   pop ebp
// 0055e0e9  5b                   pop ebx
// 0055e0ea  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e0f1  81c480000000         add esp, 0x80
// 0055e0f7  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TextInput@G3D@@QAE@W4FS@01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVSettings@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
