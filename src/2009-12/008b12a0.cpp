// roc 2009-12 008b12a0  unit: CXTPDockingPaneTabbedContainer  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b12a0
//
// 008b12a0  56                   push esi
// 008b12a1  8bf1                 mov esi, ecx
// 008b12a3  8b46cc               mov eax, dword ptr [esi - 0x34]
// 008b12a6  57                   push edi
// 008b12a7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008b12ab  897e14               mov dword ptr [esi + 0x14], edi
// 008b12ae  85c0                 test eax, eax
// 008b12b0  742d                 je 0x8b12df
// 008b12b2  50                   push eax
// 008b12b3  ff15bccb9800         call dword ptr [0x98cbbc]
// 008b12b9  50                   push eax
// 008b12ba  e86b28f4ff           call 0x7f3b2a
// 008b12bf  3bc7                 cmp eax, edi
// 008b12c1  741c                 je 0x8b12df
// 008b12c3  85ff                 test edi, edi
// 008b12c5  7504                 jne 0x8b12cb
// 008b12c7  33c0                 xor eax, eax
// 008b12c9  eb03                 jmp 0x8b12ce
// 008b12cb  8b4720               mov eax, dword ptr [edi + 0x20]
// 008b12ce  50                   push eax
// 008b12cf  8b46cc               mov eax, dword ptr [esi - 0x34]
// 008b12d2  50                   push eax
// 008b12d3  ff1538cb9800         call dword ptr [0x98cb38]
// 008b12d9  50                   push eax
// 008b12da  e84b28f4ff           call 0x7f3b2a
// 008b12df  8bce                 mov ecx, esi
// 008b12e1  e8aa94faff           call 0x85a790
// 008b12e6  8944240c             mov dword ptr [esp + 0xc], eax
// 008b12ea  85c0                 test eax, eax
// 008b12ec  742c                 je 0x8b131a
// 008b12ee  8bff                 mov edi, edi
// 008b12f0  8d4c240c             lea ecx, [esp + 0xc]
// 008b12f4  51                   push ecx
// 008b12f5  8bce                 mov ecx, esi
// 008b12f7  e8141c0400           call 0x8f2f10
// 008b12fc  85c0                 test eax, eax
// 008b12fe  7405                 je 0x8b1305
// 008b1300  83c0e0               add eax, -0x20
// 008b1303  eb02                 jmp 0x8b1307
// 008b1305  33c0                 xor eax, eax
// 008b1307  8b5020               mov edx, dword ptr [eax + 0x20]
// 008b130a  8d4820               lea ecx, [eax + 0x20]
// 008b130d  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008b1310  57                   push edi
// 008b1311  ffd0                 call eax
// 008b1313  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008b1318  75d6                 jne 0x8b12f0
// 008b131a  5f                   pop edi
// 008b131b  5e                   pop esi
// 008b131c  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?SetDockingSite@CXTPDockingPaneTabbedContainer@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
