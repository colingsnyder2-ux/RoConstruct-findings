// roc 2011-06 00839230  unit: CXTPReportControl  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00839230
//
// 00839230  83ec70               sub esp, 0x70
// 00839233  a12058c900           mov eax, dword ptr [0xc95820]
// 00839238  33c4                 xor eax, esp
// 0083923a  8944246c             mov dword ptr [esp + 0x6c], eax
// 0083923e  8b442474             mov eax, dword ptr [esp + 0x74]
// 00839242  55                   push ebp
// 00839243  57                   push edi
// 00839244  8bbc2480000000       mov edi, dword ptr [esp + 0x80]
// 0083924b  8944240c             mov dword ptr [esp + 0xc], eax
// 0083924f  e82cecffff           call 0x837e80
// 00839254  a1d482d100           mov eax, dword ptr [0xd182d4]
// 00839259  33ed                 xor ebp, ebp
// 0083925b  3bc5                 cmp eax, ebp
// 0083925d  89442410             mov dword ptr [esp + 0x10], eax
// 00839261  896c2408             mov dword ptr [esp + 8], ebp
// 00839265  0f8ead000000         jle 0x839318
// 0083926b  53                   push ebx
// 0083926c  8b9c2488000000       mov ebx, dword ptr [esp + 0x88]
// 00839273  56                   push esi
// 00839274  85ed                 test ebp, ebp
// 00839276  0f8cad000000         jl 0x839329
// 0083927c  8b0dd482d100         mov ecx, dword ptr [0xd182d4]
// 00839282  394c2410             cmp dword ptr [esp + 0x10], ecx
// 00839286  0f8d9d000000         jge 0x839329
// 0083928c  8b15d082d100         mov edx, dword ptr [0xd182d0]
// 00839292  8b042a               mov eax, dword ptr [edx + ebp]
// 00839295  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00839299  8d342a               lea esi, [edx + ebp]
// 0083929c  6a00                 push 0
// 0083929e  50                   push eax
// 0083929f  ff15a428a400         call dword ptr [0xa428a4]
// 008392a5  85c0                 test eax, eax
// 008392a7  7c57                 jl 0x839300
// 008392a9  6a60                 push 0x60
// 008392ab  8d442420             lea eax, [esp + 0x20]
// 008392af  6a00                 push 0
// 008392b1  50                   push eax
// 008392b2  e82d20fdff           call 0x80b2e4
// 008392b7  83c40c               add esp, 0xc
// 008392ba  837e0800             cmp dword ptr [esi + 8], 0
// 008392be  6a60                 push 0x60
// 008392c0  7415                 je 0x8392d7
// 008392c2  8b5604               mov edx, dword ptr [esi + 4]
// 008392c5  8d4c2420             lea ecx, [esp + 0x20]
// 008392c9  51                   push ecx
// 008392ca  52                   push edx
// 008392cb  57                   push edi
// 008392cc  6a00                 push 0
// 008392ce  53                   push ebx
// 008392cf  ff154c02a400         call dword ptr [0xa4024c]
// 008392d5  eb13                 jmp 0x8392ea
// 008392d7  8b4e04               mov ecx, dword ptr [esi + 4]
// 008392da  8d442420             lea eax, [esp + 0x20]
// 008392de  50                   push eax
// 008392df  51                   push ecx
// 008392e0  57                   push edi
// 008392e1  6a00                 push 0
// 008392e3  53                   push ebx
// 008392e4  ff155002a400         call dword ptr [0xa40250]
// 008392ea  85c0                 test eax, eax
// 008392ec  7412                 je 0x839300
// 008392ee  8b06                 mov eax, dword ptr [esi]
// 008392f0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008392f4  8d54241c             lea edx, [esp + 0x1c]
// 008392f8  52                   push edx
// 008392f9  50                   push eax
// 008392fa  ff15b828a400         call dword ptr [0xa428b8]
// 00839300  8b442410             mov eax, dword ptr [esp + 0x10]
// 00839304  40                   inc eax
// 00839305  83c50c               add ebp, 0xc
// 00839308  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0083930c  89442410             mov dword ptr [esp + 0x10], eax
// 00839310  0f8c5effffff         jl 0x839274
// 00839316  5e                   pop esi
// 00839317  5b                   pop ebx
// 00839318  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0083931c  5f                   pop edi
// 0083931d  5d                   pop ebp
// 0083931e  33cc                 xor ecx, esp
// 00839320  e8d225fdff           call 0x80b8f7
// 00839325  83c470               add esp, 0x70
// 00839328  c3                   ret 
// 00839329  e8dc0ffdff           call 0x80a30a
// copied from an identical function in another client (function ?_ProcessMappedSpecs@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp