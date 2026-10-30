// roc 2010-06 00899080  unit: CXTCaptionButtonThemeOfficeXP  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00899080
//
// 00899080  83ec10               sub esp, 0x10
// 00899083  53                   push ebx
// 00899084  55                   push ebp
// 00899085  56                   push esi
// 00899086  8b742420             mov esi, dword ptr [esp + 0x20]
// 0089908a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0089908d  57                   push edi
// 0089908e  50                   push eax
// 0089908f  8bf9                 mov edi, ecx
// 00899091  e8d63c0e00           call 0x97cd6c
// 00899096  8d4e1c               lea ecx, [esi + 0x1c]
// 00899099  51                   push ecx
// 0089909a  8d542414             lea edx, [esp + 0x14]
// 0089909e  52                   push edx
// 0089909f  8be8                 mov ebp, eax
// 008990a1  ff1548bc9e00         call dword ptr [0x9ebc48]
// 008990a7  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 008990aa  8b742428             mov esi, dword ptr [esp + 0x28]
// 008990ae  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 008990b5  0f8582000000         jne 0x89913d
// 008990bb  ff1584bc9e00         call dword ptr [0x9ebc84]
// 008990c1  3b4620               cmp eax, dword ptr [esi + 0x20]
// 008990c4  7477                 je 0x89913d
// 008990c6  f6c301               test bl, 1
// 008990c9  7577                 jne 0x899142
// 008990cb  8bb6ac000000         mov esi, dword ptr [esi + 0xac]
// 008990d1  85f6                 test esi, esi
// 008990d3  7504                 jne 0x8990d9
// 008990d5  33c0                 xor eax, eax
// 008990d7  eb03                 jmp 0x8990dc
// 008990d9  8b4620               mov eax, dword ptr [esi + 0x20]
// 008990dc  50                   push eax
// 008990dd  ff1528bc9e00         call dword ptr [0x9ebc28]
// 008990e3  85c0                 test eax, eax
// 008990e5  7406                 je 0x8990ed
// 008990e7  8b4674               mov eax, dword ptr [esi + 0x74]
// 008990ea  894728               mov dword ptr [edi + 0x28], eax
// 008990ed  8b4728               mov eax, dword ptr [edi + 0x28]
// 008990f0  83f8ff               cmp eax, -1
// 008990f3  7503                 jne 0x8990f8
// 008990f5  8b4724               mov eax, dword ptr [edi + 0x24]
// 008990f8  50                   push eax
// 008990f9  8d4c2414             lea ecx, [esp + 0x14]
// 008990fd  51                   push ecx
// 008990fe  8bcd                 mov ecx, ebp
// 00899100  e839f6f0ff           call 0x7a873e
// 00899105  83bf8000000000       cmp dword ptr [edi + 0x80], 0
// 0089910c  0f8480000000         je 0x899192
// 00899112  8b4758               mov eax, dword ptr [edi + 0x58]
// 00899115  83f8ff               cmp eax, -1
// 00899118  7505                 jne 0x89911f
// 0089911a  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 0089911d  eb02                 jmp 0x899121
// 0089911f  8bc8                 mov ecx, eax
// 00899121  83f8ff               cmp eax, -1
// 00899124  750c                 jne 0x899132
// 00899126  8b7f54               mov edi, dword ptr [edi + 0x54]
// 00899129  51                   push ecx
// 0089912a  57                   push edi
// 0089912b  8d542418             lea edx, [esp + 0x18]
// 0089912f  52                   push edx
// 00899130  eb59                 jmp 0x89918b
// 00899132  51                   push ecx
// 00899133  8bf8                 mov edi, eax
// 00899135  57                   push edi
// 00899136  8d542418             lea edx, [esp + 0x18]
// 0089913a  52                   push edx
// 0089913b  eb4e                 jmp 0x89918b
// 0089913d  f6c301               test bl, 1
// 00899140  7409                 je 0x89914b
// 00899142  e8d9a9f4ff           call 0x7e3b20
// 00899147  6a21                 push 0x21
// 00899149  eb07                 jmp 0x899152
// 0089914b  e8d0a9f4ff           call 0x7e3b20
// 00899150  6a1f                 push 0x1f
// 00899152  8bc8                 mov ecx, eax
// 00899154  e857a1f4ff           call 0x7e32b0
// 00899159  50                   push eax
// 0089915a  8d442414             lea eax, [esp + 0x14]
// 0089915e  50                   push eax
// 0089915f  8bcd                 mov ecx, ebp
// 00899161  e8d8f5f0ff           call 0x7a873e
// 00899166  e8b5a9f4ff           call 0x7e3b20
// 0089916b  6a20                 push 0x20
// 0089916d  8bc8                 mov ecx, eax
// 0089916f  e83ca1f4ff           call 0x7e32b0
// 00899174  8bf0                 mov esi, eax
// 00899176  e8a5a9f4ff           call 0x7e3b20
// 0089917b  6a20                 push 0x20
// 0089917d  8bc8                 mov ecx, eax
// 0089917f  e82ca1f4ff           call 0x7e32b0
// 00899184  56                   push esi
// 00899185  50                   push eax
// 00899186  8d4c2418             lea ecx, [esp + 0x18]
// 0089918a  51                   push ecx
// 0089918b  8bcd                 mov ecx, ebp
// 0089918d  e8a6f5f0ff           call 0x7a8738
// 00899192  5f                   pop edi
// 00899193  5e                   pop esi
// 00899194  5d                   pop ebp
// 00899195  b801000000           mov eax, 1
// 0089919a  5b                   pop ebx
// 0089919b  83c410               add esp, 0x10
// 0089919e  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?DrawButtonThemeBackground@CXTCaptionButtonThemeOfficeXP@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
