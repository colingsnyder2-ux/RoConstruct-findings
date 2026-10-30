// roc 2009-06 0074a240  unit: CXTPReportControl  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074a240
//
// 0074a240  83ec70               sub esp, 0x70
// 0074a243  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0074a248  33c4                 xor eax, esp
// 0074a24a  8944246c             mov dword ptr [esp + 0x6c], eax
// 0074a24e  8b442474             mov eax, dword ptr [esp + 0x74]
// 0074a252  55                   push ebp
// 0074a253  57                   push edi
// 0074a254  8bbc2480000000       mov edi, dword ptr [esp + 0x80]
// 0074a25b  8944240c             mov dword ptr [esp + 0xc], eax
// 0074a25f  e81cecffff           call 0x748e80
// 0074a264  a16c1aa500           mov eax, dword ptr [0xa51a6c]
// 0074a269  33ed                 xor ebp, ebp
// 0074a26b  3bc5                 cmp eax, ebp
// 0074a26d  89442410             mov dword ptr [esp + 0x10], eax
// 0074a271  896c2408             mov dword ptr [esp + 8], ebp
// 0074a275  0f8ead000000         jle 0x74a328
// 0074a27b  53                   push ebx
// 0074a27c  8b9c2488000000       mov ebx, dword ptr [esp + 0x88]
// 0074a283  56                   push esi
// 0074a284  85ed                 test ebp, ebp
// 0074a286  0f8cad000000         jl 0x74a339
// 0074a28c  8b0d6c1aa500         mov ecx, dword ptr [0xa51a6c]
// 0074a292  394c2410             cmp dword ptr [esp + 0x10], ecx
// 0074a296  0f8d9d000000         jge 0x74a339
// 0074a29c  8b15681aa500         mov edx, dword ptr [0xa51a68]
// 0074a2a2  8b042a               mov eax, dword ptr [edx + ebp]
// 0074a2a5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0074a2a9  8d342a               lea esi, [edx + ebp]
// 0074a2ac  6a00                 push 0
// 0074a2ae  50                   push eax
// 0074a2af  ff15bcfe8900         call dword ptr [0x89febc]
// 0074a2b5  85c0                 test eax, eax
// 0074a2b7  7c57                 jl 0x74a310
// 0074a2b9  6a60                 push 0x60
// 0074a2bb  8d442420             lea eax, [esp + 0x20]
// 0074a2bf  6a00                 push 0
// 0074a2c1  50                   push eax
// 0074a2c2  e8adf9fcff           call 0x719c74
// 0074a2c7  83c40c               add esp, 0xc
// 0074a2ca  837e0800             cmp dword ptr [esi + 8], 0
// 0074a2ce  6a60                 push 0x60
// 0074a2d0  7415                 je 0x74a2e7
// 0074a2d2  8b5604               mov edx, dword ptr [esi + 4]
// 0074a2d5  8d4c2420             lea ecx, [esp + 0x20]
// 0074a2d9  51                   push ecx
// 0074a2da  52                   push edx
// 0074a2db  57                   push edi
// 0074a2dc  6a00                 push 0
// 0074a2de  53                   push ebx
// 0074a2df  ff1560e38900         call dword ptr [0x89e360]
// 0074a2e5  eb13                 jmp 0x74a2fa
// 0074a2e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0074a2ea  8d442420             lea eax, [esp + 0x20]
// 0074a2ee  50                   push eax
// 0074a2ef  51                   push ecx
// 0074a2f0  57                   push edi
// 0074a2f1  6a00                 push 0
// 0074a2f3  53                   push ebx
// 0074a2f4  ff155ce38900         call dword ptr [0x89e35c]
// 0074a2fa  85c0                 test eax, eax
// 0074a2fc  7412                 je 0x74a310
// 0074a2fe  8b06                 mov eax, dword ptr [esi]
// 0074a300  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0074a304  8d54241c             lea edx, [esp + 0x1c]
// 0074a308  52                   push edx
// 0074a309  50                   push eax
// 0074a30a  ff15a4fe8900         call dword ptr [0x89fea4]
// 0074a310  8b442410             mov eax, dword ptr [esp + 0x10]
// 0074a314  40                   inc eax
// 0074a315  83c50c               add ebp, 0xc
// 0074a318  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0074a31c  89442410             mov dword ptr [esp + 0x10], eax
// 0074a320  0f8c5effffff         jl 0x74a284
// 0074a326  5e                   pop esi
// 0074a327  5b                   pop ebx
// 0074a328  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0074a32c  5f                   pop edi
// 0074a32d  5d                   pop ebp
// 0074a32e  33cc                 xor ecx, esp
// 0074a330  e84502fdff           call 0x71a57a
// 0074a335  83c470               add esp, 0x70
// 0074a338  c3                   ret 
// 0074a339  e8a6e9fcff           call 0x718ce4
// copied from an identical function in another client (function ?_ProcessMappedSpecs@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp