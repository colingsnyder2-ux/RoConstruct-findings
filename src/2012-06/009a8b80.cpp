// roc 2012-06 009a8b80  unit: CXTPReportColumn  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8b80
//
// 009a8b80  83ec64               sub esp, 0x64
// 009a8b83  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009a8b88  33c4                 xor eax, esp
// 009a8b8a  89442460             mov dword ptr [esp + 0x60], eax
// 009a8b8e  56                   push esi
// 009a8b8f  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 009a8b93  57                   push edi
// 009a8b94  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 009a8b98  6a00                 push 0
// 009a8b9a  6810ffc000           push 0xc0ff10
// 009a8b9f  8bce                 mov ecx, esi
// 009a8ba1  ff154c49b200         call dword ptr [0xb2494c]
// 009a8ba7  85c0                 test eax, eax
// 009a8ba9  7c3d                 jl 0x9a8be8
// 009a8bab  6a60                 push 0x60
// 009a8bad  8d44240c             lea eax, [esp + 0xc]
// 009a8bb1  6a00                 push 0
// 009a8bb3  50                   push eax
// 009a8bb4  e8bba7fdff           call 0x983374
// 009a8bb9  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 009a8bc0  83c40c               add esp, 0xc
// 009a8bc3  6a60                 push 0x60
// 009a8bc5  8d4c240c             lea ecx, [esp + 0xc]
// 009a8bc9  51                   push ecx
// 009a8bca  6a00                 push 0
// 009a8bcc  57                   push edi
// 009a8bcd  6a00                 push 0
// 009a8bcf  52                   push edx
// 009a8bd0  ff155423b200         call dword ptr [0xb22354]
// 009a8bd6  8d442408             lea eax, [esp + 8]
// 009a8bda  50                   push eax
// 009a8bdb  6810ffc000           push 0xc0ff10
// 009a8be0  8bce                 mov ecx, esi
// 009a8be2  ff15983fb200         call dword ptr [0xb23f98]
// 009a8be8  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 009a8bec  5f                   pop edi
// 009a8bed  5e                   pop esi
// 009a8bee  33cc                 xor ecx, esp
// 009a8bf0  e842aefdff           call 0x983a37
// 009a8bf5  83c464               add esp, 0x64
// 009a8bf8  c3                   ret 
// copied from an identical function in another client (function ?__ProcessTime_X@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp