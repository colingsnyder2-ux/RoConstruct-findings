// roc 2009-12 008abff0  unit: CXTPDockingPaneAutoHidePanel  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008abff0
//
// 008abff0  6aff                 push -1
// 008abff2  68d8ac9500           push 0x95acd8
// 008abff7  64a100000000         mov eax, dword ptr fs:[0]
// 008abffd  50                   push eax
// 008abffe  83ec24               sub esp, 0x24
// 008ac001  56                   push esi
// 008ac002  57                   push edi
// 008ac003  a10052b600           mov eax, dword ptr [0xb65200]
// 008ac008  33c4                 xor eax, esp
// 008ac00a  50                   push eax
// 008ac00b  8d442430             lea eax, [esp + 0x30]
// 008ac00f  64a300000000         mov dword ptr fs:[0], eax
// 008ac015  8bf9                 mov edi, ecx
// 008ac017  837fcc00             cmp dword ptr [edi - 0x34], 0
// 008ac01b  746a                 je 0x8ac087
// 008ac01d  8d77ac               lea esi, [edi - 0x54]
// 008ac020  56                   push esi
// 008ac021  8d4c2420             lea ecx, [esp + 0x20]
// 008ac025  e8ac86f4ff           call 0x7f46d6
// 008ac02a  56                   push esi
// 008ac02b  8d4c2410             lea ecx, [esp + 0x10]
// 008ac02f  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008ac037  e894f2f9ff           call 0x84b2d0
// 008ac03c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ac040  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ac044  83ec10               sub esp, 0x10
// 008ac047  8bc4                 mov eax, esp
// 008ac049  8908                 mov dword ptr [eax], ecx
// 008ac04b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008ac04f  895004               mov dword ptr [eax + 4], edx
// 008ac052  8b542428             mov edx, dword ptr [esp + 0x28]
// 008ac056  894808               mov dword ptr [eax + 8], ecx
// 008ac059  89500c               mov dword ptr [eax + 0xc], edx
// 008ac05c  8d44242c             lea eax, [esp + 0x2c]
// 008ac060  50                   push eax
// 008ac061  8bce                 mov ecx, esi
// 008ac063  e8d8f6ffff           call 0x8ab740
// 008ac068  8b4fcc               mov ecx, dword ptr [edi - 0x34]
// 008ac06b  6a00                 push 0
// 008ac06d  6a00                 push 0
// 008ac06f  51                   push ecx
// 008ac070  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008ac076  8d4c241c             lea ecx, [esp + 0x1c]
// 008ac07a  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008ac082  e84986f4ff           call 0x7f46d0
// 008ac087  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008ac08b  64890d00000000       mov dword ptr fs:[0], ecx
// 008ac092  59                   pop ecx
// 008ac093  5f                   pop edi
// 008ac094  5e                   pop esi
// 008ac095  83c430               add esp, 0x30
// 008ac098  c20400               ret 4
// copied from an identical function in another client (function ?InvalidatePane@CXTPDockingPaneAutoHidePanel@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp