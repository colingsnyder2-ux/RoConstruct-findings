// roc 2007-08 00655a10  unit: CInstanceRecord::CNameItem  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00655a10
//
// 00655a10  83ec64               sub esp, 0x64
// 00655a13  a188518b00           mov eax, dword ptr [0x8b5188]
// 00655a18  33c4                 xor eax, esp
// 00655a1a  89442460             mov dword ptr [esp + 0x60], eax
// 00655a1e  56                   push esi
// 00655a1f  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00655a23  57                   push edi
// 00655a24  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 00655a28  6a00                 push 0
// 00655a2a  68a4817c00           push 0x7c81a4
// 00655a2f  8bce                 mov ecx, esi
// 00655a31  ff1520df7700         call dword ptr [0x77df20]
// 00655a37  85c0                 test eax, eax
// 00655a39  7c3d                 jl 0x655a78
// 00655a3b  6a60                 push 0x60
// 00655a3d  8d44240c             lea eax, [esp + 0xc]
// 00655a41  6a00                 push 0
// 00655a43  50                   push eax
// 00655a44  e843b1fdff           call 0x630b8c
// 00655a49  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00655a50  83c40c               add esp, 0xc
// 00655a53  6a60                 push 0x60
// 00655a55  8d4c240c             lea ecx, [esp + 0xc]
// 00655a59  51                   push ecx
// 00655a5a  6a00                 push 0
// 00655a5c  57                   push edi
// 00655a5d  6a00                 push 0
// 00655a5f  52                   push edx
// 00655a60  ff15acd17700         call dword ptr [0x77d1ac]
// 00655a66  8d442408             lea eax, [esp + 8]
// 00655a6a  50                   push eax
// 00655a6b  68a4817c00           push 0x7c81a4
// 00655a70  8bce                 mov ecx, esi
// 00655a72  ff157cdc7700         call dword ptr [0x77dc7c]
// 00655a78  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00655a7c  5f                   pop edi
// 00655a7d  5e                   pop esi
// 00655a7e  33cc                 xor ecx, esp
// 00655a80  e899affdff           call 0x630a1e
// 00655a85  83c464               add esp, 0x64
// 00655a88  c3                   ret 
// copied from an identical function in another client (function ?__ProcessTime_X@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp