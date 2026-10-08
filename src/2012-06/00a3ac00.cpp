// roc 2012-06 00a3ac00  unit: CXTPDockingPaneTabbedContainer  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3ac00
//
// 00a3ac00  56                   push esi
// 00a3ac01  8bf1                 mov esi, ecx
// 00a3ac03  8b46cc               mov eax, dword ptr [esi - 0x34]
// 00a3ac06  57                   push edi
// 00a3ac07  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a3ac0b  897e14               mov dword ptr [esi + 0x14], edi
// 00a3ac0e  85c0                 test eax, eax
// 00a3ac10  742d                 je 0xa3ac3f
// 00a3ac12  50                   push eax
// 00a3ac13  ff15503ab200         call dword ptr [0xb23a50]
// 00a3ac19  50                   push eax
// 00a3ac1a  e8477af4ff           call 0x982666
// 00a3ac1f  3bc7                 cmp eax, edi
// 00a3ac21  741c                 je 0xa3ac3f
// 00a3ac23  85ff                 test edi, edi
// 00a3ac25  7504                 jne 0xa3ac2b
// 00a3ac27  33c0                 xor eax, eax
// 00a3ac29  eb03                 jmp 0xa3ac2e
// 00a3ac2b  8b4720               mov eax, dword ptr [edi + 0x20]
// 00a3ac2e  50                   push eax
// 00a3ac2f  8b46cc               mov eax, dword ptr [esi - 0x34]
// 00a3ac32  50                   push eax
// 00a3ac33  ff15ac3cb200         call dword ptr [0xb23cac]
// 00a3ac39  50                   push eax
// 00a3ac3a  e8277af4ff           call 0x982666
// 00a3ac3f  8bce                 mov ecx, esi
// 00a3ac41  e82af3faff           call 0x9e9f70
// 00a3ac46  8944240c             mov dword ptr [esp + 0xc], eax
// 00a3ac4a  85c0                 test eax, eax
// 00a3ac4c  742c                 je 0xa3ac7a
// 00a3ac4e  8bff                 mov edi, edi
// 00a3ac50  8d4c240c             lea ecx, [esp + 0xc]
// 00a3ac54  51                   push ecx
// 00a3ac55  8bce                 mov ecx, esi
// 00a3ac57  e8f4dc0300           call 0xa78950
// 00a3ac5c  85c0                 test eax, eax
// 00a3ac5e  7405                 je 0xa3ac65
// 00a3ac60  83c0e0               add eax, -0x20
// 00a3ac63  eb02                 jmp 0xa3ac67
// 00a3ac65  33c0                 xor eax, eax
// 00a3ac67  8b5020               mov edx, dword ptr [eax + 0x20]
// 00a3ac6a  8d4820               lea ecx, [eax + 0x20]
// 00a3ac6d  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00a3ac70  57                   push edi
// 00a3ac71  ffd0                 call eax
// 00a3ac73  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00a3ac78  75d6                 jne 0xa3ac50
// 00a3ac7a  5f                   pop edi
// 00a3ac7b  5e                   pop esi
// 00a3ac7c  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?SetDockingSite@CXTPDockingPaneTabbedContainer@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
