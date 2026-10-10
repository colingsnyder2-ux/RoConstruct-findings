// roc 2008-06 007023f0  unit: CXTPTabClientWnd::CSingleWorkspace  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007023f0
//
// 007023f0  83ec20               sub esp, 0x20
// 007023f3  8b442424             mov eax, dword ptr [esp + 0x24]
// 007023f7  53                   push ebx
// 007023f8  55                   push ebp
// 007023f9  56                   push esi
// 007023fa  57                   push edi
// 007023fb  50                   push eax
// 007023fc  8bf1                 mov esi, ecx
// 007023fe  e8259c0b00           call 0x7bc028
// 00702403  8bf8                 mov edi, eax
// 00702405  897c2434             mov dword ptr [esp + 0x34], edi
// 00702409  85ff                 test edi, edi
// 0070240b  747f                 je 0x70248c
// 0070240d  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 00702413  85c0                 test eax, eax
// 00702415  7427                 je 0x70243e
// 00702417  8b5020               mov edx, dword ptr [eax + 0x20]
// 0070241a  8d4c2420             lea ecx, [esp + 0x20]
// 0070241e  51                   push ecx
// 0070241f  52                   push edx
// 00702420  ff15342e8000         call dword ptr [0x802e34]
// 00702426  8d442420             lea eax, [esp + 0x20]
// 0070242a  50                   push eax
// 0070242b  8bce                 mov ecx, esi
// 0070242d  e86af0f9ff           call 0x6a149c
// 00702432  8d4c2420             lea ecx, [esp + 0x20]
// 00702436  51                   push ecx
// 00702437  8bcf                 mov ecx, edi
// 00702439  e85ca20b00           call 0x7bc69a
// 0070243e  56                   push esi
// 0070243f  8d4c2414             lea ecx, [esp + 0x14]
// 00702443  e8e856ffff           call 0x6f7b30
// 00702448  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0070244c  8b4658               mov eax, dword ptr [esi + 0x58]
// 0070244f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00702453  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00702457  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0070245b  83c658               add esi, 0x58
// 0070245e  8954242c             mov dword ptr [esp + 0x2c], edx
// 00702462  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00702465  8bce                 mov ecx, esi
// 00702467  ffd2                 call edx
// 00702469  83ec10               sub esp, 0x10
// 0070246c  8bd4                 mov edx, esp
// 0070246e  893a                 mov dword ptr [edx], edi
// 00702470  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00702474  895a04               mov dword ptr [edx + 4], ebx
// 00702477  896a08               mov dword ptr [edx + 8], ebp
// 0070247a  897a0c               mov dword ptr [edx + 0xc], edi
// 0070247d  8b542444             mov edx, dword ptr [esp + 0x44]
// 00702481  8bc8                 mov ecx, eax
// 00702483  8b00                 mov eax, dword ptr [eax]
// 00702485  8b4058               mov eax, dword ptr [eax + 0x58]
// 00702488  52                   push edx
// 00702489  56                   push esi
// 0070248a  ffd0                 call eax
// 0070248c  5f                   pop edi
// 0070248d  5e                   pop esi
// 0070248e  5d                   pop ebp
// 0070248f  b801000000           mov eax, 1
// 00702494  5b                   pop ebx
// 00702495  83c420               add esp, 0x20
// 00702498  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnPrintClient@CSingleWorkspace@CXTPTabClientWnd@@QAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
