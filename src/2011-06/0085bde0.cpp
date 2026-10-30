// roc 2011-06 0085bde0  unit: CXTPControlSelector  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085bde0
//
// 0085bde0  56                   push esi
// 0085bde1  57                   push edi
// 0085bde2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085bde6  8bcf                 mov ecx, edi
// 0085bde8  33f6                 xor esi, esi
// 0085bdea  ff15a826a400         call dword ptr [0xa426a8]
// 0085bdf0  85c0                 test eax, eax
// 0085bdf2  7e42                 jle 0x85be36
// 0085bdf4  56                   push esi
// 0085bdf5  8bcf                 mov ecx, edi
// 0085bdf7  ff153c25a400         call dword ptr [0xa4253c]
// 0085bdfd  3c26                 cmp al, 0x26
// 0085bdff  7528                 jne 0x85be29
// 0085be01  8bcf                 mov ecx, edi
// 0085be03  ff15a826a400         call dword ptr [0xa426a8]
// 0085be09  48                   dec eax
// 0085be0a  3bf0                 cmp esi, eax
// 0085be0c  7410                 je 0x85be1e
// 0085be0e  8d4601               lea eax, [esi + 1]
// 0085be11  50                   push eax
// 0085be12  8bcf                 mov ecx, edi
// 0085be14  ff153c25a400         call dword ptr [0xa4253c]
// 0085be1a  3c26                 cmp al, 0x26
// 0085be1c  740b                 je 0x85be29
// 0085be1e  6a01                 push 1
// 0085be20  56                   push esi
// 0085be21  8bcf                 mov ecx, edi
// 0085be23  ff15c829a400         call dword ptr [0xa429c8]
// 0085be29  8bcf                 mov ecx, edi
// 0085be2b  46                   inc esi
// 0085be2c  ff15a826a400         call dword ptr [0xa426a8]
// 0085be32  3bf0                 cmp esi, eax
// 0085be34  7cbe                 jl 0x85bdf4
// 0085be36  5f                   pop edi
// 0085be37  5e                   pop esi
// 0085be38  c3                   ret 
// copied from an identical function in another client (function ?StripMnemonics@CXTPDrawHelpers@@SAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPDrawHelpers.cpp