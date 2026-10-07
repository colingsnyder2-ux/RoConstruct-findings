// roc 2008-06 00791ab0  unit: CXTCaptionButtonThemeOfficeXP  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00791ab0
//
// 00791ab0  83ec10               sub esp, 0x10
// 00791ab3  53                   push ebx
// 00791ab4  55                   push ebp
// 00791ab5  56                   push esi
// 00791ab6  8b742420             mov esi, dword ptr [esp + 0x20]
// 00791aba  8b4618               mov eax, dword ptr [esi + 0x18]
// 00791abd  57                   push edi
// 00791abe  50                   push eax
// 00791abf  8bf9                 mov edi, ecx
// 00791ac1  e862a50200           call 0x7bc028
// 00791ac6  8d4e1c               lea ecx, [esi + 0x1c]
// 00791ac9  51                   push ecx
// 00791aca  8d542414             lea edx, [esp + 0x14]
// 00791ace  52                   push edx
// 00791acf  8be8                 mov ebp, eax
// 00791ad1  ff15702d8000         call dword ptr [0x802d70]
// 00791ad7  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00791ada  8b742428             mov esi, dword ptr [esp + 0x28]
// 00791ade  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00791ae5  0f8582000000         jne 0x791b6d
// 00791aeb  ff15ac2d8000         call dword ptr [0x802dac]
// 00791af1  3b4620               cmp eax, dword ptr [esi + 0x20]
// 00791af4  7477                 je 0x791b6d
// 00791af6  f6c301               test bl, 1
// 00791af9  7577                 jne 0x791b72
// 00791afb  8bb6ac000000         mov esi, dword ptr [esi + 0xac]
// 00791b01  85f6                 test esi, esi
// 00791b03  7504                 jne 0x791b09
// 00791b05  33c0                 xor eax, eax
// 00791b07  eb03                 jmp 0x791b0c
// 00791b09  8b4620               mov eax, dword ptr [esi + 0x20]
// 00791b0c  50                   push eax
// 00791b0d  ff15502d8000         call dword ptr [0x802d50]
// 00791b13  85c0                 test eax, eax
// 00791b15  7406                 je 0x791b1d
// 00791b17  8b4674               mov eax, dword ptr [esi + 0x74]
// 00791b1a  894728               mov dword ptr [edi + 0x28], eax
// 00791b1d  8b4728               mov eax, dword ptr [edi + 0x28]
// 00791b20  83f8ff               cmp eax, -1
// 00791b23  7503                 jne 0x791b28
// 00791b25  8b4724               mov eax, dword ptr [edi + 0x24]
// 00791b28  50                   push eax
// 00791b29  8d4c2414             lea ecx, [esp + 0x14]
// 00791b2d  51                   push ecx
// 00791b2e  8bcd                 mov ecx, ebp
// 00791b30  e829f8f0ff           call 0x6a135e
// 00791b35  83bf8000000000       cmp dword ptr [edi + 0x80], 0
// 00791b3c  0f8480000000         je 0x791bc2
// 00791b42  8b4758               mov eax, dword ptr [edi + 0x58]
// 00791b45  83f8ff               cmp eax, -1
// 00791b48  7505                 jne 0x791b4f
// 00791b4a  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 00791b4d  eb02                 jmp 0x791b51
// 00791b4f  8bc8                 mov ecx, eax
// 00791b51  83f8ff               cmp eax, -1
// 00791b54  750c                 jne 0x791b62
// 00791b56  8b7f54               mov edi, dword ptr [edi + 0x54]
// 00791b59  51                   push ecx
// 00791b5a  57                   push edi
// 00791b5b  8d542418             lea edx, [esp + 0x18]
// 00791b5f  52                   push edx
// 00791b60  eb59                 jmp 0x791bbb
// 00791b62  51                   push ecx
// 00791b63  8bf8                 mov edi, eax
// 00791b65  57                   push edi
// 00791b66  8d542418             lea edx, [esp + 0x18]
// 00791b6a  52                   push edx
// 00791b6b  eb4e                 jmp 0x791bbb
// 00791b6d  f6c301               test bl, 1
// 00791b70  7409                 je 0x791b7b
// 00791b72  e8c9e1f4ff           call 0x6dfd40
// 00791b77  6a21                 push 0x21
// 00791b79  eb07                 jmp 0x791b82
// 00791b7b  e8c0e1f4ff           call 0x6dfd40
// 00791b80  6a1f                 push 0x1f
// 00791b82  8bc8                 mov ecx, eax
// 00791b84  e897d9f4ff           call 0x6df520
// 00791b89  50                   push eax
// 00791b8a  8d442414             lea eax, [esp + 0x14]
// 00791b8e  50                   push eax
// 00791b8f  8bcd                 mov ecx, ebp
// 00791b91  e8c8f7f0ff           call 0x6a135e
// 00791b96  e8a5e1f4ff           call 0x6dfd40
// 00791b9b  6a20                 push 0x20
// 00791b9d  8bc8                 mov ecx, eax
// 00791b9f  e87cd9f4ff           call 0x6df520
// 00791ba4  8bf0                 mov esi, eax
// 00791ba6  e895e1f4ff           call 0x6dfd40
// 00791bab  6a20                 push 0x20
// 00791bad  8bc8                 mov ecx, eax
// 00791baf  e86cd9f4ff           call 0x6df520
// 00791bb4  56                   push esi
// 00791bb5  50                   push eax
// 00791bb6  8d4c2418             lea ecx, [esp + 0x18]
// 00791bba  51                   push ecx
// 00791bbb  8bcd                 mov ecx, ebp
// 00791bbd  e896f7f0ff           call 0x6a1358
// 00791bc2  5f                   pop edi
// 00791bc3  5e                   pop esi
// 00791bc4  5d                   pop ebp
// 00791bc5  b801000000           mov eax, 1
// 00791bca  5b                   pop ebx
// 00791bcb  83c410               add esp, 0x10
// 00791bce  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?DrawButtonThemeBackground@CXTCaptionButtonThemeOfficeXP@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
