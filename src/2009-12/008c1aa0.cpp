// roc 2009-12 008c1aa0  unit: CXTPImageEditorDlg::CDlgToolBar  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c1aa0
//
// 008c1aa0  6aff                 push -1
// 008c1aa2  6868989500           push 0x959868
// 008c1aa7  64a100000000         mov eax, dword ptr fs:[0]
// 008c1aad  50                   push eax
// 008c1aae  83ec10               sub esp, 0x10
// 008c1ab1  53                   push ebx
// 008c1ab2  55                   push ebp
// 008c1ab3  56                   push esi
// 008c1ab4  57                   push edi
// 008c1ab5  a10052b600           mov eax, dword ptr [0xb65200]
// 008c1aba  33c4                 xor eax, esp
// 008c1abc  50                   push eax
// 008c1abd  8d442424             lea eax, [esp + 0x24]
// 008c1ac1  64a300000000         mov dword ptr fs:[0], eax
// 008c1ac7  8d4c2414             lea ecx, [esp + 0x14]
// 008c1acb  e8de490600           call 0x9264ae
// 008c1ad0  8b442454             mov eax, dword ptr [esp + 0x54]
// 008c1ad4  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 008c1adc  85c0                 test eax, eax
// 008c1ade  7403                 je 0x8c1ae3
// 008c1ae0  8b4004               mov eax, dword ptr [eax + 4]
// 008c1ae3  50                   push eax
// 008c1ae4  ff1554b19800         call dword ptr [0x98b154]
// 008c1aea  50                   push eax
// 008c1aeb  8d4c2418             lea ecx, [esp + 0x18]
// 008c1aef  e8a8490600           call 0x92649c
// 008c1af4  8b442440             mov eax, dword ptr [esp + 0x40]
// 008c1af8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008c1afc  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008c1b00  50                   push eax
// 008c1b01  51                   push ecx
// 008c1b02  8bcf                 mov ecx, edi
// 008c1b04  e8f7f5ffff           call 0x8c1100
// 008c1b09  85ff                 test edi, edi
// 008c1b0b  7504                 jne 0x8c1b11
// 008c1b0d  33c0                 xor eax, eax
// 008c1b0f  eb03                 jmp 0x8c1b14
// 008c1b11  8b4704               mov eax, dword ptr [edi + 4]
// 008c1b14  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c1b18  50                   push eax
// 008c1b19  52                   push edx
// 008c1b1a  e8d94a0600           call 0x9265f8
// 008c1b1f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008c1b23  68fffeff00           push 0xfffeff
// 008c1b28  89442458             mov dword ptr [esp + 0x58], eax
// 008c1b2c  8b442444             mov eax, dword ptr [esp + 0x44]
// 008c1b30  50                   push eax
// 008c1b31  51                   push ecx
// 008c1b32  6a00                 push 0
// 008c1b34  6a00                 push 0
// 008c1b36  8d4c2428             lea ecx, [esp + 0x28]
// 008c1b3a  e857490600           call 0x926496
// 008c1b3f  8b742438             mov esi, dword ptr [esp + 0x38]
// 008c1b43  85f6                 test esi, esi
// 008c1b45  0f848c000000         je 0x8c1bd7
// 008c1b4b  8b542440             mov edx, dword ptr [esp + 0x40]
// 008c1b4f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008c1b53  8b4604               mov eax, dword ptr [esi + 4]
// 008c1b56  6a04                 push 4
// 008c1b58  52                   push edx
// 008c1b59  8b542450             mov edx, dword ptr [esp + 0x50]
// 008c1b5d  51                   push ecx
// 008c1b5e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008c1b62  52                   push edx
// 008c1b63  8b542428             mov edx, dword ptr [esp + 0x28]
// 008c1b67  51                   push ecx
// 008c1b68  6a00                 push 0
// 008c1b6a  50                   push eax
// 008c1b6b  6a00                 push 0
// 008c1b6d  6a00                 push 0
// 008c1b6f  52                   push edx
// 008c1b70  ff15f8ca9800         call dword ptr [0x98caf8]
// 008c1b76  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 008c1b7a  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 008c1b7e  3bdd                 cmp ebx, ebp
// 008c1b80  7455                 je 0x8c1bd7
// 008c1b82  837e0800             cmp dword ptr [esi + 8], 0
// 008c1b86  754f                 jne 0x8c1bd7
// 008c1b88  33ff                 xor edi, edi
// 008c1b8a  397c243c             cmp dword ptr [esp + 0x3c], edi
// 008c1b8e  7e43                 jle 0x8c1bd3
// 008c1b90  8b442440             mov eax, dword ptr [esp + 0x40]
// 008c1b94  33f6                 xor esi, esi
// 008c1b96  85c0                 test eax, eax
// 008c1b98  7e2e                 jle 0x8c1bc8
// 008c1b9a  8d9b00000000         lea ebx, [ebx]
// 008c1ba0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c1ba4  56                   push esi
// 008c1ba5  57                   push edi
// 008c1ba6  50                   push eax
// 008c1ba7  ff1518b19800         call dword ptr [0x98b118]
// 008c1bad  3bc3                 cmp eax, ebx
// 008c1baf  750e                 jne 0x8c1bbf
// 008c1bb1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c1bb5  55                   push ebp
// 008c1bb6  56                   push esi
// 008c1bb7  57                   push edi
// 008c1bb8  51                   push ecx
// 008c1bb9  ff1514b19800         call dword ptr [0x98b114]
// 008c1bbf  8b442440             mov eax, dword ptr [esp + 0x40]
// 008c1bc3  46                   inc esi
// 008c1bc4  3bf0                 cmp esi, eax
// 008c1bc6  7cd8                 jl 0x8c1ba0
// 008c1bc8  47                   inc edi
// 008c1bc9  3b7c243c             cmp edi, dword ptr [esp + 0x3c]
// 008c1bcd  7cc5                 jl 0x8c1b94
// 008c1bcf  8b742438             mov esi, dword ptr [esp + 0x38]
// 008c1bd3  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008c1bd7  8b442454             mov eax, dword ptr [esp + 0x54]
// 008c1bdb  85c0                 test eax, eax
// 008c1bdd  7403                 je 0x8c1be2
// 008c1bdf  8b4004               mov eax, dword ptr [eax + 4]
// 008c1be2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c1be6  50                   push eax
// 008c1be7  52                   push edx
// 008c1be8  e80b4a0600           call 0x9265f8
// 008c1bed  85f6                 test esi, esi
// 008c1bef  7405                 je 0x8c1bf6
// 008c1bf1  8b4608               mov eax, dword ptr [esi + 8]
// 008c1bf4  eb02                 jmp 0x8c1bf8
// 008c1bf6  33c0                 xor eax, eax
// 008c1bf8  8d4c2414             lea ecx, [esp + 0x14]
// 008c1bfc  894708               mov dword ptr [edi + 8], eax
// 008c1bff  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008c1c07  e89c480600           call 0x9264a8
// 008c1c0c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008c1c10  64890d00000000       mov dword ptr fs:[0], ecx
// 008c1c17  59                   pop ecx
// 008c1c18  5f                   pop edi
// 008c1c19  5e                   pop esi
// 008c1c1a  5d                   pop ebp
// 008c1c1b  5b                   pop ebx
// 008c1c1c  83c41c               add esp, 0x1c
// 008c1c1f  c3                   ret 
// copied from an identical function in another client (function ?CopyBitmap@CXTPImageEditorPicture@@SAXPAVCAlphaBitmap@1@0VCSize@@VCPoint@@KKPAVCDC@@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPImageEditor.cpp