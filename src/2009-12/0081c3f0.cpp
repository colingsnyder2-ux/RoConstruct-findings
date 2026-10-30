// roc 2009-12 0081c3f0  unit: CXTPReportRecordItemEditOptions  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081c3f0
//
// 0081c3f0  83ec64               sub esp, 0x64
// 0081c3f3  a10052b600           mov eax, dword ptr [0xb65200]
// 0081c3f8  33c4                 xor eax, esp
// 0081c3fa  89442460             mov dword ptr [esp + 0x60], eax
// 0081c3fe  56                   push esi
// 0081c3ff  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0081c403  57                   push edi
// 0081c404  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 0081c408  6a00                 push 0
// 0081c40a  68a84b9f00           push 0x9f4ba8
// 0081c40f  8bce                 mov ecx, esi
// 0081c411  ff1500d89800         call dword ptr [0x98d800]
// 0081c417  85c0                 test eax, eax
// 0081c419  7c3d                 jl 0x81c458
// 0081c41b  6a60                 push 0x60
// 0081c41d  8d44240c             lea eax, [esp + 0xc]
// 0081c421  6a00                 push 0
// 0081c423  50                   push eax
// 0081c424  e87b86fdff           call 0x7f4aa4
// 0081c429  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0081c430  83c40c               add esp, 0xc
// 0081c433  6a60                 push 0x60
// 0081c435  8d4c240c             lea ecx, [esp + 0xc]
// 0081c439  51                   push ecx
// 0081c43a  6a00                 push 0
// 0081c43c  57                   push edi
// 0081c43d  6a00                 push 0
// 0081c43f  52                   push edx
// 0081c440  ff1524b39800         call dword ptr [0x98b324]
// 0081c446  8d442408             lea eax, [esp + 8]
// 0081c44a  50                   push eax
// 0081c44b  68a84b9f00           push 0x9f4ba8
// 0081c450  8bce                 mov ecx, esi
// 0081c452  ff1518d89800         call dword ptr [0x98d818]
// 0081c458  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0081c45c  5f                   pop edi
// 0081c45d  5e                   pop esi
// 0081c45e  33cc                 xor ecx, esp
// 0081c460  e8358ffdff           call 0x7f539a
// 0081c465  83c464               add esp, 0x64
// 0081c468  c3                   ret 
// copied from an identical function in another client (function ?__ProcessTime_X@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp