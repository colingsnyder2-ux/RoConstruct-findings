// from server: 100% by tester
// roc 2008-06 006ed0f0  unit: CXTPCustomizeCommandsListBox  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ed0f0
//
// 006ed0f0  83ec18               sub esp, 0x18
// 006ed0f3  53                   push ebx
// 006ed0f4  55                   push ebp
// 006ed0f5  56                   push esi
// 006ed0f6  8b742428             mov esi, dword ptr [esp + 0x28]
// 006ed0fa  8b4618               mov eax, dword ptr [esi + 0x18]
// 006ed0fd  57                   push edi
// 006ed0fe  50                   push eax
// 006ed0ff  8bf9                 mov edi, ecx
// 006ed101  e822ef0c00           call 0x7bc028
// 006ed106  8d4e1c               lea ecx, [esi + 0x1c]
// 006ed109  51                   push ecx
// 006ed10a  8d54241c             lea edx, [esp + 0x1c]
// 006ed10e  52                   push edx
// 006ed10f  8be8                 mov ebp, eax
// 006ed111  ff15702d8000         call dword ptr [0x802d70]
// 006ed117  8b5e2c               mov ebx, dword ptr [esi + 0x2c]
// 006ed11a  85db                 test ebx, ebx
// 006ed11c  7444                 je 0x6ed162
// 006ed11e  8b7f54               mov edi, dword ptr [edi + 0x54]
// 006ed121  8b7610               mov esi, dword ptr [esi + 0x10]
// 006ed124  8bcf                 mov ecx, edi
// 006ed126  83e601               and esi, 1
// 006ed129  e8325efbff           call 0x6a2f60
// 006ed12e  57                   push edi
// 006ed12f  6a01                 push 1
// 006ed131  56                   push esi
// 006ed132  8b742424             mov esi, dword ptr [esp + 0x24]
// 006ed136  83ec10               sub esp, 0x10
// 006ed139  8bd4                 mov edx, esp
// 006ed13b  8932                 mov dword ptr [edx], esi
// 006ed13d  8b742438             mov esi, dword ptr [esp + 0x38]
// 006ed141  897204               mov dword ptr [edx + 4], esi
// 006ed144  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 006ed148  897208               mov dword ptr [edx + 8], esi
// 006ed14b  8b742440             mov esi, dword ptr [esp + 0x40]
// 006ed14f  53                   push ebx
// 006ed150  8bc8                 mov ecx, eax
// 006ed152  8b00                 mov eax, dword ptr [eax]
// 006ed154  8b4070               mov eax, dword ptr [eax + 0x70]
// 006ed157  89720c               mov dword ptr [edx + 0xc], esi
// 006ed15a  55                   push ebp
// 006ed15b  8d542434             lea edx, [esp + 0x34]
// 006ed15f  52                   push edx
// 006ed160  ffd0                 call eax
// 006ed162  5f                   pop edi
// 006ed163  5e                   pop esi
// 006ed164  5d                   pop ebp
// 006ed165  5b                   pop ebx
// 006ed166  83c418               add esp, 0x18
// 006ed169  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCustomizeCommandsPage.cpp (function ?DrawItem@CXTPCustomizeCommandsListBox@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCustomizeCommandsPage.cpp
