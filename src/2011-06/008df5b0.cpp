// roc 2011-06 008df5b0  unit: VCEdit::?$CXTMaskEditT  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008df5b0
//
// 008df5b0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008df5b3  50                   push eax
// 008df5b4  ff15601ba400         call dword ptr [0xa41b60]
// 008df5ba  85c0                 test eax, eax
// 008df5bc  7503                 jne 0x8df5c1
// 008df5be  c20400               ret 4
// 008df5c1  56                   push esi
// 008df5c2  57                   push edi
// 008df5c3  ff15441ba400         call dword ptr [0xa41b44]
// 008df5c9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008df5cd  8bcf                 mov ecx, edi
// 008df5cf  ff15a826a400         call dword ptr [0xa426a8]
// 008df5d5  40                   inc eax
// 008df5d6  50                   push eax
// 008df5d7  6a02                 push 2
// 008df5d9  ff151403a400         call dword ptr [0xa40314]
// 008df5df  8bf0                 mov esi, eax
// 008df5e1  85f6                 test esi, esi
// 008df5e3  750d                 jne 0x8df5f2
// 008df5e5  ff15681ba400         call dword ptr [0xa41b68]
// 008df5eb  5f                   pop edi
// 008df5ec  33c0                 xor eax, eax
// 008df5ee  5e                   pop esi
// 008df5ef  c20400               ret 4
// 008df5f2  53                   push ebx
// 008df5f3  55                   push ebp
// 008df5f4  56                   push esi
// 008df5f5  ff151803a400         call dword ptr [0xa40318]
// 008df5fb  8bcf                 mov ecx, edi
// 008df5fd  8bd8                 mov ebx, eax
// 008df5ff  ff15c82da400         call dword ptr [0xa42dc8]
// 008df605  8bcf                 mov ecx, edi
// 008df607  8be8                 mov ebp, eax
// 008df609  ff15a826a400         call dword ptr [0xa426a8]
// 008df60f  40                   inc eax
// 008df610  55                   push ebp
// 008df611  50                   push eax
// 008df612  53                   push ebx
// 008df613  ff15dc09a400         call dword ptr [0xa409dc]
// 008df619  83c40c               add esp, 0xc
// 008df61c  56                   push esi
// 008df61d  ff151c03a400         call dword ptr [0xa4031c]
// 008df623  56                   push esi
// 008df624  6a01                 push 1
// 008df626  ff15481ba400         call dword ptr [0xa41b48]
// 008df62c  ff15681ba400         call dword ptr [0xa41b68]
// 008df632  5d                   pop ebp
// 008df633  f7d8                 neg eax
// 008df635  5b                   pop ebx
// 008df636  1bc0                 sbb eax, eax
// 008df638  5f                   pop edi
// 008df639  f7d8                 neg eax
// 008df63b  5e                   pop esi
// 008df63c  c20400               ret 4
// copied from an identical function in another client (function ?CopyToClipboard@?$CXTMaskEditT@VCEdit@@@@QAEHABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp