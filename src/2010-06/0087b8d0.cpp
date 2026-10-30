// roc 2010-06 0087b8d0  unit: VCEdit::?$CXTMaskEditT  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087b8d0
//
// 0087b8d0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0087b8d3  50                   push eax
// 0087b8d4  ff15c4ba9e00         call dword ptr [0x9ebac4]
// 0087b8da  85c0                 test eax, eax
// 0087b8dc  7503                 jne 0x87b8e1
// 0087b8de  c20400               ret 4
// 0087b8e1  56                   push esi
// 0087b8e2  57                   push edi
// 0087b8e3  ff1590bc9e00         call dword ptr [0x9ebc90]
// 0087b8e9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0087b8ed  8bcf                 mov ecx, edi
// 0087b8ef  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087b8f5  40                   inc eax
// 0087b8f6  50                   push eax
// 0087b8f7  6a02                 push 2
// 0087b8f9  ff1538a39e00         call dword ptr [0x9ea338]
// 0087b8ff  8bf0                 mov esi, eax
// 0087b901  85f6                 test esi, esi
// 0087b903  750d                 jne 0x87b912
// 0087b905  ff15a0bc9e00         call dword ptr [0x9ebca0]
// 0087b90b  5f                   pop edi
// 0087b90c  33c0                 xor eax, eax
// 0087b90e  5e                   pop esi
// 0087b90f  c20400               ret 4
// 0087b912  53                   push ebx
// 0087b913  55                   push ebp
// 0087b914  56                   push esi
// 0087b915  ff153ca39e00         call dword ptr [0x9ea33c]
// 0087b91b  8bcf                 mov ecx, edi
// 0087b91d  8bd8                 mov ebx, eax
// 0087b91f  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087b925  8bcf                 mov ecx, edi
// 0087b927  8be8                 mov ebp, eax
// 0087b929  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087b92f  40                   inc eax
// 0087b930  55                   push ebp
// 0087b931  50                   push eax
// 0087b932  53                   push ebx
// 0087b933  ff1578a89e00         call dword ptr [0x9ea878]
// 0087b939  83c40c               add esp, 0xc
// 0087b93c  56                   push esi
// 0087b93d  ff1540a39e00         call dword ptr [0x9ea340]
// 0087b943  56                   push esi
// 0087b944  6a01                 push 1
// 0087b946  ff1594bc9e00         call dword ptr [0x9ebc94]
// 0087b94c  ff15a0bc9e00         call dword ptr [0x9ebca0]
// 0087b952  5d                   pop ebp
// 0087b953  f7d8                 neg eax
// 0087b955  5b                   pop ebx
// 0087b956  1bc0                 sbb eax, eax
// 0087b958  5f                   pop edi
// 0087b959  f7d8                 neg eax
// 0087b95b  5e                   pop esi
// 0087b95c  c20400               ret 4
// copied from an identical function in another client (function ?CopyToClipboard@?$CXTMaskEditT@VCEdit@@@@QAEHABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp