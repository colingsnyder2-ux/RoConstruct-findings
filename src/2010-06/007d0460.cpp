// roc 2010-06 007d0460  unit: CXTPReportRecordItemEditOptions  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d0460
//
// 007d0460  83ec64               sub esp, 0x64
// 007d0463  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007d0468  33c4                 xor eax, esp
// 007d046a  89442460             mov dword ptr [esp + 0x60], eax
// 007d046e  56                   push esi
// 007d046f  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007d0473  57                   push edi
// 007d0474  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 007d0478  6a00                 push 0
// 007d047a  68988ea500           push 0xa58e98
// 007d047f  8bce                 mov ecx, esi
// 007d0481  ff15fcc79e00         call dword ptr [0x9ec7fc]
// 007d0487  85c0                 test eax, eax
// 007d0489  7c3d                 jl 0x7d04c8
// 007d048b  6a60                 push 0x60
// 007d048d  8d44240c             lea eax, [esp + 0xc]
// 007d0491  6a00                 push 0
// 007d0493  50                   push eax
// 007d0494  e84b87fdff           call 0x7a8be4
// 007d0499  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007d04a0  83c40c               add esp, 0xc
// 007d04a3  6a60                 push 0x60
// 007d04a5  8d4c240c             lea ecx, [esp + 0xc]
// 007d04a9  51                   push ecx
// 007d04aa  6a00                 push 0
// 007d04ac  57                   push edi
// 007d04ad  6a00                 push 0
// 007d04af  52                   push edx
// 007d04b0  ff1568a29e00         call dword ptr [0x9ea268]
// 007d04b6  8d442408             lea eax, [esp + 8]
// 007d04ba  50                   push eax
// 007d04bb  68988ea500           push 0xa58e98
// 007d04c0  8bce                 mov ecx, esi
// 007d04c2  ff1514c89e00         call dword ptr [0x9ec814]
// 007d04c8  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007d04cc  5f                   pop edi
// 007d04cd  5e                   pop esi
// 007d04ce  33cc                 xor ecx, esp
// 007d04d0  e8ff8ffdff           call 0x7a94d4
// 007d04d5  83c464               add esp, 0x64
// 007d04d8  c3                   ret 
// copied from an identical function in another client (function ?__ProcessTime_X@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp