// roc 2008-06 00762300  unit: CXTPDockingPaneSplitterContainer  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00762300
//
// 00762300  53                   push ebx
// 00762301  56                   push esi
// 00762302  57                   push edi
// 00762303  8bf1                 mov esi, ecx
// 00762305  e896b1ffff           call 0x75d4a0
// 0076230a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0076230d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00762311  8b10                 mov edx, dword ptr [eax]
// 00762313  57                   push edi
// 00762314  51                   push ecx
// 00762315  8bc8                 mov ecx, eax
// 00762317  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0076231d  ffd0                 call eax
// 0076231f  85c0                 test eax, eax
// 00762321  7405                 je 0x762328
// 00762323  8d78e0               lea edi, [eax - 0x20]
// 00762326  eb02                 jmp 0x76232a
// 00762328  33ff                 xor edi, edi
// 0076232a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0076232e  53                   push ebx
// 0076232f  8d4ee0               lea ecx, [esi - 0x20]
// 00762332  51                   push ecx
// 00762333  8bcf                 mov ecx, edi
// 00762335  e886fcffff           call 0x761fc0
// 0076233a  85db                 test ebx, ebx
// 0076233c  7420                 je 0x76235e
// 0076233e  55                   push ebp
// 0076233f  85ff                 test edi, edi
// 00762341  7405                 je 0x762348
// 00762343  8d6f20               lea ebp, [edi + 0x20]
// 00762346  eb02                 jmp 0x76234a
// 00762348  33ed                 xor ebp, ebp
// 0076234a  8d46e0               lea eax, [esi - 0x20]
// 0076234d  f7d8                 neg eax
// 0076234f  1bc0                 sbb eax, eax
// 00762351  23c6                 and eax, esi
// 00762353  50                   push eax
// 00762354  8bcb                 mov ecx, ebx
// 00762356  e875f2fbff           call 0x7215d0
// 0076235b  8928                 mov dword ptr [eax], ebp
// 0076235d  5d                   pop ebp
// 0076235e  85ff                 test edi, edi
// 00762360  7409                 je 0x76236b
// 00762362  8d4720               lea eax, [edi + 0x20]
// 00762365  5f                   pop edi
// 00762366  5e                   pop esi
// 00762367  5b                   pop ebx
// 00762368  c20c00               ret 0xc
// 0076236b  5f                   pop edi
// 0076236c  5e                   pop esi
// 0076236d  33c0                 xor eax, eax
// 0076236f  5b                   pop ebx
// 00762370  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Clone@CXTPDockingPaneSplitterContainer@@MAEPAVCXTPDockingPaneBase@@PAVCXTPDockingPaneLayout@@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
