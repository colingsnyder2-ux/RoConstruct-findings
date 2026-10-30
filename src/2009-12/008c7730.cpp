// roc 2009-12 008c7730  unit: VCEdit::?$CXTMaskEditT  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c7730
//
// 008c7730  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008c7733  50                   push eax
// 008c7734  ff1504cc9800         call dword ptr [0x98cc04]
// 008c773a  85c0                 test eax, eax
// 008c773c  7503                 jne 0x8c7741
// 008c773e  c20400               ret 4
// 008c7741  56                   push esi
// 008c7742  57                   push edi
// 008c7743  ff151ccc9800         call dword ptr [0x98cc1c]
// 008c7749  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008c774d  8bcf                 mov ecx, edi
// 008c774f  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c7755  40                   inc eax
// 008c7756  50                   push eax
// 008c7757  6a02                 push 2
// 008c7759  ff15c8b19800         call dword ptr [0x98b1c8]
// 008c775f  8bf0                 mov esi, eax
// 008c7761  85f6                 test esi, esi
// 008c7763  750d                 jne 0x8c7772
// 008c7765  ff150ccc9800         call dword ptr [0x98cc0c]
// 008c776b  5f                   pop edi
// 008c776c  33c0                 xor eax, eax
// 008c776e  5e                   pop esi
// 008c776f  c20400               ret 4
// 008c7772  53                   push ebx
// 008c7773  55                   push ebp
// 008c7774  56                   push esi
// 008c7775  ff15ccb19800         call dword ptr [0x98b1cc]
// 008c777b  8bcf                 mov ecx, edi
// 008c777d  8bd8                 mov ebx, eax
// 008c777f  ff1580de9800         call dword ptr [0x98de80]
// 008c7785  8bcf                 mov ecx, edi
// 008c7787  8be8                 mov ebp, eax
// 008c7789  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c778f  40                   inc eax
// 008c7790  55                   push ebp
// 008c7791  50                   push eax
// 008c7792  53                   push ebx
// 008c7793  ff15c8b79800         call dword ptr [0x98b7c8]
// 008c7799  83c40c               add esp, 0xc
// 008c779c  56                   push esi
// 008c779d  ff15d0b19800         call dword ptr [0x98b1d0]
// 008c77a3  56                   push esi
// 008c77a4  6a01                 push 1
// 008c77a6  ff1518cc9800         call dword ptr [0x98cc18]
// 008c77ac  ff150ccc9800         call dword ptr [0x98cc0c]
// 008c77b2  5d                   pop ebp
// 008c77b3  f7d8                 neg eax
// 008c77b5  5b                   pop ebx
// 008c77b6  1bc0                 sbb eax, eax
// 008c77b8  5f                   pop edi
// 008c77b9  f7d8                 neg eax
// 008c77bb  5e                   pop esi
// 008c77bc  c20400               ret 4
// copied from an identical function in another client (function ?CopyToClipboard@?$CXTMaskEditT@VCEdit@@@@QAEHABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp