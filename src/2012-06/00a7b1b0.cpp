// roc 2012-06 00a7b1b0  unit: CXTButtonThemeOffice2003  size: 432 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7b1b0
//
// 00a7b1b0  83ec10               sub esp, 0x10
// 00a7b1b3  53                   push ebx
// 00a7b1b4  55                   push ebp
// 00a7b1b5  56                   push esi
// 00a7b1b6  8b742420             mov esi, dword ptr [esp + 0x20]
// 00a7b1ba  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a7b1bd  57                   push edi
// 00a7b1be  50                   push eax
// 00a7b1bf  8bd9                 mov ebx, ecx
// 00a7b1c1  e8ace30100           call 0xa99572
// 00a7b1c6  8d4e1c               lea ecx, [esi + 0x1c]
// 00a7b1c9  51                   push ecx
// 00a7b1ca  8d542414             lea edx, [esp + 0x14]
// 00a7b1ce  52                   push edx
// 00a7b1cf  8bf8                 mov edi, eax
// 00a7b1d1  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a7b1d7  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a7b1db  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 00a7b1e2  8b7610               mov esi, dword ptr [esi + 0x10]
// 00a7b1e5  8b687c               mov ebp, dword ptr [eax + 0x7c]
// 00a7b1e8  7513                 jne 0xa7b1fd
// 00a7b1ea  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a7b1f0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a7b1f4  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 00a7b1f7  7404                 je 0xa7b1fd
// 00a7b1f9  33c0                 xor eax, eax
// 00a7b1fb  eb05                 jmp 0xa7b202
// 00a7b1fd  b801000000           mov eax, 1
// 00a7b202  83e601               and esi, 1
// 00a7b205  85ed                 test ebp, ebp
// 00a7b207  754d                 jne 0xa7b256
// 00a7b209  85c0                 test eax, eax
// 00a7b20b  7549                 jne 0xa7b256
// 00a7b20d  85f6                 test esi, esi
// 00a7b20f  7549                 jne 0xa7b25a
// 00a7b211  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00a7b214  83f8ff               cmp eax, -1
// 00a7b217  7503                 jne 0xa7b21c
// 00a7b219  8b4324               mov eax, dword ptr [ebx + 0x24]
// 00a7b21c  50                   push eax
// 00a7b21d  8d542414             lea edx, [esp + 0x14]
// 00a7b221  52                   push edx
// 00a7b222  8bcf                 mov ecx, edi
// 00a7b224  e8837cf0ff           call 0x982eac
// 00a7b229  83bb8000000000       cmp dword ptr [ebx + 0x80], 0
// 00a7b230  0f841b010000         je 0xa7b351
// 00a7b236  8b4358               mov eax, dword ptr [ebx + 0x58]
// 00a7b239  83f8ff               cmp eax, -1
// 00a7b23c  7505                 jne 0xa7b243
// 00a7b23e  8b4b54               mov ecx, dword ptr [ebx + 0x54]
// 00a7b241  eb02                 jmp 0xa7b245
// 00a7b243  8bc8                 mov ecx, eax
// 00a7b245  83f8ff               cmp eax, -1
// 00a7b248  7503                 jne 0xa7b24d
// 00a7b24a  8b4354               mov eax, dword ptr [ebx + 0x54]
// 00a7b24d  51                   push ecx
// 00a7b24e  50                   push eax
// 00a7b24f  8d442418             lea eax, [esp + 0x18]
// 00a7b253  50                   push eax
// 00a7b254  eb77                 jmp 0xa7b2cd
// 00a7b256  85f6                 test esi, esi
// 00a7b258  7416                 je 0xa7b270
// 00a7b25a  e80126f4ff           call 0x9bd860
// 00a7b25f  6a00                 push 0
// 00a7b261  6a00                 push 0
// 00a7b263  0520010000           add eax, 0x120
// 00a7b268  50                   push eax
// 00a7b269  8d4c241c             lea ecx, [esp + 0x1c]
// 00a7b26d  51                   push ecx
// 00a7b26e  eb32                 jmp 0xa7b2a2
// 00a7b270  85c0                 test eax, eax
// 00a7b272  7416                 je 0xa7b28a
// 00a7b274  e8e725f4ff           call 0x9bd860
// 00a7b279  6a00                 push 0
// 00a7b27b  6a00                 push 0
// 00a7b27d  0540010000           add eax, 0x140
// 00a7b282  50                   push eax
// 00a7b283  8d54241c             lea edx, [esp + 0x1c]
// 00a7b287  52                   push edx
// 00a7b288  eb18                 jmp 0xa7b2a2
// 00a7b28a  85ed                 test ebp, ebp
// 00a7b28c  7421                 je 0xa7b2af
// 00a7b28e  e8cd25f4ff           call 0x9bd860
// 00a7b293  6a00                 push 0
// 00a7b295  6a00                 push 0
// 00a7b297  0500010000           add eax, 0x100
// 00a7b29c  50                   push eax
// 00a7b29d  8d44241c             lea eax, [esp + 0x1c]
// 00a7b2a1  50                   push eax
// 00a7b2a2  57                   push edi
// 00a7b2a3  e8e8bef5ff           call 0x9d7190
// 00a7b2a8  8bc8                 mov ecx, eax
// 00a7b2aa  e801c2f5ff           call 0x9d74b0
// 00a7b2af  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 00a7b2b2  83f8ff               cmp eax, -1
// 00a7b2b5  7505                 jne 0xa7b2bc
// 00a7b2b7  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 00a7b2ba  eb02                 jmp 0xa7b2be
// 00a7b2bc  8bc8                 mov ecx, eax
// 00a7b2be  83f8ff               cmp eax, -1
// 00a7b2c1  7503                 jne 0xa7b2c6
// 00a7b2c3  8b4348               mov eax, dword ptr [ebx + 0x48]
// 00a7b2c6  51                   push ecx
// 00a7b2c7  50                   push eax
// 00a7b2c8  8d4c2418             lea ecx, [esp + 0x18]
// 00a7b2cc  51                   push ecx
// 00a7b2cd  8bcf                 mov ecx, edi
// 00a7b2cf  e8d27bf0ff           call 0x982ea6
// 00a7b2d4  83bb8000000000       cmp dword ptr [ebx + 0x80], 0
// 00a7b2db  7474                 je 0xa7b351
// 00a7b2dd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a7b2e1  e8faf3feff           call 0xa6a6e0
// 00a7b2e6  3c01                 cmp al, 1
// 00a7b2e8  7567                 jne 0xa7b351
// 00a7b2ea  e87125f4ff           call 0x9bd860
// 00a7b2ef  6a0d                 push 0xd
// 00a7b2f1  8bc8                 mov ecx, eax
// 00a7b2f3  e8e81cf4ff           call 0x9bcfe0
// 00a7b2f8  8bf0                 mov esi, eax
// 00a7b2fa  e86125f4ff           call 0x9bd860
// 00a7b2ff  6a0d                 push 0xd
// 00a7b301  8bc8                 mov ecx, eax
// 00a7b303  e8d81cf4ff           call 0x9bcfe0
// 00a7b308  56                   push esi
// 00a7b309  50                   push eax
// 00a7b30a  8d542418             lea edx, [esp + 0x18]
// 00a7b30e  52                   push edx
// 00a7b30f  8bcf                 mov ecx, edi
// 00a7b311  e8907bf0ff           call 0x982ea6
// 00a7b316  6aff                 push -1
// 00a7b318  6aff                 push -1
// 00a7b31a  8d442418             lea eax, [esp + 0x18]
// 00a7b31e  50                   push eax
// 00a7b31f  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a7b325  e83625f4ff           call 0x9bd860
// 00a7b32a  6a0d                 push 0xd
// 00a7b32c  8bc8                 mov ecx, eax
// 00a7b32e  e8ad1cf4ff           call 0x9bcfe0
// 00a7b333  8bf0                 mov esi, eax
// 00a7b335  e82625f4ff           call 0x9bd860
// 00a7b33a  6a0d                 push 0xd
// 00a7b33c  8bc8                 mov ecx, eax
// 00a7b33e  e89d1cf4ff           call 0x9bcfe0
// 00a7b343  56                   push esi
// 00a7b344  50                   push eax
// 00a7b345  8d4c2418             lea ecx, [esp + 0x18]
// 00a7b349  51                   push ecx
// 00a7b34a  8bcf                 mov ecx, edi
// 00a7b34c  e8557bf0ff           call 0x982ea6
// 00a7b351  5f                   pop edi
// 00a7b352  5e                   pop esi
// 00a7b353  5d                   pop ebp
// 00a7b354  b801000000           mov eax, 1
// 00a7b359  5b                   pop ebx
// 00a7b35a  83c410               add esp, 0x10
// 00a7b35d  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonThemeBackground@CXTButtonThemeOffice2003@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
