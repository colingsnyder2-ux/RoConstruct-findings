// roc 2009-12 007f7130  unit: CPatchedControlComboBox  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7130
//
// 007f7130  6aff                 push -1
// 007f7132  68c8fc9500           push 0x95fcc8
// 007f7137  64a100000000         mov eax, dword ptr fs:[0]
// 007f713d  50                   push eax
// 007f713e  83ec10               sub esp, 0x10
// 007f7141  56                   push esi
// 007f7142  57                   push edi
// 007f7143  a10052b600           mov eax, dword ptr [0xb65200]
// 007f7148  33c4                 xor eax, esp
// 007f714a  50                   push eax
// 007f714b  8d44241c             lea eax, [esp + 0x1c]
// 007f714f  64a300000000         mov dword ptr fs:[0], eax
// 007f7155  8bf1                 mov esi, ecx
// 007f7157  8b46fc               mov eax, dword ptr [esi - 4]
// 007f715a  50                   push eax
// 007f715b  8d4c2410             lea ecx, [esp + 0x10]
// 007f715f  e8ccc9ffff           call 0x7f3b30
// 007f7164  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007f7168  c70700000000         mov dword ptr [edi], 0
// 007f716e  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 007f7174  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007f717c  85c9                 test ecx, ecx
// 007f717e  7449                 je 0x7f71c9
// 007f7180  6a01                 push 1
// 007f7182  e8aff21200           call 0x926436
// 007f7187  8907                 mov dword ptr [edi], eax
// 007f7189  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f718d  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 007f7195  85c0                 test eax, eax
// 007f7197  7407                 je 0x7f71a0
// 007f7199  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f719d  894804               mov dword ptr [eax + 4], ecx
// 007f71a0  837c241800           cmp dword ptr [esp + 0x18], 0
// 007f71a5  740c                 je 0x7f71b3
// 007f71a7  8b542414             mov edx, dword ptr [esp + 0x14]
// 007f71ab  52                   push edx
// 007f71ac  6a00                 push 0
// 007f71ae  e871c9ffff           call 0x7f3b24
// 007f71b3  33c0                 xor eax, eax
// 007f71b5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f71b9  64890d00000000       mov dword ptr fs:[0], ecx
// 007f71c0  59                   pop ecx
// 007f71c1  5f                   pop edi
// 007f71c2  5e                   pop esi
// 007f71c3  83c41c               add esp, 0x1c
// 007f71c6  c20400               ret 4
// 007f71c9  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f71cd  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 007f71d5  85c0                 test eax, eax
// 007f71d7  7407                 je 0x7f71e0
// 007f71d9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f71dd  894804               mov dword ptr [eax + 4], ecx
// 007f71e0  837c241800           cmp dword ptr [esp + 0x18], 0
// 007f71e5  740c                 je 0x7f71f3
// 007f71e7  8b542414             mov edx, dword ptr [esp + 0x14]
// 007f71eb  52                   push edx
// 007f71ec  6a00                 push 0
// 007f71ee  e831c9ffff           call 0x7f3b24
// 007f71f3  b805400080           mov eax, 0x80004005
// 007f71f8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f71fc  64890d00000000       mov dword ptr fs:[0], ecx
// 007f7203  59                   pop ecx
// 007f7204  5f                   pop edi
// 007f7205  5e                   pop esi
// 007f7206  83c41c               add esp, 0x1c
// 007f7209  c20400               ret 4
// copied from an identical function in another client (function ?GetAccessibleParent@CXTPControl@@MAEJPAPAUIDispatch@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp