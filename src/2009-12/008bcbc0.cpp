// roc 2009-12 008bcbc0  unit: CXTPDockingPaneContext  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bcbc0
//
// 008bcbc0  83ec1c               sub esp, 0x1c
// 008bcbc3  53                   push ebx
// 008bcbc4  56                   push esi
// 008bcbc5  8bf1                 mov esi, ecx
// 008bcbc7  57                   push edi
// 008bcbc8  8b3d9cca9800         mov edi, dword ptr [0x98ca9c]
// 008bcbce  8d8650010000         lea eax, [esi + 0x150]
// 008bcbd4  50                   push eax
// 008bcbd5  ffd7                 call edi
// 008bcbd7  33db                 xor ebx, ebx
// 008bcbd9  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008bcbdf  51                   push ecx
// 008bcbe0  899e64010000         mov dword ptr [esi + 0x164], ebx
// 008bcbe6  899e60010000         mov dword ptr [esi + 0x160], ebx
// 008bcbec  899e68010000         mov dword ptr [esi + 0x168], ebx
// 008bcbf2  ffd7                 call edi
// 008bcbf4  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 008bcbfa  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 008bcc00  899e28010000         mov dword ptr [esi + 0x128], ebx
// 008bcc06  399eb4000000         cmp dword ptr [esi + 0xb4], ebx
// 008bcc0c  0f858c000000         jne 0x8bcc9e
// 008bcc12  8b3d24cc9800         mov edi, dword ptr [0x98cc24]
// 008bcc18  55                   push ebp
// 008bcc19  53                   push ebx
// 008bcc1a  6a0f                 push 0xf
// 008bcc1c  6a0f                 push 0xf
// 008bcc1e  53                   push ebx
// 008bcc1f  8d542420             lea edx, [esp + 0x20]
// 008bcc23  52                   push edx
// 008bcc24  ffd7                 call edi
// 008bcc26  85c0                 test eax, eax
// 008bcc28  7432                 je 0x8bcc5c
// 008bcc2a  8b2d94ca9800         mov ebp, dword ptr [0x98ca94]
// 008bcc30  6a0f                 push 0xf
// 008bcc32  6a0f                 push 0xf
// 008bcc34  53                   push ebx
// 008bcc35  8d44241c             lea eax, [esp + 0x1c]
// 008bcc39  50                   push eax
// 008bcc3a  ff15b0ca9800         call dword ptr [0x98cab0]
// 008bcc40  85c0                 test eax, eax
// 008bcc42  7459                 je 0x8bcc9d
// 008bcc44  8d4c2410             lea ecx, [esp + 0x10]
// 008bcc48  51                   push ecx
// 008bcc49  ffd5                 call ebp
// 008bcc4b  53                   push ebx
// 008bcc4c  6a0f                 push 0xf
// 008bcc4e  6a0f                 push 0xf
// 008bcc50  53                   push ebx
// 008bcc51  8d542420             lea edx, [esp + 0x20]
// 008bcc55  52                   push edx
// 008bcc56  ffd7                 call edi
// 008bcc58  85c0                 test eax, eax
// 008bcc5a  75d4                 jne 0x8bcc30
// 008bcc5c  ff15e4cb9800         call dword ptr [0x98cbe4]
// 008bcc62  50                   push eax
// 008bcc63  e8c26ef3ff           call 0x7f3b2a
// 008bcc68  8bf8                 mov edi, eax
// 008bcc6a  8b4720               mov eax, dword ptr [edi + 0x20]
// 008bcc6d  50                   push eax
// 008bcc6e  ff15acca9800         call dword ptr [0x98caac]
// 008bcc74  85c0                 test eax, eax
// 008bcc76  740c                 je 0x8bcc84
// 008bcc78  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008bcc7b  6803040000           push 0x403
// 008bcc80  53                   push ebx
// 008bcc81  51                   push ecx
// 008bcc82  eb07                 jmp 0x8bcc8b
// 008bcc84  8b5720               mov edx, dword ptr [edi + 0x20]
// 008bcc87  6a03                 push 3
// 008bcc89  53                   push ebx
// 008bcc8a  52                   push edx
// 008bcc8b  ff15a8ca9800         call dword ptr [0x98caa8]
// 008bcc91  50                   push eax
// 008bcc92  e899970600           call 0x926430
// 008bcc97  89868c010000         mov dword ptr [esi + 0x18c], eax
// 008bcc9d  5d                   pop ebp
// 008bcc9e  5f                   pop edi
// 008bcc9f  5e                   pop esi
// 008bcca0  5b                   pop ebx
// 008bcca1  83c41c               add esp, 0x1c
// 008bcca4  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?InitLoop@CXTPDockingPaneContext@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
