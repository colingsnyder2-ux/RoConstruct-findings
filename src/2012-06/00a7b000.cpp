// roc 2012-06 00a7b000  unit: CXTButtonThemeOfficeXP  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7b000
//
// 00a7b000  83ec10               sub esp, 0x10
// 00a7b003  53                   push ebx
// 00a7b004  55                   push ebp
// 00a7b005  56                   push esi
// 00a7b006  57                   push edi
// 00a7b007  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a7b00b  8b4718               mov eax, dword ptr [edi + 0x18]
// 00a7b00e  50                   push eax
// 00a7b00f  8bf1                 mov esi, ecx
// 00a7b011  e85ce50100           call 0xa99572
// 00a7b016  8d4f1c               lea ecx, [edi + 0x1c]
// 00a7b019  51                   push ecx
// 00a7b01a  8d542414             lea edx, [esp + 0x14]
// 00a7b01e  52                   push edx
// 00a7b01f  8bd8                 mov ebx, eax
// 00a7b021  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a7b027  8b7f10               mov edi, dword ptr [edi + 0x10]
// 00a7b02a  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a7b02e  8b2d7c3ab200         mov ebp, dword ptr [0xb23a7c]
// 00a7b034  83e701               and edi, 1
// 00a7b037  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 00a7b03e  7556                 jne 0xa7b096
// 00a7b040  ffd5                 call ebp
// 00a7b042  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a7b046  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 00a7b049  744b                 je 0xa7b096
// 00a7b04b  85ff                 test edi, edi
// 00a7b04d  754b                 jne 0xa7b09a
// 00a7b04f  8bd1                 mov edx, ecx
// 00a7b051  397a7c               cmp dword ptr [edx + 0x7c], edi
// 00a7b054  754c                 jne 0xa7b0a2
// 00a7b056  8b4628               mov eax, dword ptr [esi + 0x28]
// 00a7b059  83f8ff               cmp eax, -1
// 00a7b05c  7503                 jne 0xa7b061
// 00a7b05e  8b4624               mov eax, dword ptr [esi + 0x24]
// 00a7b061  50                   push eax
// 00a7b062  8d442414             lea eax, [esp + 0x14]
// 00a7b066  50                   push eax
// 00a7b067  8bcb                 mov ecx, ebx
// 00a7b069  e83e7ef0ff           call 0x982eac
// 00a7b06e  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 00a7b075  0f8414010000         je 0xa7b18f
// 00a7b07b  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a7b07e  83f8ff               cmp eax, -1
// 00a7b081  7505                 jne 0xa7b088
// 00a7b083  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00a7b086  eb02                 jmp 0xa7b08a
// 00a7b088  8bc8                 mov ecx, eax
// 00a7b08a  83f8ff               cmp eax, -1
// 00a7b08d  7503                 jne 0xa7b092
// 00a7b08f  8b4654               mov eax, dword ptr [esi + 0x54]
// 00a7b092  51                   push ecx
// 00a7b093  50                   push eax
// 00a7b094  eb70                 jmp 0xa7b106
// 00a7b096  85ff                 test edi, edi
// 00a7b098  7408                 je 0xa7b0a2
// 00a7b09a  8d8e8c000000         lea ecx, [esi + 0x8c]
// 00a7b0a0  eb34                 jmp 0xa7b0d6
// 00a7b0a2  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a7b0a6  83787c00             cmp dword ptr [eax + 0x7c], 0
// 00a7b0aa  7424                 je 0xa7b0d0
// 00a7b0ac  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 00a7b0b3  750b                 jne 0xa7b0c0
// 00a7b0b5  ffd5                 call ebp
// 00a7b0b7  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a7b0bb  3b4220               cmp eax, dword ptr [edx + 0x20]
// 00a7b0be  7508                 jne 0xa7b0c8
// 00a7b0c0  8d8e8c000000         lea ecx, [esi + 0x8c]
// 00a7b0c6  eb0e                 jmp 0xa7b0d6
// 00a7b0c8  8d8ebc000000         lea ecx, [esi + 0xbc]
// 00a7b0ce  eb06                 jmp 0xa7b0d6
// 00a7b0d0  8d8e98000000         lea ecx, [esi + 0x98]
// 00a7b0d6  8b4108               mov eax, dword ptr [ecx + 8]
// 00a7b0d9  83f8ff               cmp eax, -1
// 00a7b0dc  7503                 jne 0xa7b0e1
// 00a7b0de  8b4104               mov eax, dword ptr [ecx + 4]
// 00a7b0e1  50                   push eax
// 00a7b0e2  8d442414             lea eax, [esp + 0x14]
// 00a7b0e6  50                   push eax
// 00a7b0e7  8bcb                 mov ecx, ebx
// 00a7b0e9  e8be7df0ff           call 0x982eac
// 00a7b0ee  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00a7b0f1  83f8ff               cmp eax, -1
// 00a7b0f4  7503                 jne 0xa7b0f9
// 00a7b0f6  8b4648               mov eax, dword ptr [esi + 0x48]
// 00a7b0f9  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00a7b0fc  83f9ff               cmp ecx, -1
// 00a7b0ff  7503                 jne 0xa7b104
// 00a7b101  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00a7b104  50                   push eax
// 00a7b105  51                   push ecx
// 00a7b106  8d4c2418             lea ecx, [esp + 0x18]
// 00a7b10a  51                   push ecx
// 00a7b10b  8bcb                 mov ecx, ebx
// 00a7b10d  e8947df0ff           call 0x982ea6
// 00a7b112  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 00a7b119  7474                 je 0xa7b18f
// 00a7b11b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a7b11f  e8bcf5feff           call 0xa6a6e0
// 00a7b124  3c01                 cmp al, 1
// 00a7b126  7567                 jne 0xa7b18f
// 00a7b128  e83327f4ff           call 0x9bd860
// 00a7b12d  6a0d                 push 0xd
// 00a7b12f  8bc8                 mov ecx, eax
// 00a7b131  e8aa1ef4ff           call 0x9bcfe0
// 00a7b136  8bf0                 mov esi, eax
// 00a7b138  e82327f4ff           call 0x9bd860
// 00a7b13d  6a0d                 push 0xd
// 00a7b13f  8bc8                 mov ecx, eax
// 00a7b141  e89a1ef4ff           call 0x9bcfe0
// 00a7b146  56                   push esi
// 00a7b147  50                   push eax
// 00a7b148  8d542418             lea edx, [esp + 0x18]
// 00a7b14c  52                   push edx
// 00a7b14d  8bcb                 mov ecx, ebx
// 00a7b14f  e8527df0ff           call 0x982ea6
// 00a7b154  6aff                 push -1
// 00a7b156  6aff                 push -1
// 00a7b158  8d442418             lea eax, [esp + 0x18]
// 00a7b15c  50                   push eax
// 00a7b15d  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a7b163  e8f826f4ff           call 0x9bd860
// 00a7b168  6a0d                 push 0xd
// 00a7b16a  8bc8                 mov ecx, eax
// 00a7b16c  e86f1ef4ff           call 0x9bcfe0
// 00a7b171  8bf0                 mov esi, eax
// 00a7b173  e8e826f4ff           call 0x9bd860
// 00a7b178  6a0d                 push 0xd
// 00a7b17a  8bc8                 mov ecx, eax
// 00a7b17c  e85f1ef4ff           call 0x9bcfe0
// 00a7b181  56                   push esi
// 00a7b182  50                   push eax
// 00a7b183  8d4c2418             lea ecx, [esp + 0x18]
// 00a7b187  51                   push ecx
// 00a7b188  8bcb                 mov ecx, ebx
// 00a7b18a  e8177df0ff           call 0x982ea6
// 00a7b18f  5f                   pop edi
// 00a7b190  5e                   pop esi
// 00a7b191  5d                   pop ebp
// 00a7b192  b801000000           mov eax, 1
// 00a7b197  5b                   pop ebx
// 00a7b198  83c410               add esp, 0x10
// 00a7b19b  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonThemeBackground@CXTButtonThemeOfficeXP@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
