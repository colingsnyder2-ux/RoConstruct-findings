// roc 2009-12 0081c350  unit: CXTPReportRecordItemEditOptions  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081c350
//
// 0081c350  83ec6c               sub esp, 0x6c
// 0081c353  a10052b600           mov eax, dword ptr [0xb65200]
// 0081c358  33c4                 xor eax, esp
// 0081c35a  89442468             mov dword ptr [esp + 0x68], eax
// 0081c35e  53                   push ebx
// 0081c35f  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 0081c363  55                   push ebp
// 0081c364  8b6c247c             mov ebp, dword ptr [esp + 0x7c]
// 0081c368  56                   push esi
// 0081c369  57                   push edi
// 0081c36a  c7442410342d9c00     mov dword ptr [esp + 0x10], 0x9c2d34
// 0081c372  c7442414a44b9f00     mov dword ptr [esp + 0x14], 0x9f4ba4
// 0081c37a  33f6                 xor esi, esi
// 0081c37c  8d642400             lea esp, [esp]
// 0081c380  8b7cb410             mov edi, dword ptr [esp + esi*4 + 0x10]
// 0081c384  6a00                 push 0
// 0081c386  57                   push edi
// 0081c387  8bcb                 mov ecx, ebx
// 0081c389  ff1500d89800         call dword ptr [0x98d800]
// 0081c38f  85c0                 test eax, eax
// 0081c391  7c40                 jl 0x81c3d3
// 0081c393  6a60                 push 0x60
// 0081c395  8d44241c             lea eax, [esp + 0x1c]
// 0081c399  6a00                 push 0
// 0081c39b  50                   push eax
// 0081c39c  e80387fdff           call 0x7f4aa4
// 0081c3a1  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 0081c3a8  83c40c               add esp, 0xc
// 0081c3ab  33d2                 xor edx, edx
// 0081c3ad  6a60                 push 0x60
// 0081c3af  85f6                 test esi, esi
// 0081c3b1  0f95c2               setne dl
// 0081c3b4  8d4c241c             lea ecx, [esp + 0x1c]
// 0081c3b8  51                   push ecx
// 0081c3b9  6a00                 push 0
// 0081c3bb  55                   push ebp
// 0081c3bc  42                   inc edx
// 0081c3bd  52                   push edx
// 0081c3be  50                   push eax
// 0081c3bf  ff1520b39800         call dword ptr [0x98b320]
// 0081c3c5  8d4c2418             lea ecx, [esp + 0x18]
// 0081c3c9  51                   push ecx
// 0081c3ca  57                   push edi
// 0081c3cb  8bcb                 mov ecx, ebx
// 0081c3cd  ff1518d89800         call dword ptr [0x98d818]
// 0081c3d3  46                   inc esi
// 0081c3d4  83fe02               cmp esi, 2
// 0081c3d7  7ca7                 jl 0x81c380
// 0081c3d9  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0081c3dd  5f                   pop edi
// 0081c3de  5e                   pop esi
// 0081c3df  5d                   pop ebp
// 0081c3e0  5b                   pop ebx
// 0081c3e1  33cc                 xor ecx, esp
// 0081c3e3  e8b28ffdff           call 0x7f539a
// 0081c3e8  83c46c               add esp, 0x6c
// 0081c3eb  c3                   ret 
// copied from an identical function in another client (function ?__ProcessDate_x@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp