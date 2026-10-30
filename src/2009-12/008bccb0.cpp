// roc 2009-12 008bccb0  unit: CXTPDockingPaneContext  size: 279 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bccb0
//
// 008bccb0  6aff                 push -1
// 008bccb2  68003b9600           push 0x963b00
// 008bccb7  64a100000000         mov eax, dword ptr fs:[0]
// 008bccbd  50                   push eax
// 008bccbe  83ec20               sub esp, 0x20
// 008bccc1  53                   push ebx
// 008bccc2  56                   push esi
// 008bccc3  57                   push edi
// 008bccc4  a10052b600           mov eax, dword ptr [0xb65200]
// 008bccc9  33c4                 xor eax, esp
// 008bcccb  50                   push eax
// 008bcccc  8d442430             lea eax, [esp + 0x30]
// 008bccd0  64a300000000         mov dword ptr fs:[0], eax
// 008bccd6  33db                 xor ebx, ebx
// 008bccd8  bff82a9f00           mov edi, 0x9f2af8
// 008bccdd  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008bcce1  897c2418             mov dword ptr [esp + 0x18], edi
// 008bcce5  895c2438             mov dword ptr [esp + 0x38], ebx
// 008bcce9  895c2414             mov dword ptr [esp + 0x14], ebx
// 008bcced  897c2410             mov dword ptr [esp + 0x10], edi
// 008bccf1  8b35c4b09800         mov esi, dword ptr [0x98b0c4]
// 008bccf7  8d442444             lea eax, [esp + 0x44]
// 008bccfb  50                   push eax
// 008bccfc  c644243c01           mov byte ptr [esp + 0x3c], 1
// 008bcd01  ffd6                 call esi
// 008bcd03  50                   push eax
// 008bcd04  8d4c241c             lea ecx, [esp + 0x1c]
// 008bcd08  e81d71f3ff           call 0x7f3e2a
// 008bcd0d  8b542448             mov edx, dword ptr [esp + 0x48]
// 008bcd11  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008bcd15  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008bcd19  6afc                 push -4
// 008bcd1b  89542428             mov dword ptr [esp + 0x28], edx
// 008bcd1f  894c2424             mov dword ptr [esp + 0x24], ecx
// 008bcd23  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008bcd27  6afc                 push -4
// 008bcd29  8d542428             lea edx, [esp + 0x28]
// 008bcd2d  52                   push edx
// 008bcd2e  89442434             mov dword ptr [esp + 0x34], eax
// 008bcd32  894c2438             mov dword ptr [esp + 0x38], ecx
// 008bcd36  ff1558ca9800         call dword ptr [0x98ca58]
// 008bcd3c  8d442444             lea eax, [esp + 0x44]
// 008bcd40  50                   push eax
// 008bcd41  8d4c2424             lea ecx, [esp + 0x24]
// 008bcd45  51                   push ecx
// 008bcd46  8bd1                 mov edx, ecx
// 008bcd48  52                   push edx
// 008bcd49  ff15dcca9800         call dword ptr [0x98cadc]
// 008bcd4f  8d442420             lea eax, [esp + 0x20]
// 008bcd53  50                   push eax
// 008bcd54  ffd6                 call esi
// 008bcd56  50                   push eax
// 008bcd57  8d4c2414             lea ecx, [esp + 0x14]
// 008bcd5b  e8ca70f3ff           call 0x7f3e2a
// 008bcd60  53                   push ebx
// 008bcd61  53                   push ebx
// 008bcd62  53                   push ebx
// 008bcd63  53                   push ebx
// 008bcd64  ff150cb19800         call dword ptr [0x98b10c]
// 008bcd6a  8b742440             mov esi, dword ptr [esp + 0x40]
// 008bcd6e  50                   push eax
// 008bcd6f  8bce                 mov ecx, esi
// 008bcd71  e8b470f3ff           call 0x7f3e2a
// 008bcd76  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008bcd7a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008bcd7e  8b4604               mov eax, dword ptr [esi + 4]
// 008bcd81  6a03                 push 3
// 008bcd83  51                   push ecx
// 008bcd84  52                   push edx
// 008bcd85  50                   push eax
// 008bcd86  ff15acb09800         call dword ptr [0x98b0ac]
// 008bcd8c  8d4c2410             lea ecx, [esp + 0x10]
// 008bcd90  885c2438             mov byte ptr [esp + 0x38], bl
// 008bcd94  897c2410             mov dword ptr [esp + 0x10], edi
// 008bcd98  e89324b5ff           call 0x40f230
// 008bcd9d  8d4c2418             lea ecx, [esp + 0x18]
// 008bcda1  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008bcda9  897c2418             mov dword ptr [esp + 0x18], edi
// 008bcdad  e87e24b5ff           call 0x40f230
// 008bcdb2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008bcdb6  64890d00000000       mov dword ptr fs:[0], ecx
// 008bcdbd  59                   pop ecx
// 008bcdbe  5f                   pop edi
// 008bcdbf  5e                   pop esi
// 008bcdc0  5b                   pop ebx
// 008bcdc1  83c42c               add esp, 0x2c
// 008bcdc4  c21400               ret 0x14
// copied from an identical function in another client (function ?_CreateRectangleRgn@CXTPDockingPaneContext@@IAEXAAVCRgn@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp