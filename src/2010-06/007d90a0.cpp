// roc 2010-06 007d90a0  unit: CXTPReportControl  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d90a0
//
// 007d90a0  83ec70               sub esp, 0x70
// 007d90a3  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007d90a8  33c4                 xor eax, esp
// 007d90aa  8944246c             mov dword ptr [esp + 0x6c], eax
// 007d90ae  8b442474             mov eax, dword ptr [esp + 0x74]
// 007d90b2  55                   push ebp
// 007d90b3  57                   push edi
// 007d90b4  8bbc2480000000       mov edi, dword ptr [esp + 0x80]
// 007d90bb  8944240c             mov dword ptr [esp + 0xc], eax
// 007d90bf  e82cecffff           call 0x7d7cf0
// 007d90c4  a1f855c200           mov eax, dword ptr [0xc255f8]
// 007d90c9  33ed                 xor ebp, ebp
// 007d90cb  3bc5                 cmp eax, ebp
// 007d90cd  89442410             mov dword ptr [esp + 0x10], eax
// 007d90d1  896c2408             mov dword ptr [esp + 8], ebp
// 007d90d5  0f8ead000000         jle 0x7d9188
// 007d90db  53                   push ebx
// 007d90dc  8b9c2488000000       mov ebx, dword ptr [esp + 0x88]
// 007d90e3  56                   push esi
// 007d90e4  85ed                 test ebp, ebp
// 007d90e6  0f8cad000000         jl 0x7d9199
// 007d90ec  8b0df855c200         mov ecx, dword ptr [0xc255f8]
// 007d90f2  394c2410             cmp dword ptr [esp + 0x10], ecx
// 007d90f6  0f8d9d000000         jge 0x7d9199
// 007d90fc  8b15f455c200         mov edx, dword ptr [0xc255f4]
// 007d9102  8b042a               mov eax, dword ptr [edx + ebp]
// 007d9105  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d9109  8d342a               lea esi, [edx + ebp]
// 007d910c  6a00                 push 0
// 007d910e  50                   push eax
// 007d910f  ff15fcc79e00         call dword ptr [0x9ec7fc]
// 007d9115  85c0                 test eax, eax
// 007d9117  7c57                 jl 0x7d9170
// 007d9119  6a60                 push 0x60
// 007d911b  8d442420             lea eax, [esp + 0x20]
// 007d911f  6a00                 push 0
// 007d9121  50                   push eax
// 007d9122  e8bdfafcff           call 0x7a8be4
// 007d9127  83c40c               add esp, 0xc
// 007d912a  837e0800             cmp dword ptr [esi + 8], 0
// 007d912e  6a60                 push 0x60
// 007d9130  7415                 je 0x7d9147
// 007d9132  8b5604               mov edx, dword ptr [esi + 4]
// 007d9135  8d4c2420             lea ecx, [esp + 0x20]
// 007d9139  51                   push ecx
// 007d913a  52                   push edx
// 007d913b  57                   push edi
// 007d913c  6a00                 push 0
// 007d913e  53                   push ebx
// 007d913f  ff1568a29e00         call dword ptr [0x9ea268]
// 007d9145  eb13                 jmp 0x7d915a
// 007d9147  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d914a  8d442420             lea eax, [esp + 0x20]
// 007d914e  50                   push eax
// 007d914f  51                   push ecx
// 007d9150  57                   push edi
// 007d9151  6a00                 push 0
// 007d9153  53                   push ebx
// 007d9154  ff156ca29e00         call dword ptr [0x9ea26c]
// 007d915a  85c0                 test eax, eax
// 007d915c  7412                 je 0x7d9170
// 007d915e  8b06                 mov eax, dword ptr [esi]
// 007d9160  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d9164  8d54241c             lea edx, [esp + 0x1c]
// 007d9168  52                   push edx
// 007d9169  50                   push eax
// 007d916a  ff1514c89e00         call dword ptr [0x9ec814]
// 007d9170  8b442410             mov eax, dword ptr [esp + 0x10]
// 007d9174  40                   inc eax
// 007d9175  83c50c               add ebp, 0xc
// 007d9178  3b442418             cmp eax, dword ptr [esp + 0x18]
// 007d917c  89442410             mov dword ptr [esp + 0x10], eax
// 007d9180  0f8c5effffff         jl 0x7d90e4
// 007d9186  5e                   pop esi
// 007d9187  5b                   pop ebx
// 007d9188  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007d918c  5f                   pop edi
// 007d918d  5d                   pop ebp
// 007d918e  33cc                 xor ecx, esp
// 007d9190  e83f03fdff           call 0x7a94d4
// 007d9195  83c470               add esp, 0x70
// 007d9198  c3                   ret 
// 007d9199  e8aeeafcff           call 0x7a7c4c
// copied from an identical function in another client (function ?_ProcessMappedSpecs@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp