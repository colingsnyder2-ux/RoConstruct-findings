// roc 2009-06 007d6760  unit: CXTPDockingPaneTabbedContainer  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d6760
//
// 007d6760  56                   push esi
// 007d6761  8bf1                 mov esi, ecx
// 007d6763  8b46cc               mov eax, dword ptr [esi - 0x34]
// 007d6766  57                   push edi
// 007d6767  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007d676b  897e14               mov dword ptr [esi + 0x14], edi
// 007d676e  85c0                 test eax, eax
// 007d6770  742d                 je 0x7d679f
// 007d6772  50                   push eax
// 007d6773  ff1598ee8900         call dword ptr [0x89ee98]
// 007d6779  50                   push eax
// 007d677a  e88325f4ff           call 0x718d02
// 007d677f  3bc7                 cmp eax, edi
// 007d6781  741c                 je 0x7d679f
// 007d6783  85ff                 test edi, edi
// 007d6785  7504                 jne 0x7d678b
// 007d6787  33c0                 xor eax, eax
// 007d6789  eb03                 jmp 0x7d678e
// 007d678b  8b4720               mov eax, dword ptr [edi + 0x20]
// 007d678e  50                   push eax
// 007d678f  8b46cc               mov eax, dword ptr [esi - 0x34]
// 007d6792  50                   push eax
// 007d6793  ff15a0ec8900         call dword ptr [0x89eca0]
// 007d6799  50                   push eax
// 007d679a  e86325f4ff           call 0x718d02
// 007d679f  8bce                 mov ecx, esi
// 007d67a1  e8fae9faff           call 0x7851a0
// 007d67a6  8944240c             mov dword ptr [esp + 0xc], eax
// 007d67aa  85c0                 test eax, eax
// 007d67ac  742c                 je 0x7d67da
// 007d67ae  8bff                 mov edi, edi
// 007d67b0  8d4c240c             lea ecx, [esp + 0xc]
// 007d67b4  51                   push ecx
// 007d67b5  8bce                 mov ecx, esi
// 007d67b7  e8b41a0400           call 0x818270
// 007d67bc  85c0                 test eax, eax
// 007d67be  7405                 je 0x7d67c5
// 007d67c0  83c0e0               add eax, -0x20
// 007d67c3  eb02                 jmp 0x7d67c7
// 007d67c5  33c0                 xor eax, eax
// 007d67c7  8b5020               mov edx, dword ptr [eax + 0x20]
// 007d67ca  8d4820               lea ecx, [eax + 0x20]
// 007d67cd  8b422c               mov eax, dword ptr [edx + 0x2c]
// 007d67d0  57                   push edi
// 007d67d1  ffd0                 call eax
// 007d67d3  837c240c00           cmp dword ptr [esp + 0xc], 0
// 007d67d8  75d6                 jne 0x7d67b0
// 007d67da  5f                   pop edi
// 007d67db  5e                   pop esi
// 007d67dc  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?SetDockingSite@CXTPDockingPaneTabbedContainer@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
