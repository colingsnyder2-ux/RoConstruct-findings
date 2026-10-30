// from server: 100% by auto
// roc 2008-06 0075df40  unit: CXTPDockingPaneTabbedContainer  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075df40
//
// 0075df40  56                   push esi
// 0075df41  8bf1                 mov esi, ecx
// 0075df43  8b46cc               mov eax, dword ptr [esi - 0x34]
// 0075df46  57                   push edi
// 0075df47  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0075df4b  897e14               mov dword ptr [esi + 0x14], edi
// 0075df4e  85c0                 test eax, eax
// 0075df50  742d                 je 0x75df7f
// 0075df52  50                   push eax
// 0075df53  ff15f82d8000         call dword ptr [0x802df8]
// 0075df59  50                   push eax
// 0075df5a  e87f2cf4ff           call 0x6a0bde
// 0075df5f  3bc7                 cmp eax, edi
// 0075df61  741c                 je 0x75df7f
// 0075df63  85ff                 test edi, edi
// 0075df65  7504                 jne 0x75df6b
// 0075df67  33c0                 xor eax, eax
// 0075df69  eb03                 jmp 0x75df6e
// 0075df6b  8b4720               mov eax, dword ptr [edi + 0x20]
// 0075df6e  50                   push eax
// 0075df6f  8b46cc               mov eax, dword ptr [esi - 0x34]
// 0075df72  50                   push eax
// 0075df73  ff15b82b8000         call dword ptr [0x802bb8]
// 0075df79  50                   push eax
// 0075df7a  e85f2cf4ff           call 0x6a0bde
// 0075df7f  8bce                 mov ecx, esi
// 0075df81  e8ea270400           call 0x7a0770
// 0075df86  8944240c             mov dword ptr [esp + 0xc], eax
// 0075df8a  85c0                 test eax, eax
// 0075df8c  742c                 je 0x75dfba
// 0075df8e  8bff                 mov edi, edi
// 0075df90  8d4c240c             lea ecx, [esp + 0xc]
// 0075df94  51                   push ecx
// 0075df95  8bce                 mov ecx, esi
// 0075df97  e8e4270400           call 0x7a0780
// 0075df9c  85c0                 test eax, eax
// 0075df9e  7405                 je 0x75dfa5
// 0075dfa0  83c0e0               add eax, -0x20
// 0075dfa3  eb02                 jmp 0x75dfa7
// 0075dfa5  33c0                 xor eax, eax
// 0075dfa7  8b5020               mov edx, dword ptr [eax + 0x20]
// 0075dfaa  8d4820               lea ecx, [eax + 0x20]
// 0075dfad  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0075dfb0  57                   push edi
// 0075dfb1  ffd0                 call eax
// 0075dfb3  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0075dfb8  75d6                 jne 0x75df90
// 0075dfba  5f                   pop edi
// 0075dfbb  5e                   pop esi
// 0075dfbc  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?SetDockingSite@CXTPDockingPaneTabbedContainer@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
