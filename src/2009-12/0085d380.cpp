// roc 2009-12 0085d380  unit: CXTPDockingPane  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085d380
//
// 0085d380  6aff                 push -1
// 0085d382  68c8fc9500           push 0x95fcc8
// 0085d387  64a100000000         mov eax, dword ptr fs:[0]
// 0085d38d  50                   push eax
// 0085d38e  83ec10               sub esp, 0x10
// 0085d391  56                   push esi
// 0085d392  57                   push edi
// 0085d393  a10052b600           mov eax, dword ptr [0xb65200]
// 0085d398  33c4                 xor eax, esp
// 0085d39a  50                   push eax
// 0085d39b  8d44241c             lea eax, [esp + 0x1c]
// 0085d39f  64a300000000         mov dword ptr fs:[0], eax
// 0085d3a5  8bf1                 mov esi, ecx
// 0085d3a7  8b46c4               mov eax, dword ptr [esi - 0x3c]
// 0085d3aa  50                   push eax
// 0085d3ab  8d4c2410             lea ecx, [esp + 0x10]
// 0085d3af  e87c67f9ff           call 0x7f3b30
// 0085d3b4  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0085d3b8  8d4c242c             lea ecx, [esp + 0x2c]
// 0085d3bc  51                   push ecx
// 0085d3bd  8bce                 mov ecx, esi
// 0085d3bf  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0085d3c7  c70700000000         mov dword ptr [edi], 0
// 0085d3cd  e8cee5fdff           call 0x83b9a0
// 0085d3d2  83f801               cmp eax, 1
// 0085d3d5  7555                 jne 0x85d42c
// 0085d3d7  8b565c               mov edx, dword ptr [esi + 0x5c]
// 0085d3da  57                   push edi
// 0085d3db  68a04ba200           push 0xa24ba0
// 0085d3e0  6a00                 push 0
// 0085d3e2  52                   push edx
// 0085d3e3  8bce                 mov ecx, esi
// 0085d3e5  e876f0fdff           call 0x83c460
// 0085d3ea  8bf0                 mov esi, eax
// 0085d3ec  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085d3f0  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0085d3f8  85c0                 test eax, eax
// 0085d3fa  7407                 je 0x85d403
// 0085d3fc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085d400  894804               mov dword ptr [eax + 4], ecx
// 0085d403  837c241800           cmp dword ptr [esp + 0x18], 0
// 0085d408  740c                 je 0x85d416
// 0085d40a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0085d40e  52                   push edx
// 0085d40f  6a00                 push 0
// 0085d411  e80e67f9ff           call 0x7f3b24
// 0085d416  8bc6                 mov eax, esi
// 0085d418  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085d41c  64890d00000000       mov dword ptr fs:[0], ecx
// 0085d423  59                   pop ecx
// 0085d424  5f                   pop edi
// 0085d425  5e                   pop esi
// 0085d426  83c41c               add esp, 0x1c
// 0085d429  c21400               ret 0x14
// 0085d42c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085d430  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0085d438  85c0                 test eax, eax
// 0085d43a  7407                 je 0x85d443
// 0085d43c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085d440  894804               mov dword ptr [eax + 4], ecx
// 0085d443  837c241800           cmp dword ptr [esp + 0x18], 0
// 0085d448  740c                 je 0x85d456
// 0085d44a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0085d44e  52                   push edx
// 0085d44f  6a00                 push 0
// 0085d451  e8ce66f9ff           call 0x7f3b24
// 0085d456  33c0                 xor eax, eax
// 0085d458  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085d45c  64890d00000000       mov dword ptr fs:[0], ecx
// 0085d463  59                   pop ecx
// 0085d464  5f                   pop edi
// 0085d465  5e                   pop esi
// 0085d466  83c41c               add esp, 0x1c
// 0085d469  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleChild@CXTPDockingPane@@MAEJUtagVARIANT@@PAPAUIDispatch@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp