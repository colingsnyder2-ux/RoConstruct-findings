// roc 2009-12 008e4d70  unit: CXTCaptionButtonThemeOfficeXP  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e4d70
//
// 008e4d70  83ec10               sub esp, 0x10
// 008e4d73  53                   push ebx
// 008e4d74  55                   push ebp
// 008e4d75  56                   push esi
// 008e4d76  8b742420             mov esi, dword ptr [esp + 0x20]
// 008e4d7a  8b4618               mov eax, dword ptr [esi + 0x18]
// 008e4d7d  57                   push edi
// 008e4d7e  50                   push eax
// 008e4d7f  8bf9                 mov edi, ecx
// 008e4d81  e8aa160400           call 0x926430
// 008e4d86  8d4e1c               lea ecx, [esi + 0x1c]
// 008e4d89  51                   push ecx
// 008e4d8a  8d542414             lea edx, [esp + 0x14]
// 008e4d8e  52                   push edx
// 008e4d8f  8be8                 mov ebp, eax
// 008e4d91  ff1564cc9800         call dword ptr [0x98cc64]
// 008e4d97  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 008e4d9a  8b742428             mov esi, dword ptr [esp + 0x28]
// 008e4d9e  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 008e4da5  0f8582000000         jne 0x8e4e2d
// 008e4dab  ff1528cc9800         call dword ptr [0x98cc28]
// 008e4db1  3b4620               cmp eax, dword ptr [esi + 0x20]
// 008e4db4  7477                 je 0x8e4e2d
// 008e4db6  f6c301               test bl, 1
// 008e4db9  7577                 jne 0x8e4e32
// 008e4dbb  8bb6ac000000         mov esi, dword ptr [esi + 0xac]
// 008e4dc1  85f6                 test esi, esi
// 008e4dc3  7504                 jne 0x8e4dc9
// 008e4dc5  33c0                 xor eax, eax
// 008e4dc7  eb03                 jmp 0x8e4dcc
// 008e4dc9  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e4dcc  50                   push eax
// 008e4dcd  ff1584cc9800         call dword ptr [0x98cc84]
// 008e4dd3  85c0                 test eax, eax
// 008e4dd5  7406                 je 0x8e4ddd
// 008e4dd7  8b4674               mov eax, dword ptr [esi + 0x74]
// 008e4dda  894728               mov dword ptr [edi + 0x28], eax
// 008e4ddd  8b4728               mov eax, dword ptr [edi + 0x28]
// 008e4de0  83f8ff               cmp eax, -1
// 008e4de3  7503                 jne 0x8e4de8
// 008e4de5  8b4724               mov eax, dword ptr [edi + 0x24]
// 008e4de8  50                   push eax
// 008e4de9  8d4c2414             lea ecx, [esp + 0x14]
// 008e4ded  51                   push ecx
// 008e4dee  8bcd                 mov ecx, ebp
// 008e4df0  e809f8f0ff           call 0x7f45fe
// 008e4df5  83bf8000000000       cmp dword ptr [edi + 0x80], 0
// 008e4dfc  0f8480000000         je 0x8e4e82
// 008e4e02  8b4758               mov eax, dword ptr [edi + 0x58]
// 008e4e05  83f8ff               cmp eax, -1
// 008e4e08  7505                 jne 0x8e4e0f
// 008e4e0a  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 008e4e0d  eb02                 jmp 0x8e4e11
// 008e4e0f  8bc8                 mov ecx, eax
// 008e4e11  83f8ff               cmp eax, -1
// 008e4e14  750c                 jne 0x8e4e22
// 008e4e16  8b7f54               mov edi, dword ptr [edi + 0x54]
// 008e4e19  51                   push ecx
// 008e4e1a  57                   push edi
// 008e4e1b  8d542418             lea edx, [esp + 0x18]
// 008e4e1f  52                   push edx
// 008e4e20  eb59                 jmp 0x8e4e7b
// 008e4e22  51                   push ecx
// 008e4e23  8bf8                 mov edi, eax
// 008e4e25  57                   push edi
// 008e4e26  8d542418             lea edx, [esp + 0x18]
// 008e4e2a  52                   push edx
// 008e4e2b  eb4e                 jmp 0x8e4e7b
// 008e4e2d  f6c301               test bl, 1
// 008e4e30  7409                 je 0x8e4e3b
// 008e4e32  e899abf4ff           call 0x82f9d0
// 008e4e37  6a21                 push 0x21
// 008e4e39  eb07                 jmp 0x8e4e42
// 008e4e3b  e890abf4ff           call 0x82f9d0
// 008e4e40  6a1f                 push 0x1f
// 008e4e42  8bc8                 mov ecx, eax
// 008e4e44  e8b7a2f4ff           call 0x82f100
// 008e4e49  50                   push eax
// 008e4e4a  8d442414             lea eax, [esp + 0x14]
// 008e4e4e  50                   push eax
// 008e4e4f  8bcd                 mov ecx, ebp
// 008e4e51  e8a8f7f0ff           call 0x7f45fe
// 008e4e56  e875abf4ff           call 0x82f9d0
// 008e4e5b  6a20                 push 0x20
// 008e4e5d  8bc8                 mov ecx, eax
// 008e4e5f  e89ca2f4ff           call 0x82f100
// 008e4e64  8bf0                 mov esi, eax
// 008e4e66  e865abf4ff           call 0x82f9d0
// 008e4e6b  6a20                 push 0x20
// 008e4e6d  8bc8                 mov ecx, eax
// 008e4e6f  e88ca2f4ff           call 0x82f100
// 008e4e74  56                   push esi
// 008e4e75  50                   push eax
// 008e4e76  8d4c2418             lea ecx, [esp + 0x18]
// 008e4e7a  51                   push ecx
// 008e4e7b  8bcd                 mov ecx, ebp
// 008e4e7d  e876f7f0ff           call 0x7f45f8
// 008e4e82  5f                   pop edi
// 008e4e83  5e                   pop esi
// 008e4e84  5d                   pop ebp
// 008e4e85  b801000000           mov eax, 1
// 008e4e8a  5b                   pop ebx
// 008e4e8b  83c410               add esp, 0x10
// 008e4e8e  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?DrawButtonThemeBackground@CXTCaptionButtonThemeOfficeXP@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
