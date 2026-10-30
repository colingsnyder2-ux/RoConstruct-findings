// roc 2010-06 00865380  unit: CXTPDockingPaneTabbedContainer  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00865380
//
// 00865380  56                   push esi
// 00865381  8bf1                 mov esi, ecx
// 00865383  8b46cc               mov eax, dword ptr [esi - 0x34]
// 00865386  57                   push edi
// 00865387  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0086538b  897e14               mov dword ptr [esi + 0x14], edi
// 0086538e  85c0                 test eax, eax
// 00865390  742d                 je 0x8653bf
// 00865392  50                   push eax
// 00865393  ff154cba9e00         call dword ptr [0x9eba4c]
// 00865399  50                   push eax
// 0086539a  e8cb28f4ff           call 0x7a7c6a
// 0086539f  3bc7                 cmp eax, edi
// 008653a1  741c                 je 0x8653bf
// 008653a3  85ff                 test edi, edi
// 008653a5  7504                 jne 0x8653ab
// 008653a7  33c0                 xor eax, eax
// 008653a9  eb03                 jmp 0x8653ae
// 008653ab  8b4720               mov eax, dword ptr [edi + 0x20]
// 008653ae  50                   push eax
// 008653af  8b46cc               mov eax, dword ptr [esi - 0x34]
// 008653b2  50                   push eax
// 008653b3  ff15f0b99e00         call dword ptr [0x9eb9f0]
// 008653b9  50                   push eax
// 008653ba  e8ab28f4ff           call 0x7a7c6a
// 008653bf  8bce                 mov ecx, esi
// 008653c1  e8fa9df9ff           call 0x7ff1c0
// 008653c6  8944240c             mov dword ptr [esp + 0xc], eax
// 008653ca  85c0                 test eax, eax
// 008653cc  742c                 je 0x8653fa
// 008653ce  8bff                 mov edi, edi
// 008653d0  8d4c240c             lea ecx, [esp + 0xc]
// 008653d4  51                   push ecx
// 008653d5  8bce                 mov ecx, esi
// 008653d7  e8841c0400           call 0x8a7060
// 008653dc  85c0                 test eax, eax
// 008653de  7405                 je 0x8653e5
// 008653e0  83c0e0               add eax, -0x20
// 008653e3  eb02                 jmp 0x8653e7
// 008653e5  33c0                 xor eax, eax
// 008653e7  8b5020               mov edx, dword ptr [eax + 0x20]
// 008653ea  8d4820               lea ecx, [eax + 0x20]
// 008653ed  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008653f0  57                   push edi
// 008653f1  ffd0                 call eax
// 008653f3  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008653f8  75d6                 jne 0x8653d0
// 008653fa  5f                   pop edi
// 008653fb  5e                   pop esi
// 008653fc  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?SetDockingSite@CXTPDockingPaneTabbedContainer@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
