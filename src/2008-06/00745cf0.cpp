// roc 2008-06 00745cf0  unit: CXTPDockContext  size: 476 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00745cf0
//
// 00745cf0  8b442404             mov eax, dword ptr [esp + 4]
// 00745cf4  83ec38               sub esp, 0x38
// 00745cf7  53                   push ebx
// 00745cf8  55                   push ebp
// 00745cf9  56                   push esi
// 00745cfa  8bf1                 mov esi, ecx
// 00745cfc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00745cff  8b5610               mov edx, dword ptr [esi + 0x10]
// 00745d02  2bc1                 sub eax, ecx
// 00745d04  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00745d08  2bca                 sub ecx, edx
// 00745d0a  8b5608               mov edx, dword ptr [esi + 8]
// 00745d0d  57                   push edi
// 00745d0e  bf42000000           mov edi, 0x42
// 00745d13  83fa0a               cmp edx, 0xa
// 00745d16  742a                 je 0x745d42
// 00745d18  83fa0b               cmp edx, 0xb
// 00745d1b  7420                 je 0x745d3d
// 00745d1d  bf62000000           mov edi, 0x62
// 00745d22  83fa0c               cmp edx, 0xc
// 00745d25  750b                 jne 0x745d32
// 00745d27  014e44               add dword ptr [esi + 0x44], ecx
// 00745d2a  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00745d2d  2b4644               sub eax, dword ptr [esi + 0x44]
// 00745d30  eb1e                 jmp 0x745d50
// 00745d32  014e4c               add dword ptr [esi + 0x4c], ecx
// 00745d35  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00745d38  2b4644               sub eax, dword ptr [esi + 0x44]
// 00745d3b  eb13                 jmp 0x745d50
// 00745d3d  83fa0a               cmp edx, 0xa
// 00745d40  7505                 jne 0x745d47
// 00745d42  014640               add dword ptr [esi + 0x40], eax
// 00745d45  eb03                 jmp 0x745d4a
// 00745d47  014648               add dword ptr [esi + 0x48], eax
// 00745d4a  8b4648               mov eax, dword ptr [esi + 0x48]
// 00745d4d  2b4640               sub eax, dword ptr [esi + 0x40]
// 00745d50  8b4e04               mov ecx, dword ptr [esi + 4]
// 00745d53  8b11                 mov edx, dword ptr [ecx]
// 00745d55  8b92d0010000         mov edx, dword ptr [edx + 0x1d0]
// 00745d5b  33db                 xor ebx, ebx
// 00745d5d  85c0                 test eax, eax
// 00745d5f  0f9cc3               setl bl
// 00745d62  57                   push edi
// 00745d63  4b                   dec ebx
// 00745d64  23d8                 and ebx, eax
// 00745d66  53                   push ebx
// 00745d67  8d442418             lea eax, [esp + 0x18]
// 00745d6b  50                   push eax
// 00745d6c  ffd2                 call edx
// 00745d6e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00745d71  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00745d74  8d442418             lea eax, [esp + 0x18]
// 00745d78  50                   push eax
// 00745d79  52                   push edx
// 00745d7a  ff15342e8000         call dword ptr [0x802e34]
// 00745d80  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00745d84  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00745d88  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00745d8c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00745d90  8bc7                 mov eax, edi
// 00745d92  2b442418             sub eax, dword ptr [esp + 0x18]
// 00745d96  8bcb                 mov ecx, ebx
// 00745d98  2bcd                 sub ecx, ebp
// 00745d9a  3bc2                 cmp eax, edx
// 00745d9c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00745da0  7508                 jne 0x745daa
// 00745da2  3bc8                 cmp ecx, eax
// 00745da4  0f840a010000         je 0x745eb4
// 00745daa  8b4e08               mov ecx, dword ptr [esi + 8]
// 00745dad  83f90b               cmp ecx, 0xb
// 00745db0  742b                 je 0x745ddd
// 00745db2  83f90f               cmp ecx, 0xf
// 00745db5  7426                 je 0x745ddd
// 00745db7  83f90a               cmp ecx, 0xa
// 00745dba  750a                 jne 0x745dc6
// 00745dbc  03c5                 add eax, ebp
// 00745dbe  2bfa                 sub edi, edx
// 00745dc0  897c2418             mov dword ptr [esp + 0x18], edi
// 00745dc4  eb23                 jmp 0x745de9
// 00745dc6  83f90c               cmp ecx, 0xc
// 00745dc9  7522                 jne 0x745ded
// 00745dcb  2bd8                 sub ebx, eax
// 00745dcd  8b442418             mov eax, dword ptr [esp + 0x18]
// 00745dd1  03c2                 add eax, edx
// 00745dd3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00745dd7  89442420             mov dword ptr [esp + 0x20], eax
// 00745ddb  eb10                 jmp 0x745ded
// 00745ddd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00745de1  03ca                 add ecx, edx
// 00745de3  03c5                 add eax, ebp
// 00745de5  894c2420             mov dword ptr [esp + 0x20], ecx
// 00745de9  89442424             mov dword ptr [esp + 0x24], eax
// 00745ded  8b5604               mov edx, dword ptr [esi + 4]
// 00745df0  52                   push edx
// 00745df1  8d44242c             lea eax, [esp + 0x2c]
// 00745df5  50                   push eax
// 00745df6  e88532faff           call 0x6e9080
// 00745dfb  8bc8                 mov ecx, eax
// 00745dfd  e81e2efaff           call 0x6e8c20
// 00745e02  8d4c2418             lea ecx, [esp + 0x18]
// 00745e06  51                   push ecx
// 00745e07  8d54242c             lea edx, [esp + 0x2c]
// 00745e0b  52                   push edx
// 00745e0c  8d442440             lea eax, [esp + 0x40]
// 00745e10  50                   push eax
// 00745e11  ff155c2b8000         call dword ptr [0x802b5c]
// 00745e17  85c0                 test eax, eax
// 00745e19  7566                 jne 0x745e81
// 00745e1b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00745e1f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00745e23  3bc8                 cmp ecx, eax
// 00745e25  8b3d682d8000         mov edi, dword ptr [0x802d68]
// 00745e2b  7d0e                 jge 0x745e3b
// 00745e2d  2b442418             sub eax, dword ptr [esp + 0x18]
// 00745e31  6a00                 push 0
// 00745e33  50                   push eax
// 00745e34  8d4c2420             lea ecx, [esp + 0x20]
// 00745e38  51                   push ecx
// 00745e39  eb14                 jmp 0x745e4f
// 00745e3b  8b442430             mov eax, dword ptr [esp + 0x30]
// 00745e3f  39442418             cmp dword ptr [esp + 0x18], eax
// 00745e43  7e0c                 jle 0x745e51
// 00745e45  6a00                 push 0
// 00745e47  2bc1                 sub eax, ecx
// 00745e49  50                   push eax
// 00745e4a  8d542420             lea edx, [esp + 0x20]
// 00745e4e  52                   push edx
// 00745e4f  ffd7                 call edi
// 00745e51  8b442424             mov eax, dword ptr [esp + 0x24]
// 00745e55  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00745e59  3bc1                 cmp eax, ecx
// 00745e5b  7d0e                 jge 0x745e6b
// 00745e5d  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00745e61  8d442418             lea eax, [esp + 0x18]
// 00745e65  51                   push ecx
// 00745e66  6a00                 push 0
// 00745e68  50                   push eax
// 00745e69  eb14                 jmp 0x745e7f
// 00745e6b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00745e6f  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 00745e73  7e10                 jle 0x745e85
// 00745e75  2bc8                 sub ecx, eax
// 00745e77  51                   push ecx
// 00745e78  6a00                 push 0
// 00745e7a  8d4c2420             lea ecx, [esp + 0x20]
// 00745e7e  51                   push ecx
// 00745e7f  ffd7                 call edi
// 00745e81  8b442424             mov eax, dword ptr [esp + 0x24]
// 00745e85  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00745e89  8b542418             mov edx, dword ptr [esp + 0x18]
// 00745e8d  6a01                 push 1
// 00745e8f  2bc1                 sub eax, ecx
// 00745e91  50                   push eax
// 00745e92  8b442428             mov eax, dword ptr [esp + 0x28]
// 00745e96  2bc2                 sub eax, edx
// 00745e98  50                   push eax
// 00745e99  51                   push ecx
// 00745e9a  8b4e04               mov ecx, dword ptr [esi + 4]
// 00745e9d  52                   push edx
// 00745e9e  e8a9abf5ff           call 0x6a0a4c
// 00745ea3  8b4e04               mov ecx, dword ptr [esi + 4]
// 00745ea6  8b11                 mov edx, dword ptr [ecx]
// 00745ea8  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 00745eae  6a01                 push 1
// 00745eb0  6a00                 push 0
// 00745eb2  ffd0                 call eax
// 00745eb4  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00745eb8  8b542450             mov edx, dword ptr [esp + 0x50]
// 00745ebc  5f                   pop edi
// 00745ebd  894e0c               mov dword ptr [esi + 0xc], ecx
// 00745ec0  895610               mov dword ptr [esi + 0x10], edx
// 00745ec3  5e                   pop esi
// 00745ec4  5d                   pop ebp
// 00745ec5  5b                   pop ebx
// 00745ec6  83c438               add esp, 0x38
// 00745ec9  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDockContext.cpp (function ?Stretch@CXTPDockContext@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockContext.cpp
