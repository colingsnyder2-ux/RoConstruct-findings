// roc 2009-12 0084a330  unit: CXTPControlSelector  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084a330
//
// 0084a330  56                   push esi
// 0084a331  57                   push edi
// 0084a332  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0084a336  8bcf                 mov ecx, edi
// 0084a338  33f6                 xor esi, esi
// 0084a33a  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0084a340  85c0                 test eax, eax
// 0084a342  7e42                 jle 0x84a386
// 0084a344  56                   push esi
// 0084a345  8bcf                 mov ecx, edi
// 0084a347  ff1510d59800         call dword ptr [0x98d510]
// 0084a34d  3c26                 cmp al, 0x26
// 0084a34f  7528                 jne 0x84a379
// 0084a351  8bcf                 mov ecx, edi
// 0084a353  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0084a359  48                   dec eax
// 0084a35a  3bf0                 cmp esi, eax
// 0084a35c  7410                 je 0x84a36e
// 0084a35e  8d4601               lea eax, [esi + 1]
// 0084a361  50                   push eax
// 0084a362  8bcf                 mov ecx, edi
// 0084a364  ff1510d59800         call dword ptr [0x98d510]
// 0084a36a  3c26                 cmp al, 0x26
// 0084a36c  740b                 je 0x84a379
// 0084a36e  6a01                 push 1
// 0084a370  56                   push esi
// 0084a371  8bcf                 mov ecx, edi
// 0084a373  ff151cda9800         call dword ptr [0x98da1c]
// 0084a379  8bcf                 mov ecx, edi
// 0084a37b  46                   inc esi
// 0084a37c  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0084a382  3bf0                 cmp esi, eax
// 0084a384  7cbe                 jl 0x84a344
// 0084a386  5f                   pop edi
// 0084a387  5e                   pop esi
// 0084a388  c3                   ret 
// copied from an identical function in another client (function ?StripMnemonics@CXTPDrawHelpers@@SAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPDrawHelpers.cpp