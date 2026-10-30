// roc 2011-06 00830590  unit: CXTPReportColumn  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00830590
//
// 00830590  83ec64               sub esp, 0x64
// 00830593  a12058c900           mov eax, dword ptr [0xc95820]
// 00830598  33c4                 xor eax, esp
// 0083059a  89442460             mov dword ptr [esp + 0x60], eax
// 0083059e  56                   push esi
// 0083059f  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008305a3  57                   push edi
// 008305a4  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 008305a8  6a00                 push 0
// 008305aa  683048ac00           push 0xac4830
// 008305af  8bce                 mov ecx, esi
// 008305b1  ff15a428a400         call dword ptr [0xa428a4]
// 008305b7  85c0                 test eax, eax
// 008305b9  7c3d                 jl 0x8305f8
// 008305bb  6a60                 push 0x60
// 008305bd  8d44240c             lea eax, [esp + 0xc]
// 008305c1  6a00                 push 0
// 008305c3  50                   push eax
// 008305c4  e81badfdff           call 0x80b2e4
// 008305c9  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 008305d0  83c40c               add esp, 0xc
// 008305d3  6a60                 push 0x60
// 008305d5  8d4c240c             lea ecx, [esp + 0xc]
// 008305d9  51                   push ecx
// 008305da  6a00                 push 0
// 008305dc  57                   push edi
// 008305dd  6a00                 push 0
// 008305df  52                   push edx
// 008305e0  ff154c02a400         call dword ptr [0xa4024c]
// 008305e6  8d442408             lea eax, [esp + 8]
// 008305ea  50                   push eax
// 008305eb  683048ac00           push 0xac4830
// 008305f0  8bce                 mov ecx, esi
// 008305f2  ff15b828a400         call dword ptr [0xa428b8]
// 008305f8  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008305fc  5f                   pop edi
// 008305fd  5e                   pop esi
// 008305fe  33cc                 xor ecx, esp
// 00830600  e8f2b2fdff           call 0x80b8f7
// 00830605  83c464               add esp, 0x64
// 00830608  c3                   ret 
// copied from an identical function in another client (function ?__ProcessTime_X@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp