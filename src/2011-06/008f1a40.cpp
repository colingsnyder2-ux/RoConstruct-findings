// roc 2011-06 008f1a40  unit: CXTCaptionButtonThemeOfficeXP  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f1a40
//
// 008f1a40  83ec10               sub esp, 0x10
// 008f1a43  53                   push ebx
// 008f1a44  55                   push ebp
// 008f1a45  56                   push esi
// 008f1a46  8b742420             mov esi, dword ptr [esp + 0x20]
// 008f1a4a  8b4618               mov eax, dword ptr [esi + 0x18]
// 008f1a4d  57                   push edi
// 008f1a4e  50                   push eax
// 008f1a4f  8bf9                 mov edi, ecx
// 008f1a51  e862ab0d00           call 0x9cc5b8
// 008f1a56  8d4e1c               lea ecx, [esi + 0x1c]
// 008f1a59  51                   push ecx
// 008f1a5a  8d542414             lea edx, [esp + 0x14]
// 008f1a5e  52                   push edx
// 008f1a5f  8be8                 mov ebp, eax
// 008f1a61  ff15681ca400         call dword ptr [0xa41c68]
// 008f1a67  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 008f1a6a  8b742428             mov esi, dword ptr [esp + 0x28]
// 008f1a6e  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 008f1a75  0f8582000000         jne 0x8f1afd
// 008f1a7b  ff15381ba400         call dword ptr [0xa41b38]
// 008f1a81  3b4620               cmp eax, dword ptr [esi + 0x20]
// 008f1a84  7477                 je 0x8f1afd
// 008f1a86  f6c301               test bl, 1
// 008f1a89  7577                 jne 0x8f1b02
// 008f1a8b  8bb6ac000000         mov esi, dword ptr [esi + 0xac]
// 008f1a91  85f6                 test esi, esi
// 008f1a93  7504                 jne 0x8f1a99
// 008f1a95  33c0                 xor eax, eax
// 008f1a97  eb03                 jmp 0x8f1a9c
// 008f1a99  8b4620               mov eax, dword ptr [esi + 0x20]
// 008f1a9c  50                   push eax
// 008f1a9d  ff15ec1ba400         call dword ptr [0xa41bec]
// 008f1aa3  85c0                 test eax, eax
// 008f1aa5  7406                 je 0x8f1aad
// 008f1aa7  8b4674               mov eax, dword ptr [esi + 0x74]
// 008f1aaa  894728               mov dword ptr [edi + 0x28], eax
// 008f1aad  8b4728               mov eax, dword ptr [edi + 0x28]
// 008f1ab0  83f8ff               cmp eax, -1
// 008f1ab3  7503                 jne 0x8f1ab8
// 008f1ab5  8b4724               mov eax, dword ptr [edi + 0x24]
// 008f1ab8  50                   push eax
// 008f1ab9  8d4c2414             lea ecx, [esp + 0x14]
// 008f1abd  51                   push ecx
// 008f1abe  8bcd                 mov ecx, ebp
// 008f1ac0  e85b93f1ff           call 0x80ae20
// 008f1ac5  83bf8000000000       cmp dword ptr [edi + 0x80], 0
// 008f1acc  0f8480000000         je 0x8f1b52
// 008f1ad2  8b4758               mov eax, dword ptr [edi + 0x58]
// 008f1ad5  83f8ff               cmp eax, -1
// 008f1ad8  7505                 jne 0x8f1adf
// 008f1ada  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 008f1add  eb02                 jmp 0x8f1ae1
// 008f1adf  8bc8                 mov ecx, eax
// 008f1ae1  83f8ff               cmp eax, -1
// 008f1ae4  750c                 jne 0x8f1af2
// 008f1ae6  8b7f54               mov edi, dword ptr [edi + 0x54]
// 008f1ae9  51                   push ecx
// 008f1aea  57                   push edi
// 008f1aeb  8d542418             lea edx, [esp + 0x18]
// 008f1aef  52                   push edx
// 008f1af0  eb59                 jmp 0x8f1b4b
// 008f1af2  51                   push ecx
// 008f1af3  8bf8                 mov edi, eax
// 008f1af5  57                   push edi
// 008f1af6  8d542418             lea edx, [esp + 0x18]
// 008f1afa  52                   push edx
// 008f1afb  eb4e                 jmp 0x8f1b4b
// 008f1afd  f6c301               test bl, 1
// 008f1b00  7409                 je 0x8f1b0b
// 008f1b02  e8d938f5ff           call 0x8453e0
// 008f1b07  6a21                 push 0x21
// 008f1b09  eb07                 jmp 0x8f1b12
// 008f1b0b  e8d038f5ff           call 0x8453e0
// 008f1b10  6a1f                 push 0x1f
// 008f1b12  8bc8                 mov ecx, eax
// 008f1b14  e89730f5ff           call 0x844bb0
// 008f1b19  50                   push eax
// 008f1b1a  8d442414             lea eax, [esp + 0x14]
// 008f1b1e  50                   push eax
// 008f1b1f  8bcd                 mov ecx, ebp
// 008f1b21  e8fa92f1ff           call 0x80ae20
// 008f1b26  e8b538f5ff           call 0x8453e0
// 008f1b2b  6a20                 push 0x20
// 008f1b2d  8bc8                 mov ecx, eax
// 008f1b2f  e87c30f5ff           call 0x844bb0
// 008f1b34  8bf0                 mov esi, eax
// 008f1b36  e8a538f5ff           call 0x8453e0
// 008f1b3b  6a20                 push 0x20
// 008f1b3d  8bc8                 mov ecx, eax
// 008f1b3f  e86c30f5ff           call 0x844bb0
// 008f1b44  56                   push esi
// 008f1b45  50                   push eax
// 008f1b46  8d4c2418             lea ecx, [esp + 0x18]
// 008f1b4a  51                   push ecx
// 008f1b4b  8bcd                 mov ecx, ebp
// 008f1b4d  e8c892f1ff           call 0x80ae1a
// 008f1b52  5f                   pop edi
// 008f1b53  5e                   pop esi
// 008f1b54  5d                   pop ebp
// 008f1b55  b801000000           mov eax, 1
// 008f1b5a  5b                   pop ebx
// 008f1b5b  83c410               add esp, 0x10
// 008f1b5e  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?DrawButtonThemeBackground@CXTCaptionButtonThemeOfficeXP@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
