// roc 2009-12 0085d470  unit: CXTPDockingPane  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085d470
//
// 0085d470  6aff                 push -1
// 0085d472  6898039600           push 0x960398
// 0085d477  64a100000000         mov eax, dword ptr fs:[0]
// 0085d47d  50                   push eax
// 0085d47e  83ec10               sub esp, 0x10
// 0085d481  56                   push esi
// 0085d482  a10052b600           mov eax, dword ptr [0xb65200]
// 0085d487  33c4                 xor eax, esp
// 0085d489  50                   push eax
// 0085d48a  8d442418             lea eax, [esp + 0x18]
// 0085d48e  64a300000000         mov dword ptr fs:[0], eax
// 0085d494  8bf1                 mov esi, ecx
// 0085d496  8b46c4               mov eax, dword ptr [esi - 0x3c]
// 0085d499  50                   push eax
// 0085d49a  8d4c240c             lea ecx, [esp + 0xc]
// 0085d49e  e88d66f9ff           call 0x7f3b30
// 0085d4a3  8d4c242c             lea ecx, [esp + 0x2c]
// 0085d4a7  51                   push ecx
// 0085d4a8  8bce                 mov ecx, esi
// 0085d4aa  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0085d4b2  e8e9e4fdff           call 0x83b9a0
// 0085d4b7  85c0                 test eax, eax
// 0085d4b9  7442                 je 0x85d4fd
// 0085d4bb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085d4bf  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0085d4c7  85c0                 test eax, eax
// 0085d4c9  7407                 je 0x85d4d2
// 0085d4cb  8b542408             mov edx, dword ptr [esp + 8]
// 0085d4cf  895004               mov dword ptr [eax + 4], edx
// 0085d4d2  837c241400           cmp dword ptr [esp + 0x14], 0
// 0085d4d7  740c                 je 0x85d4e5
// 0085d4d9  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085d4dd  50                   push eax
// 0085d4de  6a00                 push 0
// 0085d4e0  e83f66f9ff           call 0x7f3b24
// 0085d4e5  b857000780           mov eax, 0x80070057
// 0085d4ea  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085d4ee  64890d00000000       mov dword ptr fs:[0], ecx
// 0085d4f5  59                   pop ecx
// 0085d4f6  5e                   pop esi
// 0085d4f7  83c41c               add esp, 0x1c
// 0085d4fa  c21400               ret 0x14
// 0085d4fd  8d4ea8               lea ecx, [esi - 0x58]
// 0085d500  e86bf3ffff           call 0x85c870
// 0085d505  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085d509  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0085d511  85c0                 test eax, eax
// 0085d513  7407                 je 0x85d51c
// 0085d515  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085d519  894804               mov dword ptr [eax + 4], ecx
// 0085d51c  837c241400           cmp dword ptr [esp + 0x14], 0
// 0085d521  740c                 je 0x85d52f
// 0085d523  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085d527  52                   push edx
// 0085d528  6a00                 push 0
// 0085d52a  e8f565f9ff           call 0x7f3b24
// 0085d52f  33c0                 xor eax, eax
// 0085d531  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085d535  64890d00000000       mov dword ptr fs:[0], ecx
// 0085d53c  59                   pop ecx
// 0085d53d  5e                   pop esi
// 0085d53e  83c41c               add esp, 0x1c
// 0085d541  c21400               ret 0x14
// copied from an identical function in another client (function ?AccessibleSelect@CXTPDockingPane@@MAEJJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPane.cpp