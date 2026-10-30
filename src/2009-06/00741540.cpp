// roc 2009-06 00741540  unit: CXTPReportRecordItemEditOptions  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00741540
//
// 00741540  83ec64               sub esp, 0x64
// 00741543  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00741548  33c4                 xor eax, esp
// 0074154a  89442460             mov dword ptr [esp + 0x60], eax
// 0074154e  56                   push esi
// 0074154f  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00741553  57                   push edi
// 00741554  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 00741558  6a00                 push 0
// 0074155a  6804478f00           push 0x8f4704
// 0074155f  8bce                 mov ecx, esi
// 00741561  ff15bcfe8900         call dword ptr [0x89febc]
// 00741567  85c0                 test eax, eax
// 00741569  7c3d                 jl 0x7415a8
// 0074156b  6a60                 push 0x60
// 0074156d  8d44240c             lea eax, [esp + 0xc]
// 00741571  6a00                 push 0
// 00741573  50                   push eax
// 00741574  e8fb86fdff           call 0x719c74
// 00741579  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00741580  83c40c               add esp, 0xc
// 00741583  6a60                 push 0x60
// 00741585  8d4c240c             lea ecx, [esp + 0xc]
// 00741589  51                   push ecx
// 0074158a  6a00                 push 0
// 0074158c  57                   push edi
// 0074158d  6a00                 push 0
// 0074158f  52                   push edx
// 00741590  ff1560e38900         call dword ptr [0x89e360]
// 00741596  8d442408             lea eax, [esp + 8]
// 0074159a  50                   push eax
// 0074159b  6804478f00           push 0x8f4704
// 007415a0  8bce                 mov ecx, esi
// 007415a2  ff15a4fe8900         call dword ptr [0x89fea4]
// 007415a8  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007415ac  5f                   pop edi
// 007415ad  5e                   pop esi
// 007415ae  33cc                 xor ecx, esp
// 007415b0  e8c58ffdff           call 0x71a57a
// 007415b5  83c464               add esp, 0x64
// 007415b8  c3                   ret 
// copied from an identical function in another client (function ?__ProcessTime_X@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp