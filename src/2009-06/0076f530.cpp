// roc 2009-06 0076f530  unit: CXTPControlSelector  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076f530
//
// 0076f530  56                   push esi
// 0076f531  57                   push edi
// 0076f532  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0076f536  8bcf                 mov ecx, edi
// 0076f538  33f6                 xor esi, esi
// 0076f53a  ff1554fb8900         call dword ptr [0x89fb54]
// 0076f540  85c0                 test eax, eax
// 0076f542  7e42                 jle 0x76f586
// 0076f544  56                   push esi
// 0076f545  8bcf                 mov ecx, edi
// 0076f547  ff15e0f98900         call dword ptr [0x89f9e0]
// 0076f54d  3c26                 cmp al, 0x26
// 0076f54f  7528                 jne 0x76f579
// 0076f551  8bcf                 mov ecx, edi
// 0076f553  ff1554fb8900         call dword ptr [0x89fb54]
// 0076f559  48                   dec eax
// 0076f55a  3bf0                 cmp esi, eax
// 0076f55c  7410                 je 0x76f56e
// 0076f55e  8d4601               lea eax, [esi + 1]
// 0076f561  50                   push eax
// 0076f562  8bcf                 mov ecx, edi
// 0076f564  ff15e0f98900         call dword ptr [0x89f9e0]
// 0076f56a  3c26                 cmp al, 0x26
// 0076f56c  740b                 je 0x76f579
// 0076f56e  6a01                 push 1
// 0076f570  56                   push esi
// 0076f571  8bcf                 mov ecx, edi
// 0076f573  ff15b0f98900         call dword ptr [0x89f9b0]
// 0076f579  8bcf                 mov ecx, edi
// 0076f57b  46                   inc esi
// 0076f57c  ff1554fb8900         call dword ptr [0x89fb54]
// 0076f582  3bf0                 cmp esi, eax
// 0076f584  7cbe                 jl 0x76f544
// 0076f586  5f                   pop edi
// 0076f587  5e                   pop esi
// 0076f588  c3                   ret 
// copied from an identical function in another client (function ?StripMnemonics@CXTPDrawHelpers@@SAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPDrawHelpers.cpp