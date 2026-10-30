// roc 2011-06 00902fb0  unit: CXTButtonThemeOffice2003  size: 432 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00902fb0
//
// 00902fb0  83ec10               sub esp, 0x10
// 00902fb3  53                   push ebx
// 00902fb4  55                   push ebp
// 00902fb5  56                   push esi
// 00902fb6  8b742420             mov esi, dword ptr [esp + 0x20]
// 00902fba  8b4618               mov eax, dword ptr [esi + 0x18]
// 00902fbd  57                   push edi
// 00902fbe  50                   push eax
// 00902fbf  8bd9                 mov ebx, ecx
// 00902fc1  e8f2950c00           call 0x9cc5b8
// 00902fc6  8d4e1c               lea ecx, [esi + 0x1c]
// 00902fc9  51                   push ecx
// 00902fca  8d542414             lea edx, [esp + 0x14]
// 00902fce  52                   push edx
// 00902fcf  8bf8                 mov edi, eax
// 00902fd1  ff15681ca400         call dword ptr [0xa41c68]
// 00902fd7  8b442428             mov eax, dword ptr [esp + 0x28]
// 00902fdb  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 00902fe2  8b7610               mov esi, dword ptr [esi + 0x10]
// 00902fe5  8b687c               mov ebp, dword ptr [eax + 0x7c]
// 00902fe8  7513                 jne 0x902ffd
// 00902fea  ff15381ba400         call dword ptr [0xa41b38]
// 00902ff0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00902ff4  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 00902ff7  7404                 je 0x902ffd
// 00902ff9  33c0                 xor eax, eax
// 00902ffb  eb05                 jmp 0x903002
// 00902ffd  b801000000           mov eax, 1
// 00903002  83e601               and esi, 1
// 00903005  85ed                 test ebp, ebp
// 00903007  754d                 jne 0x903056
// 00903009  85c0                 test eax, eax
// 0090300b  7549                 jne 0x903056
// 0090300d  85f6                 test esi, esi
// 0090300f  7549                 jne 0x90305a
// 00903011  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00903014  83f8ff               cmp eax, -1
// 00903017  7503                 jne 0x90301c
// 00903019  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0090301c  50                   push eax
// 0090301d  8d542414             lea edx, [esp + 0x14]
// 00903021  52                   push edx
// 00903022  8bcf                 mov ecx, edi
// 00903024  e8f77df0ff           call 0x80ae20
// 00903029  83bb8000000000       cmp dword ptr [ebx + 0x80], 0
// 00903030  0f841b010000         je 0x903151
// 00903036  8b4358               mov eax, dword ptr [ebx + 0x58]
// 00903039  83f8ff               cmp eax, -1
// 0090303c  7505                 jne 0x903043
// 0090303e  8b4b54               mov ecx, dword ptr [ebx + 0x54]
// 00903041  eb02                 jmp 0x903045
// 00903043  8bc8                 mov ecx, eax
// 00903045  83f8ff               cmp eax, -1
// 00903048  7503                 jne 0x90304d
// 0090304a  8b4354               mov eax, dword ptr [ebx + 0x54]
// 0090304d  51                   push ecx
// 0090304e  50                   push eax
// 0090304f  8d442418             lea eax, [esp + 0x18]
// 00903053  50                   push eax
// 00903054  eb77                 jmp 0x9030cd
// 00903056  85f6                 test esi, esi
// 00903058  7416                 je 0x903070
// 0090305a  e88123f4ff           call 0x8453e0
// 0090305f  6a00                 push 0
// 00903061  6a00                 push 0
// 00903063  0520010000           add eax, 0x120
// 00903068  50                   push eax
// 00903069  8d4c241c             lea ecx, [esp + 0x1c]
// 0090306d  51                   push ecx
// 0090306e  eb32                 jmp 0x9030a2
// 00903070  85c0                 test eax, eax
// 00903072  7416                 je 0x90308a
// 00903074  e86723f4ff           call 0x8453e0
// 00903079  6a00                 push 0
// 0090307b  6a00                 push 0
// 0090307d  0540010000           add eax, 0x140
// 00903082  50                   push eax
// 00903083  8d54241c             lea edx, [esp + 0x1c]
// 00903087  52                   push edx
// 00903088  eb18                 jmp 0x9030a2
// 0090308a  85ed                 test ebp, ebp
// 0090308c  7421                 je 0x9030af
// 0090308e  e84d23f4ff           call 0x8453e0
// 00903093  6a00                 push 0
// 00903095  6a00                 push 0
// 00903097  0500010000           add eax, 0x100
// 0090309c  50                   push eax
// 0090309d  8d44241c             lea eax, [esp + 0x1c]
// 009030a1  50                   push eax
// 009030a2  57                   push edi
// 009030a3  e8d8bcf5ff           call 0x85ed80
// 009030a8  8bc8                 mov ecx, eax
// 009030aa  e8f1bff5ff           call 0x85f0a0
// 009030af  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 009030b2  83f8ff               cmp eax, -1
// 009030b5  7505                 jne 0x9030bc
// 009030b7  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 009030ba  eb02                 jmp 0x9030be
// 009030bc  8bc8                 mov ecx, eax
// 009030be  83f8ff               cmp eax, -1
// 009030c1  7503                 jne 0x9030c6
// 009030c3  8b4348               mov eax, dword ptr [ebx + 0x48]
// 009030c6  51                   push ecx
// 009030c7  50                   push eax
// 009030c8  8d4c2418             lea ecx, [esp + 0x18]
// 009030cc  51                   push ecx
// 009030cd  8bcf                 mov ecx, edi
// 009030cf  e8467df0ff           call 0x80ae1a
// 009030d4  83bb8000000000       cmp dword ptr [ebx + 0x80], 0
// 009030db  7474                 je 0x903151
// 009030dd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009030e1  e88af2feff           call 0x8f2370
// 009030e6  3c01                 cmp al, 1
// 009030e8  7567                 jne 0x903151
// 009030ea  e8f122f4ff           call 0x8453e0
// 009030ef  6a0d                 push 0xd
// 009030f1  8bc8                 mov ecx, eax
// 009030f3  e8b81af4ff           call 0x844bb0
// 009030f8  8bf0                 mov esi, eax
// 009030fa  e8e122f4ff           call 0x8453e0
// 009030ff  6a0d                 push 0xd
// 00903101  8bc8                 mov ecx, eax
// 00903103  e8a81af4ff           call 0x844bb0
// 00903108  56                   push esi
// 00903109  50                   push eax
// 0090310a  8d542418             lea edx, [esp + 0x18]
// 0090310e  52                   push edx
// 0090310f  8bcf                 mov ecx, edi
// 00903111  e8047df0ff           call 0x80ae1a
// 00903116  6aff                 push -1
// 00903118  6aff                 push -1
// 0090311a  8d442418             lea eax, [esp + 0x18]
// 0090311e  50                   push eax
// 0090311f  ff15e41ba400         call dword ptr [0xa41be4]
// 00903125  e8b622f4ff           call 0x8453e0
// 0090312a  6a0d                 push 0xd
// 0090312c  8bc8                 mov ecx, eax
// 0090312e  e87d1af4ff           call 0x844bb0
// 00903133  8bf0                 mov esi, eax
// 00903135  e8a622f4ff           call 0x8453e0
// 0090313a  6a0d                 push 0xd
// 0090313c  8bc8                 mov ecx, eax
// 0090313e  e86d1af4ff           call 0x844bb0
// 00903143  56                   push esi
// 00903144  50                   push eax
// 00903145  8d4c2418             lea ecx, [esp + 0x18]
// 00903149  51                   push ecx
// 0090314a  8bcf                 mov ecx, edi
// 0090314c  e8c97cf0ff           call 0x80ae1a
// 00903151  5f                   pop edi
// 00903152  5e                   pop esi
// 00903153  5d                   pop ebp
// 00903154  b801000000           mov eax, 1
// 00903159  5b                   pop ebx
// 0090315a  83c410               add esp, 0x10
// 0090315d  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonThemeBackground@CXTButtonThemeOffice2003@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
