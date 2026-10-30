// roc 2010-06 007fe360  unit: CXTPControlSelector  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fe360
//
// 007fe360  56                   push esi
// 007fe361  57                   push edi
// 007fe362  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007fe366  8bcf                 mov ecx, edi
// 007fe368  33f6                 xor esi, esi
// 007fe36a  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007fe370  85c0                 test eax, eax
// 007fe372  7e42                 jle 0x7fe3b6
// 007fe374  56                   push esi
// 007fe375  8bcf                 mov ecx, edi
// 007fe377  ff1558c59e00         call dword ptr [0x9ec558]
// 007fe37d  3c26                 cmp al, 0x26
// 007fe37f  7528                 jne 0x7fe3a9
// 007fe381  8bcf                 mov ecx, edi
// 007fe383  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007fe389  48                   dec eax
// 007fe38a  3bf0                 cmp esi, eax
// 007fe38c  7410                 je 0x7fe39e
// 007fe38e  8d4601               lea eax, [esi + 1]
// 007fe391  50                   push eax
// 007fe392  8bcf                 mov ecx, edi
// 007fe394  ff1558c59e00         call dword ptr [0x9ec558]
// 007fe39a  3c26                 cmp al, 0x26
// 007fe39c  740b                 je 0x7fe3a9
// 007fe39e  6a01                 push 1
// 007fe3a0  56                   push esi
// 007fe3a1  8bcf                 mov ecx, edi
// 007fe3a3  ff151cca9e00         call dword ptr [0x9eca1c]
// 007fe3a9  8bcf                 mov ecx, edi
// 007fe3ab  46                   inc esi
// 007fe3ac  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007fe3b2  3bf0                 cmp esi, eax
// 007fe3b4  7cbe                 jl 0x7fe374
// 007fe3b6  5f                   pop edi
// 007fe3b7  5e                   pop esi
// 007fe3b8  c3                   ret 
// copied from an identical function in another client (function ?StripMnemonics@CXTPDrawHelpers@@SAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPDrawHelpers.cpp