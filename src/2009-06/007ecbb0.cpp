// roc 2009-06 007ecbb0  unit: VCEdit::?$CXTMaskEditT  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ecbb0
//
// 007ecbb0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 007ecbb3  50                   push eax
// 007ecbb4  ff1560ee8900         call dword ptr [0x89ee60]
// 007ecbba  85c0                 test eax, eax
// 007ecbbc  7503                 jne 0x7ecbc1
// 007ecbbe  c20400               ret 4
// 007ecbc1  56                   push esi
// 007ecbc2  57                   push edi
// 007ecbc3  ff1548ee8900         call dword ptr [0x89ee48]
// 007ecbc9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007ecbcd  8bcf                 mov ecx, edi
// 007ecbcf  ff1554fb8900         call dword ptr [0x89fb54]
// 007ecbd5  40                   inc eax
// 007ecbd6  50                   push eax
// 007ecbd7  6a02                 push 2
// 007ecbd9  ff1514e28900         call dword ptr [0x89e214]
// 007ecbdf  8bf0                 mov esi, eax
// 007ecbe1  85f6                 test esi, esi
// 007ecbe3  750d                 jne 0x7ecbf2
// 007ecbe5  ff1554ee8900         call dword ptr [0x89ee54]
// 007ecbeb  5f                   pop edi
// 007ecbec  33c0                 xor eax, eax
// 007ecbee  5e                   pop esi
// 007ecbef  c20400               ret 4
// 007ecbf2  53                   push ebx
// 007ecbf3  55                   push ebp
// 007ecbf4  56                   push esi
// 007ecbf5  ff1510e28900         call dword ptr [0x89e210]
// 007ecbfb  8bcf                 mov ecx, edi
// 007ecbfd  8bd8                 mov ebx, eax
// 007ecbff  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ecc05  8bcf                 mov ecx, edi
// 007ecc07  8be8                 mov ebp, eax
// 007ecc09  ff1554fb8900         call dword ptr [0x89fb54]
// 007ecc0f  40                   inc eax
// 007ecc10  55                   push ebp
// 007ecc11  50                   push eax
// 007ecc12  53                   push ebx
// 007ecc13  ff1550e98900         call dword ptr [0x89e950]
// 007ecc19  83c40c               add esp, 0xc
// 007ecc1c  56                   push esi
// 007ecc1d  ff150ce28900         call dword ptr [0x89e20c]
// 007ecc23  56                   push esi
// 007ecc24  6a01                 push 1
// 007ecc26  ff154cee8900         call dword ptr [0x89ee4c]
// 007ecc2c  ff1554ee8900         call dword ptr [0x89ee54]
// 007ecc32  5d                   pop ebp
// 007ecc33  f7d8                 neg eax
// 007ecc35  5b                   pop ebx
// 007ecc36  1bc0                 sbb eax, eax
// 007ecc38  5f                   pop edi
// 007ecc39  f7d8                 neg eax
// 007ecc3b  5e                   pop esi
// 007ecc3c  c20400               ret 4
// copied from an identical function in another client (function ?CopyToClipboard@?$CXTMaskEditT@VCEdit@@@@QAEHABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp