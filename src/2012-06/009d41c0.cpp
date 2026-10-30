// roc 2012-06 009d41c0  unit: CXTPControlSelector  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d41c0
//
// 009d41c0  56                   push esi
// 009d41c1  57                   push edi
// 009d41c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009d41c6  8bcf                 mov ecx, edi
// 009d41c8  33f6                 xor esi, esi
// 009d41ca  ff155846b200         call dword ptr [0xb24658]
// 009d41d0  85c0                 test eax, eax
// 009d41d2  7e42                 jle 0x9d4216
// 009d41d4  56                   push esi
// 009d41d5  8bcf                 mov ecx, edi
// 009d41d7  ff15e844b200         call dword ptr [0xb244e8]
// 009d41dd  3c26                 cmp al, 0x26
// 009d41df  7528                 jne 0x9d4209
// 009d41e1  8bcf                 mov ecx, edi
// 009d41e3  ff155846b200         call dword ptr [0xb24658]
// 009d41e9  48                   dec eax
// 009d41ea  3bf0                 cmp esi, eax
// 009d41ec  7410                 je 0x9d41fe
// 009d41ee  8d4601               lea eax, [esi + 1]
// 009d41f1  50                   push eax
// 009d41f2  8bcf                 mov ecx, edi
// 009d41f4  ff15e844b200         call dword ptr [0xb244e8]
// 009d41fa  3c26                 cmp al, 0x26
// 009d41fc  740b                 je 0x9d4209
// 009d41fe  6a01                 push 1
// 009d4200  56                   push esi
// 009d4201  8bcf                 mov ecx, edi
// 009d4203  ff15644ab200         call dword ptr [0xb24a64]
// 009d4209  8bcf                 mov ecx, edi
// 009d420b  46                   inc esi
// 009d420c  ff155846b200         call dword ptr [0xb24658]
// 009d4212  3bf0                 cmp esi, eax
// 009d4214  7cbe                 jl 0x9d41d4
// 009d4216  5f                   pop edi
// 009d4217  5e                   pop esi
// 009d4218  c3                   ret 
// copied from an identical function in another client (function ?StripMnemonics@CXTPDrawHelpers@@SAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPDrawHelpers.cpp