// roc 2009-12 0085d550  unit: CXTPDockingPane  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085d550
//
// 0085d550  6aff                 push -1
// 0085d552  6898039600           push 0x960398
// 0085d557  64a100000000         mov eax, dword ptr fs:[0]
// 0085d55d  50                   push eax
// 0085d55e  83ec10               sub esp, 0x10
// 0085d561  56                   push esi
// 0085d562  a10052b600           mov eax, dword ptr [0xb65200]
// 0085d567  33c4                 xor eax, esp
// 0085d569  50                   push eax
// 0085d56a  8d442418             lea eax, [esp + 0x18]
// 0085d56e  64a300000000         mov dword ptr fs:[0], eax
// 0085d574  8bf1                 mov esi, ecx
// 0085d576  8b46c4               mov eax, dword ptr [esi - 0x3c]
// 0085d579  50                   push eax
// 0085d57a  8d4c240c             lea ecx, [esp + 0xc]
// 0085d57e  e8ad65f9ff           call 0x7f3b30
// 0085d583  8d4c2428             lea ecx, [esp + 0x28]
// 0085d587  51                   push ecx
// 0085d588  8bce                 mov ecx, esi
// 0085d58a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0085d592  e809e4fdff           call 0x83b9a0
// 0085d597  85c0                 test eax, eax
// 0085d599  7442                 je 0x85d5dd
// 0085d59b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085d59f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0085d5a7  85c0                 test eax, eax
// 0085d5a9  7407                 je 0x85d5b2
// 0085d5ab  8b542408             mov edx, dword ptr [esp + 8]
// 0085d5af  895004               mov dword ptr [eax + 4], edx
// 0085d5b2  837c241400           cmp dword ptr [esp + 0x14], 0
// 0085d5b7  740c                 je 0x85d5c5
// 0085d5b9  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085d5bd  50                   push eax
// 0085d5be  6a00                 push 0
// 0085d5c0  e85f65f9ff           call 0x7f3b24
// 0085d5c5  b857000780           mov eax, 0x80070057
// 0085d5ca  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085d5ce  64890d00000000       mov dword ptr fs:[0], ecx
// 0085d5d5  59                   pop ecx
// 0085d5d6  5e                   pop esi
// 0085d5d7  83c41c               add esp, 0x1c
// 0085d5da  c21000               ret 0x10
// 0085d5dd  8d4ea8               lea ecx, [esi - 0x58]
// 0085d5e0  e88bf2ffff           call 0x85c870
// 0085d5e5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085d5e9  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0085d5f1  85c0                 test eax, eax
// 0085d5f3  7407                 je 0x85d5fc
// 0085d5f5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085d5f9  894804               mov dword ptr [eax + 4], ecx
// 0085d5fc  837c241400           cmp dword ptr [esp + 0x14], 0
// 0085d601  740c                 je 0x85d60f
// 0085d603  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085d607  52                   push edx
// 0085d608  6a00                 push 0
// 0085d60a  e81565f9ff           call 0x7f3b24
// 0085d60f  33c0                 xor eax, eax
// 0085d611  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085d615  64890d00000000       mov dword ptr fs:[0], ecx
// 0085d61c  59                   pop ecx
// 0085d61d  5e                   pop esi
// 0085d61e  83c41c               add esp, 0x1c
// 0085d621  c21000               ret 0x10
// copied from an identical function in another client (function ?AccessibleDoDefaultAction@CXTPDockingPane@@MAEJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPane.cpp