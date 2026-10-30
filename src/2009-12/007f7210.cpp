// roc 2009-12 007f7210  unit: CPatchedControlComboBox  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7210
//
// 007f7210  6aff                 push -1
// 007f7212  68c8fc9500           push 0x95fcc8
// 007f7217  64a100000000         mov eax, dword ptr fs:[0]
// 007f721d  50                   push eax
// 007f721e  83ec10               sub esp, 0x10
// 007f7221  56                   push esi
// 007f7222  57                   push edi
// 007f7223  a10052b600           mov eax, dword ptr [0xb65200]
// 007f7228  33c4                 xor eax, esp
// 007f722a  50                   push eax
// 007f722b  8d44241c             lea eax, [esp + 0x1c]
// 007f722f  64a300000000         mov dword ptr fs:[0], eax
// 007f7235  8bf1                 mov esi, ecx
// 007f7237  8b46fc               mov eax, dword ptr [esi - 4]
// 007f723a  50                   push eax
// 007f723b  8d4c2410             lea ecx, [esp + 0x10]
// 007f723f  e8ecc8ffff           call 0x7f3b30
// 007f7244  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 007f7248  8d4c242c             lea ecx, [esp + 0x2c]
// 007f724c  51                   push ecx
// 007f724d  8bce                 mov ecx, esi
// 007f724f  c744242800000000     mov dword ptr [esp + 0x28], 0
// 007f7257  c70700000000         mov dword ptr [edi], 0
// 007f725d  e83e470400           call 0x83b9a0
// 007f7262  83f801               cmp eax, 1
// 007f7265  751d                 jne 0x7f7284
// 007f7267  8b56e0               mov edx, dword ptr [esi - 0x20]
// 007f726a  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 007f7270  8d4ee0               lea ecx, [esi - 0x20]
// 007f7273  ffd0                 call eax
// 007f7275  85c0                 test eax, eax
// 007f7277  740b                 je 0x7f7284
// 007f7279  6a01                 push 1
// 007f727b  8bc8                 mov ecx, eax
// 007f727d  e8b4f11200           call 0x926436
// 007f7282  8907                 mov dword ptr [edi], eax
// 007f7284  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f7288  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 007f7290  85c0                 test eax, eax
// 007f7292  7407                 je 0x7f729b
// 007f7294  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f7298  894804               mov dword ptr [eax + 4], ecx
// 007f729b  837c241800           cmp dword ptr [esp + 0x18], 0
// 007f72a0  740c                 je 0x7f72ae
// 007f72a2  8b542414             mov edx, dword ptr [esp + 0x14]
// 007f72a6  52                   push edx
// 007f72a7  6a00                 push 0
// 007f72a9  e876c8ffff           call 0x7f3b24
// 007f72ae  33c0                 xor eax, eax
// 007f72b0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f72b4  64890d00000000       mov dword ptr fs:[0], ecx
// 007f72bb  59                   pop ecx
// 007f72bc  5f                   pop edi
// 007f72bd  5e                   pop esi
// 007f72be  83c41c               add esp, 0x1c
// 007f72c1  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleChild@CXTPControl@@MAEJUtagVARIANT@@PAPAUIDispatch@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp