// roc 2009-06 0080a2d0  unit: CXTCaptionButtonThemeOfficeXP  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080a2d0
//
// 0080a2d0  83ec10               sub esp, 0x10
// 0080a2d3  53                   push ebx
// 0080a2d4  55                   push ebp
// 0080a2d5  56                   push esi
// 0080a2d6  8b742420             mov esi, dword ptr [esp + 0x20]
// 0080a2da  8b4618               mov eax, dword ptr [esi + 0x18]
// 0080a2dd  57                   push edi
// 0080a2de  50                   push eax
// 0080a2df  8bf9                 mov edi, ecx
// 0080a2e1  e8261c0400           call 0x84bf0c
// 0080a2e6  8d4e1c               lea ecx, [esi + 0x1c]
// 0080a2e9  51                   push ecx
// 0080a2ea  8d542414             lea edx, [esp + 0x14]
// 0080a2ee  52                   push edx
// 0080a2ef  8be8                 mov ebp, eax
// 0080a2f1  ff1500ee8900         call dword ptr [0x89ee00]
// 0080a2f7  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0080a2fa  8b742428             mov esi, dword ptr [esp + 0x28]
// 0080a2fe  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 0080a305  0f8582000000         jne 0x80a38d
// 0080a30b  ff153cee8900         call dword ptr [0x89ee3c]
// 0080a311  3b4620               cmp eax, dword ptr [esi + 0x20]
// 0080a314  7477                 je 0x80a38d
// 0080a316  f6c301               test bl, 1
// 0080a319  7577                 jne 0x80a392
// 0080a31b  8bb6ac000000         mov esi, dword ptr [esi + 0xac]
// 0080a321  85f6                 test esi, esi
// 0080a323  7504                 jne 0x80a329
// 0080a325  33c0                 xor eax, eax
// 0080a327  eb03                 jmp 0x80a32c
// 0080a329  8b4620               mov eax, dword ptr [esi + 0x20]
// 0080a32c  50                   push eax
// 0080a32d  ff15e0ed8900         call dword ptr [0x89ede0]
// 0080a333  85c0                 test eax, eax
// 0080a335  7406                 je 0x80a33d
// 0080a337  8b4674               mov eax, dword ptr [esi + 0x74]
// 0080a33a  894728               mov dword ptr [edi + 0x28], eax
// 0080a33d  8b4728               mov eax, dword ptr [edi + 0x28]
// 0080a340  83f8ff               cmp eax, -1
// 0080a343  7503                 jne 0x80a348
// 0080a345  8b4724               mov eax, dword ptr [edi + 0x24]
// 0080a348  50                   push eax
// 0080a349  8d4c2414             lea ecx, [esp + 0x14]
// 0080a34d  51                   push ecx
// 0080a34e  8bcd                 mov ecx, ebp
// 0080a350  e87bf4f0ff           call 0x7197d0
// 0080a355  83bf8000000000       cmp dword ptr [edi + 0x80], 0
// 0080a35c  0f8480000000         je 0x80a3e2
// 0080a362  8b4758               mov eax, dword ptr [edi + 0x58]
// 0080a365  83f8ff               cmp eax, -1
// 0080a368  7505                 jne 0x80a36f
// 0080a36a  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 0080a36d  eb02                 jmp 0x80a371
// 0080a36f  8bc8                 mov ecx, eax
// 0080a371  83f8ff               cmp eax, -1
// 0080a374  750c                 jne 0x80a382
// 0080a376  8b7f54               mov edi, dword ptr [edi + 0x54]
// 0080a379  51                   push ecx
// 0080a37a  57                   push edi
// 0080a37b  8d542418             lea edx, [esp + 0x18]
// 0080a37f  52                   push edx
// 0080a380  eb59                 jmp 0x80a3db
// 0080a382  51                   push ecx
// 0080a383  8bf8                 mov edi, eax
// 0080a385  57                   push edi
// 0080a386  8d542418             lea edx, [esp + 0x18]
// 0080a38a  52                   push edx
// 0080a38b  eb4e                 jmp 0x80a3db
// 0080a38d  f6c301               test bl, 1
// 0080a390  7409                 je 0x80a39b
// 0080a392  e889a7f4ff           call 0x754b20
// 0080a397  6a21                 push 0x21
// 0080a399  eb07                 jmp 0x80a3a2
// 0080a39b  e880a7f4ff           call 0x754b20
// 0080a3a0  6a1f                 push 0x1f
// 0080a3a2  8bc8                 mov ecx, eax
// 0080a3a4  e8f79ef4ff           call 0x7542a0
// 0080a3a9  50                   push eax
// 0080a3aa  8d442414             lea eax, [esp + 0x14]
// 0080a3ae  50                   push eax
// 0080a3af  8bcd                 mov ecx, ebp
// 0080a3b1  e81af4f0ff           call 0x7197d0
// 0080a3b6  e865a7f4ff           call 0x754b20
// 0080a3bb  6a20                 push 0x20
// 0080a3bd  8bc8                 mov ecx, eax
// 0080a3bf  e8dc9ef4ff           call 0x7542a0
// 0080a3c4  8bf0                 mov esi, eax
// 0080a3c6  e855a7f4ff           call 0x754b20
// 0080a3cb  6a20                 push 0x20
// 0080a3cd  8bc8                 mov ecx, eax
// 0080a3cf  e8cc9ef4ff           call 0x7542a0
// 0080a3d4  56                   push esi
// 0080a3d5  50                   push eax
// 0080a3d6  8d4c2418             lea ecx, [esp + 0x18]
// 0080a3da  51                   push ecx
// 0080a3db  8bcd                 mov ecx, ebp
// 0080a3dd  e8e8f3f0ff           call 0x7197ca
// 0080a3e2  5f                   pop edi
// 0080a3e3  5e                   pop esi
// 0080a3e4  5d                   pop ebp
// 0080a3e5  b801000000           mov eax, 1
// 0080a3ea  5b                   pop ebx
// 0080a3eb  83c410               add esp, 0x10
// 0080a3ee  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?DrawButtonThemeBackground@CXTCaptionButtonThemeOfficeXP@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
