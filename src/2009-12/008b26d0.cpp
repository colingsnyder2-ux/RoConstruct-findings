// roc 2009-12 008b26d0  unit: CXTPDockingPaneTabbedContainer  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b26d0
//
// 008b26d0  6aff                 push -1
// 008b26d2  6818309600           push 0x963018
// 008b26d7  64a100000000         mov eax, dword ptr fs:[0]
// 008b26dd  50                   push eax
// 008b26de  83ec1c               sub esp, 0x1c
// 008b26e1  56                   push esi
// 008b26e2  a10052b600           mov eax, dword ptr [0xb65200]
// 008b26e7  33c4                 xor eax, esp
// 008b26e9  50                   push eax
// 008b26ea  8d442424             lea eax, [esp + 0x24]
// 008b26ee  64a300000000         mov dword ptr fs:[0], eax
// 008b26f4  8bf1                 mov esi, ecx
// 008b26f6  8b4664               mov eax, dword ptr [esi + 0x64]
// 008b26f9  85c0                 test eax, eax
// 008b26fb  7474                 je 0x8b2771
// 008b26fd  83781802             cmp dword ptr [eax + 0x18], 2
// 008b2701  756e                 jne 0x8b2771
// 008b2703  8d4e54               lea ecx, [esi + 0x54]
// 008b2706  e835e1ffff           call 0x8b0840
// 008b270b  83b8f000000000       cmp dword ptr [eax + 0xf0], 0
// 008b2712  745d                 je 0x8b2771
// 008b2714  6a0a                 push 0xa
// 008b2716  8d4c240c             lea ecx, [esp + 0xc]
// 008b271a  e8a16ff8ff           call 0x8396c0
// 008b271f  8b7664               mov esi, dword ptr [esi + 0x64]
// 008b2722  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 008b272a  85f6                 test esi, esi
// 008b272c  7405                 je 0x8b2733
// 008b272e  8d4ee0               lea ecx, [esi - 0x20]
// 008b2731  eb02                 jmp 0x8b2735
// 008b2733  33c9                 xor ecx, ecx
// 008b2735  8d442408             lea eax, [esp + 8]
// 008b2739  50                   push eax
// 008b273a  6a01                 push 1
// 008b273c  e84f2b0000           call 0x8b5290
// 008b2741  33c9                 xor ecx, ecx
// 008b2743  837c241401           cmp dword ptr [esp + 0x14], 1
// 008b2748  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008b2750  0f9fc1               setg cl
// 008b2753  8bf1                 mov esi, ecx
// 008b2755  8d4c2408             lea ecx, [esp + 8]
// 008b2759  e8926ff8ff           call 0x8396f0
// 008b275e  8bc6                 mov eax, esi
// 008b2760  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008b2764  64890d00000000       mov dword ptr fs:[0], ecx
// 008b276b  59                   pop ecx
// 008b276c  5e                   pop esi
// 008b276d  83c428               add esp, 0x28
// 008b2770  c3                   ret 
// 008b2771  33c0                 xor eax, eax
// 008b2773  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008b2777  64890d00000000       mov dword ptr fs:[0], ecx
// 008b277e  59                   pop ecx
// 008b277f  5e                   pop esi
// 008b2780  83c428               add esp, 0x28
// 008b2783  c3                   ret 
// copied from an identical function in another client (function ?IsAllowMaximize@CXTPDockingPaneTabbedContainer@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp