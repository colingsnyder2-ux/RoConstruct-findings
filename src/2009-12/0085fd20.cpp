// roc 2009-12 0085fd20  unit: CXTPToolTipContextToolTip  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085fd20
//
// 0085fd20  83ec74               sub esp, 0x74
// 0085fd23  a10052b600           mov eax, dword ptr [0xb65200]
// 0085fd28  33c4                 xor eax, esp
// 0085fd2a  89442470             mov dword ptr [esp + 0x70], eax
// 0085fd2e  53                   push ebx
// 0085fd2f  55                   push ebp
// 0085fd30  8bac2480000000       mov ebp, dword ptr [esp + 0x80]
// 0085fd37  56                   push esi
// 0085fd38  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 0085fd3f  33db                 xor ebx, ebx
// 0085fd41  57                   push edi
// 0085fd42  8bf9                 mov edi, ecx
// 0085fd44  895c2410             mov dword ptr [esp + 0x10], ebx
// 0085fd48  395e04               cmp dword ptr [esi + 4], ebx
// 0085fd4b  0f8490000000         je 0x85fde1
// 0085fd51  6a68                 push 0x68
// 0085fd53  8d44241c             lea eax, [esp + 0x1c]
// 0085fd57  53                   push ebx
// 0085fd58  50                   push eax
// 0085fd59  e8464df9ff           call 0x7f4aa4
// 0085fd5e  8b5608               mov edx, dword ptr [esi + 8]
// 0085fd61  8b4624               mov eax, dword ptr [esi + 0x24]
// 0085fd64  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0085fd67  83c40c               add esp, 0xc
// 0085fd6a  89542478             mov dword ptr [esp + 0x78], edx
// 0085fd6e  8d542414             lea edx, [esp + 0x14]
// 0085fd72  52                   push edx
// 0085fd73  50                   push eax
// 0085fd74  89442420             mov dword ptr [esp + 0x20], eax
// 0085fd78  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085fd7b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0085fd7f  6a4e                 push 0x4e
// 0085fd81  8d4c2430             lea ecx, [esp + 0x30]
// 0085fd85  50                   push eax
// 0085fd86  c744242cf8fdffff     mov dword ptr [esp + 0x2c], 0xfffffdf8
// 0085fd8e  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 0085fd95  885c2434             mov byte ptr [esp + 0x34], bl
// 0085fd99  894c2430             mov dword ptr [esp + 0x30], ecx
// 0085fd9d  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0085fda3  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085fda7  a90000ffff           test eax, 0xffff0000
// 0085fdac  7515                 jne 0x85fdc3
// 0085fdae  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0085fdb2  56                   push esi
// 0085fdb3  50                   push eax
// 0085fdb4  51                   push ecx
// 0085fdb5  e8e6ea0000           call 0x86e8a0
// 0085fdba  8bc8                 mov ecx, eax
// 0085fdbc  e88fe70000           call 0x86e550
// 0085fdc1  eb09                 jmp 0x85fdcc
// 0085fdc3  50                   push eax
// 0085fdc4  8bce                 mov ecx, esi
// 0085fdc6  ff155cde9800         call dword ptr [0x98de5c]
// 0085fdcc  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0085fdcf  f6424002             test byte ptr [edx + 0x40], 2
// 0085fdd3  7509                 jne 0x85fdde
// 0085fdd5  56                   push esi
// 0085fdd6  e855a5feff           call 0x84a330
// 0085fddb  83c404               add esp, 4
// 0085fdde  895e04               mov dword ptr [esi + 4], ebx
// 0085fde1  56                   push esi
// 0085fde2  8bcd                 mov ecx, ebp
// 0085fde4  ff1594de9800         call dword ptr [0x98de94]
// 0085fdea  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0085fdf1  5f                   pop edi
// 0085fdf2  5e                   pop esi
// 0085fdf3  8bc5                 mov eax, ebp
// 0085fdf5  5d                   pop ebp
// 0085fdf6  5b                   pop ebx
// 0085fdf7  33cc                 xor ecx, esp
// 0085fdf9  e89c55f9ff           call 0x7f539a
// 0085fdfe  83c474               add esp, 0x74
// 0085fe01  c20800               ret 8
// copied from an identical function in another client (function ?GetToolText@CXTPToolTipContextToolTip@@IAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAUTOOLITEM@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp