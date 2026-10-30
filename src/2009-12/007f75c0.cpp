// roc 2009-12 007f75c0  unit: CPatchedControlComboBox  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f75c0
//
// 007f75c0  6aff                 push -1
// 007f75c2  6898039600           push 0x960398
// 007f75c7  64a100000000         mov eax, dword ptr fs:[0]
// 007f75cd  50                   push eax
// 007f75ce  83ec10               sub esp, 0x10
// 007f75d1  56                   push esi
// 007f75d2  a10052b600           mov eax, dword ptr [0xb65200]
// 007f75d7  33c4                 xor eax, esp
// 007f75d9  50                   push eax
// 007f75da  8d442418             lea eax, [esp + 0x18]
// 007f75de  64a300000000         mov dword ptr fs:[0], eax
// 007f75e4  8bf1                 mov esi, ecx
// 007f75e6  8b46fc               mov eax, dword ptr [esi - 4]
// 007f75e9  50                   push eax
// 007f75ea  8d4c240c             lea ecx, [esp + 0xc]
// 007f75ee  e83dc5ffff           call 0x7f3b30
// 007f75f3  8d4c2428             lea ecx, [esp + 0x28]
// 007f75f7  51                   push ecx
// 007f75f8  8bce                 mov ecx, esi
// 007f75fa  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007f7602  e899430400           call 0x83b9a0
// 007f7607  85c0                 test eax, eax
// 007f7609  7442                 je 0x7f764d
// 007f760b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f760f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007f7617  85c0                 test eax, eax
// 007f7619  7407                 je 0x7f7622
// 007f761b  8b542408             mov edx, dword ptr [esp + 8]
// 007f761f  895004               mov dword ptr [eax + 4], edx
// 007f7622  837c241400           cmp dword ptr [esp + 0x14], 0
// 007f7627  740c                 je 0x7f7635
// 007f7629  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f762d  50                   push eax
// 007f762e  6a00                 push 0
// 007f7630  e8efc4ffff           call 0x7f3b24
// 007f7635  b857000780           mov eax, 0x80070057
// 007f763a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f763e  64890d00000000       mov dword ptr fs:[0], ecx
// 007f7645  59                   pop ecx
// 007f7646  5e                   pop esi
// 007f7647  83c41c               add esp, 0x1c
// 007f764a  c21000               ret 0x10
// 007f764d  33d2                 xor edx, edx
// 007f764f  52                   push edx
// 007f7650  8d4ee0               lea ecx, [esi - 0x20]
// 007f7653  8b31                 mov esi, dword ptr [ecx]
// 007f7655  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 007f765b  33c0                 xor eax, eax
// 007f765d  50                   push eax
// 007f765e  6a01                 push 1
// 007f7660  ffd2                 call edx
// 007f7662  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f7666  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007f766e  85c0                 test eax, eax
// 007f7670  7407                 je 0x7f7679
// 007f7672  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f7676  894804               mov dword ptr [eax + 4], ecx
// 007f7679  837c241400           cmp dword ptr [esp + 0x14], 0
// 007f767e  740c                 je 0x7f768c
// 007f7680  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f7684  52                   push edx
// 007f7685  6a00                 push 0
// 007f7687  e898c4ffff           call 0x7f3b24
// 007f768c  33c0                 xor eax, eax
// 007f768e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f7692  64890d00000000       mov dword ptr fs:[0], ecx
// 007f7699  59                   pop ecx
// 007f769a  5e                   pop esi
// 007f769b  83c41c               add esp, 0x1c
// 007f769e  c21000               ret 0x10
// copied from an identical function in another client (function ?AccessibleDoDefaultAction@CXTPControl@@MAEJUtagVARIANT@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp