// roc 2009-12 007f74b0  unit: CPatchedControlComboBox  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f74b0
//
// 007f74b0  6aff                 push -1
// 007f74b2  6898039600           push 0x960398
// 007f74b7  64a100000000         mov eax, dword ptr fs:[0]
// 007f74bd  50                   push eax
// 007f74be  83ec10               sub esp, 0x10
// 007f74c1  56                   push esi
// 007f74c2  a10052b600           mov eax, dword ptr [0xb65200]
// 007f74c7  33c4                 xor eax, esp
// 007f74c9  50                   push eax
// 007f74ca  8d442418             lea eax, [esp + 0x18]
// 007f74ce  64a300000000         mov dword ptr fs:[0], eax
// 007f74d4  8bf1                 mov esi, ecx
// 007f74d6  8b46fc               mov eax, dword ptr [esi - 4]
// 007f74d9  50                   push eax
// 007f74da  8d4c240c             lea ecx, [esp + 0xc]
// 007f74de  e84dc6ffff           call 0x7f3b30
// 007f74e3  8d4c242c             lea ecx, [esp + 0x2c]
// 007f74e7  51                   push ecx
// 007f74e8  8bce                 mov ecx, esi
// 007f74ea  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007f74f2  e8a9440400           call 0x83b9a0
// 007f74f7  85c0                 test eax, eax
// 007f74f9  7442                 je 0x7f753d
// 007f74fb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f74ff  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007f7507  85c0                 test eax, eax
// 007f7509  7407                 je 0x7f7512
// 007f750b  8b542408             mov edx, dword ptr [esp + 8]
// 007f750f  895004               mov dword ptr [eax + 4], edx
// 007f7512  837c241400           cmp dword ptr [esp + 0x14], 0
// 007f7517  740c                 je 0x7f7525
// 007f7519  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f751d  50                   push eax
// 007f751e  6a00                 push 0
// 007f7520  e8ffc5ffff           call 0x7f3b24
// 007f7525  b857000780           mov eax, 0x80070057
// 007f752a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f752e  64890d00000000       mov dword ptr fs:[0], ecx
// 007f7535  59                   pop ecx
// 007f7536  5e                   pop esi
// 007f7537  83c41c               add esp, 0x1c
// 007f753a  c21400               ret 0x14
// 007f753d  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 007f7543  85c9                 test ecx, ecx
// 007f7545  742c                 je 0x7f7573
// 007f7547  83792000             cmp dword ptr [ecx + 0x20], 0
// 007f754b  7426                 je 0x7f7573
// 007f754d  8b11                 mov edx, dword ptr [ecx]
// 007f754f  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 007f7555  6a00                 push 0
// 007f7557  6a00                 push 0
// 007f7559  6a01                 push 1
// 007f755b  ffd0                 call eax
// 007f755d  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 007f7563  8b11                 mov edx, dword ptr [ecx]
// 007f7565  8b4660               mov eax, dword ptr [esi + 0x60]
// 007f7568  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 007f756e  6a01                 push 1
// 007f7570  50                   push eax
// 007f7571  ffd2                 call edx
// 007f7573  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f7577  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007f757f  85c0                 test eax, eax
// 007f7581  7407                 je 0x7f758a
// 007f7583  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f7587  894804               mov dword ptr [eax + 4], ecx
// 007f758a  837c241400           cmp dword ptr [esp + 0x14], 0
// 007f758f  740c                 je 0x7f759d
// 007f7591  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f7595  52                   push edx
// 007f7596  6a00                 push 0
// 007f7598  e887c5ffff           call 0x7f3b24
// 007f759d  33c0                 xor eax, eax
// 007f759f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f75a3  64890d00000000       mov dword ptr fs:[0], ecx
// 007f75aa  59                   pop ecx
// 007f75ab  5e                   pop esi
// 007f75ac  83c41c               add esp, 0x1c
// 007f75af  c21400               ret 0x14
// copied from an identical function in another client (function ?AccessibleSelect@CXTPControl@@MAEJJUtagVARIANT@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp