// roc 2009-12 0085cbd0  unit: CXTPDockingPane  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085cbd0
//
// 0085cbd0  6aff                 push -1
// 0085cbd2  6899869500           push 0x958699
// 0085cbd7  64a100000000         mov eax, dword ptr fs:[0]
// 0085cbdd  50                   push eax
// 0085cbde  51                   push ecx
// 0085cbdf  56                   push esi
// 0085cbe0  a10052b600           mov eax, dword ptr [0xb65200]
// 0085cbe5  33c4                 xor eax, esp
// 0085cbe7  50                   push eax
// 0085cbe8  8d44240c             lea eax, [esp + 0xc]
// 0085cbec  64a300000000         mov dword ptr fs:[0], eax
// 0085cbf2  8bf1                 mov esi, ecx
// 0085cbf4  8d44241c             lea eax, [esp + 0x1c]
// 0085cbf8  50                   push eax
// 0085cbf9  e8a2edfdff           call 0x83b9a0
// 0085cbfe  85c0                 test eax, eax
// 0085cc00  7418                 je 0x85cc1a
// 0085cc02  b857000780           mov eax, 0x80070057
// 0085cc07  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085cc0b  64890d00000000       mov dword ptr fs:[0], ecx
// 0085cc12  59                   pop ecx
// 0085cc13  5e                   pop esi
// 0085cc14  83c410               add esp, 0x10
// 0085cc17  c21400               ret 0x14
// 0085cc1a  8b56a8               mov edx, dword ptr [esi - 0x58]
// 0085cc1d  8b5260               mov edx, dword ptr [edx + 0x60]
// 0085cc20  8d4ea8               lea ecx, [esi - 0x58]
// 0085cc23  8d442408             lea eax, [esp + 8]
// 0085cc27  50                   push eax
// 0085cc28  ffd2                 call edx
// 0085cc2a  8bc8                 mov ecx, eax
// 0085cc2c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0085cc34  ff156cd69800         call dword ptr [0x98d66c]
// 0085cc3a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0085cc3e  8901                 mov dword ptr [ecx], eax
// 0085cc40  8d4c2408             lea ecx, [esp + 8]
// 0085cc44  ff15c0de9800         call dword ptr [0x98dec0]
// 0085cc4a  33c0                 xor eax, eax
// 0085cc4c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085cc50  64890d00000000       mov dword ptr fs:[0], ecx
// 0085cc57  59                   pop ecx
// 0085cc58  5e                   pop esi
// 0085cc59  83c410               add esp, 0x10
// 0085cc5c  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleName@CXTPDockingPane@@MAEJUtagVARIANT@@PAPA_W@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp