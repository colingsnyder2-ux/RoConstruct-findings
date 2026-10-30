// roc 2009-12 00825030  unit: CXTPReportControl  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00825030
//
// 00825030  83ec70               sub esp, 0x70
// 00825033  a10052b600           mov eax, dword ptr [0xb65200]
// 00825038  33c4                 xor eax, esp
// 0082503a  8944246c             mov dword ptr [esp + 0x6c], eax
// 0082503e  8b442474             mov eax, dword ptr [esp + 0x74]
// 00825042  55                   push ebp
// 00825043  57                   push edi
// 00825044  8bbc2480000000       mov edi, dword ptr [esp + 0x80]
// 0082504b  8944240c             mov dword ptr [esp + 0xc], eax
// 0082504f  e83cecffff           call 0x823c90
// 00825054  a1c8aeb900           mov eax, dword ptr [0xb9aec8]
// 00825059  33ed                 xor ebp, ebp
// 0082505b  3bc5                 cmp eax, ebp
// 0082505d  89442410             mov dword ptr [esp + 0x10], eax
// 00825061  896c2408             mov dword ptr [esp + 8], ebp
// 00825065  0f8ead000000         jle 0x825118
// 0082506b  53                   push ebx
// 0082506c  8b9c2488000000       mov ebx, dword ptr [esp + 0x88]
// 00825073  56                   push esi
// 00825074  85ed                 test ebp, ebp
// 00825076  0f8cad000000         jl 0x825129
// 0082507c  8b0dc8aeb900         mov ecx, dword ptr [0xb9aec8]
// 00825082  394c2410             cmp dword ptr [esp + 0x10], ecx
// 00825086  0f8d9d000000         jge 0x825129
// 0082508c  8b15c4aeb900         mov edx, dword ptr [0xb9aec4]
// 00825092  8b042a               mov eax, dword ptr [edx + ebp]
// 00825095  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00825099  8d342a               lea esi, [edx + ebp]
// 0082509c  6a00                 push 0
// 0082509e  50                   push eax
// 0082509f  ff1500d89800         call dword ptr [0x98d800]
// 008250a5  85c0                 test eax, eax
// 008250a7  7c57                 jl 0x825100
// 008250a9  6a60                 push 0x60
// 008250ab  8d442420             lea eax, [esp + 0x20]
// 008250af  6a00                 push 0
// 008250b1  50                   push eax
// 008250b2  e8edf9fcff           call 0x7f4aa4
// 008250b7  83c40c               add esp, 0xc
// 008250ba  837e0800             cmp dword ptr [esi + 8], 0
// 008250be  6a60                 push 0x60
// 008250c0  7415                 je 0x8250d7
// 008250c2  8b5604               mov edx, dword ptr [esi + 4]
// 008250c5  8d4c2420             lea ecx, [esp + 0x20]
// 008250c9  51                   push ecx
// 008250ca  52                   push edx
// 008250cb  57                   push edi
// 008250cc  6a00                 push 0
// 008250ce  53                   push ebx
// 008250cf  ff1524b39800         call dword ptr [0x98b324]
// 008250d5  eb13                 jmp 0x8250ea
// 008250d7  8b4e04               mov ecx, dword ptr [esi + 4]
// 008250da  8d442420             lea eax, [esp + 0x20]
// 008250de  50                   push eax
// 008250df  51                   push ecx
// 008250e0  57                   push edi
// 008250e1  6a00                 push 0
// 008250e3  53                   push ebx
// 008250e4  ff1520b39800         call dword ptr [0x98b320]
// 008250ea  85c0                 test eax, eax
// 008250ec  7412                 je 0x825100
// 008250ee  8b06                 mov eax, dword ptr [esi]
// 008250f0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008250f4  8d54241c             lea edx, [esp + 0x1c]
// 008250f8  52                   push edx
// 008250f9  50                   push eax
// 008250fa  ff1518d89800         call dword ptr [0x98d818]
// 00825100  8b442410             mov eax, dword ptr [esp + 0x10]
// 00825104  40                   inc eax
// 00825105  83c50c               add ebp, 0xc
// 00825108  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0082510c  89442410             mov dword ptr [esp + 0x10], eax
// 00825110  0f8c5effffff         jl 0x825074
// 00825116  5e                   pop esi
// 00825117  5b                   pop ebx
// 00825118  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0082511c  5f                   pop edi
// 0082511d  5d                   pop ebp
// 0082511e  33cc                 xor ecx, esp
// 00825120  e87502fdff           call 0x7f539a
// 00825125  83c470               add esp, 0x70
// 00825128  c3                   ret 
// 00825129  e8dee9fcff           call 0x7f3b0c
// copied from an identical function in another client (function ?_ProcessMappedSpecs@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp