// roc 2011-06 00902e00  unit: CXTButtonThemeOfficeXP  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00902e00
//
// 00902e00  83ec10               sub esp, 0x10
// 00902e03  53                   push ebx
// 00902e04  55                   push ebp
// 00902e05  56                   push esi
// 00902e06  57                   push edi
// 00902e07  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00902e0b  8b4718               mov eax, dword ptr [edi + 0x18]
// 00902e0e  50                   push eax
// 00902e0f  8bf1                 mov esi, ecx
// 00902e11  e8a2970c00           call 0x9cc5b8
// 00902e16  8d4f1c               lea ecx, [edi + 0x1c]
// 00902e19  51                   push ecx
// 00902e1a  8d542414             lea edx, [esp + 0x14]
// 00902e1e  52                   push edx
// 00902e1f  8bd8                 mov ebx, eax
// 00902e21  ff15681ca400         call dword ptr [0xa41c68]
// 00902e27  8b7f10               mov edi, dword ptr [edi + 0x10]
// 00902e2a  8b442428             mov eax, dword ptr [esp + 0x28]
// 00902e2e  8b2d381ba400         mov ebp, dword ptr [0xa41b38]
// 00902e34  83e701               and edi, 1
// 00902e37  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 00902e3e  7556                 jne 0x902e96
// 00902e40  ffd5                 call ebp
// 00902e42  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00902e46  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 00902e49  744b                 je 0x902e96
// 00902e4b  85ff                 test edi, edi
// 00902e4d  754b                 jne 0x902e9a
// 00902e4f  8bd1                 mov edx, ecx
// 00902e51  397a7c               cmp dword ptr [edx + 0x7c], edi
// 00902e54  754c                 jne 0x902ea2
// 00902e56  8b4628               mov eax, dword ptr [esi + 0x28]
// 00902e59  83f8ff               cmp eax, -1
// 00902e5c  7503                 jne 0x902e61
// 00902e5e  8b4624               mov eax, dword ptr [esi + 0x24]
// 00902e61  50                   push eax
// 00902e62  8d442414             lea eax, [esp + 0x14]
// 00902e66  50                   push eax
// 00902e67  8bcb                 mov ecx, ebx
// 00902e69  e8b27ff0ff           call 0x80ae20
// 00902e6e  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 00902e75  0f8414010000         je 0x902f8f
// 00902e7b  8b4658               mov eax, dword ptr [esi + 0x58]
// 00902e7e  83f8ff               cmp eax, -1
// 00902e81  7505                 jne 0x902e88
// 00902e83  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00902e86  eb02                 jmp 0x902e8a
// 00902e88  8bc8                 mov ecx, eax
// 00902e8a  83f8ff               cmp eax, -1
// 00902e8d  7503                 jne 0x902e92
// 00902e8f  8b4654               mov eax, dword ptr [esi + 0x54]
// 00902e92  51                   push ecx
// 00902e93  50                   push eax
// 00902e94  eb70                 jmp 0x902f06
// 00902e96  85ff                 test edi, edi
// 00902e98  7408                 je 0x902ea2
// 00902e9a  8d8e8c000000         lea ecx, [esi + 0x8c]
// 00902ea0  eb34                 jmp 0x902ed6
// 00902ea2  8b442428             mov eax, dword ptr [esp + 0x28]
// 00902ea6  83787c00             cmp dword ptr [eax + 0x7c], 0
// 00902eaa  7424                 je 0x902ed0
// 00902eac  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 00902eb3  750b                 jne 0x902ec0
// 00902eb5  ffd5                 call ebp
// 00902eb7  8b542428             mov edx, dword ptr [esp + 0x28]
// 00902ebb  3b4220               cmp eax, dword ptr [edx + 0x20]
// 00902ebe  7508                 jne 0x902ec8
// 00902ec0  8d8e8c000000         lea ecx, [esi + 0x8c]
// 00902ec6  eb0e                 jmp 0x902ed6
// 00902ec8  8d8ebc000000         lea ecx, [esi + 0xbc]
// 00902ece  eb06                 jmp 0x902ed6
// 00902ed0  8d8e98000000         lea ecx, [esi + 0x98]
// 00902ed6  8b4108               mov eax, dword ptr [ecx + 8]
// 00902ed9  83f8ff               cmp eax, -1
// 00902edc  7503                 jne 0x902ee1
// 00902ede  8b4104               mov eax, dword ptr [ecx + 4]
// 00902ee1  50                   push eax
// 00902ee2  8d442414             lea eax, [esp + 0x14]
// 00902ee6  50                   push eax
// 00902ee7  8bcb                 mov ecx, ebx
// 00902ee9  e8327ff0ff           call 0x80ae20
// 00902eee  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00902ef1  83f8ff               cmp eax, -1
// 00902ef4  7503                 jne 0x902ef9
// 00902ef6  8b4648               mov eax, dword ptr [esi + 0x48]
// 00902ef9  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00902efc  83f9ff               cmp ecx, -1
// 00902eff  7503                 jne 0x902f04
// 00902f01  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00902f04  50                   push eax
// 00902f05  51                   push ecx
// 00902f06  8d4c2418             lea ecx, [esp + 0x18]
// 00902f0a  51                   push ecx
// 00902f0b  8bcb                 mov ecx, ebx
// 00902f0d  e8087ff0ff           call 0x80ae1a
// 00902f12  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 00902f19  7474                 je 0x902f8f
// 00902f1b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00902f1f  e84cf4feff           call 0x8f2370
// 00902f24  3c01                 cmp al, 1
// 00902f26  7567                 jne 0x902f8f
// 00902f28  e8b324f4ff           call 0x8453e0
// 00902f2d  6a0d                 push 0xd
// 00902f2f  8bc8                 mov ecx, eax
// 00902f31  e87a1cf4ff           call 0x844bb0
// 00902f36  8bf0                 mov esi, eax
// 00902f38  e8a324f4ff           call 0x8453e0
// 00902f3d  6a0d                 push 0xd
// 00902f3f  8bc8                 mov ecx, eax
// 00902f41  e86a1cf4ff           call 0x844bb0
// 00902f46  56                   push esi
// 00902f47  50                   push eax
// 00902f48  8d542418             lea edx, [esp + 0x18]
// 00902f4c  52                   push edx
// 00902f4d  8bcb                 mov ecx, ebx
// 00902f4f  e8c67ef0ff           call 0x80ae1a
// 00902f54  6aff                 push -1
// 00902f56  6aff                 push -1
// 00902f58  8d442418             lea eax, [esp + 0x18]
// 00902f5c  50                   push eax
// 00902f5d  ff15e41ba400         call dword ptr [0xa41be4]
// 00902f63  e87824f4ff           call 0x8453e0
// 00902f68  6a0d                 push 0xd
// 00902f6a  8bc8                 mov ecx, eax
// 00902f6c  e83f1cf4ff           call 0x844bb0
// 00902f71  8bf0                 mov esi, eax
// 00902f73  e86824f4ff           call 0x8453e0
// 00902f78  6a0d                 push 0xd
// 00902f7a  8bc8                 mov ecx, eax
// 00902f7c  e82f1cf4ff           call 0x844bb0
// 00902f81  56                   push esi
// 00902f82  50                   push eax
// 00902f83  8d4c2418             lea ecx, [esp + 0x18]
// 00902f87  51                   push ecx
// 00902f88  8bcb                 mov ecx, ebx
// 00902f8a  e88b7ef0ff           call 0x80ae1a
// 00902f8f  5f                   pop edi
// 00902f90  5e                   pop esi
// 00902f91  5d                   pop ebp
// 00902f92  b801000000           mov eax, 1
// 00902f97  5b                   pop ebx
// 00902f98  83c410               add esp, 0x10
// 00902f9b  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonThemeBackground@CXTButtonThemeOfficeXP@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
