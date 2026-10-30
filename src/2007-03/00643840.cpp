// roc 2007-03 00643840  unit: seg_00640000  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00643840
//
// 00643840  83ec64               sub esp, 0x64
// 00643843  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00643848  33c4                 xor eax, esp
// 0064384a  89442460             mov dword ptr [esp + 0x60], eax
// 0064384e  56                   push esi
// 0064384f  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00643853  57                   push edi
// 00643854  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 00643858  6a00                 push 0
// 0064385a  68d8577c00           push 0x7c57d8
// 0064385f  8bce                 mov ecx, esi
// 00643861  ff1580e27700         call dword ptr [0x77e280]
// 00643867  85c0                 test eax, eax
// 00643869  7c3d                 jl 0x6438a8
// 0064386b  6a60                 push 0x60
// 0064386d  8d44240c             lea eax, [esp + 0xc]
// 00643871  6a00                 push 0
// 00643873  50                   push eax
// 00643874  e8a3b7fdff           call 0x61f01c
// 00643879  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00643880  83c40c               add esp, 0xc
// 00643883  6a60                 push 0x60
// 00643885  8d4c240c             lea ecx, [esp + 0xc]
// 00643889  51                   push ecx
// 0064388a  6a00                 push 0
// 0064388c  57                   push edi
// 0064388d  6a00                 push 0
// 0064388f  52                   push edx
// 00643890  ff15e8d27700         call dword ptr [0x77d2e8]
// 00643896  8d442408             lea eax, [esp + 8]
// 0064389a  50                   push eax
// 0064389b  68d8577c00           push 0x7c57d8
// 006438a0  8bce                 mov ecx, esi
// 006438a2  ff1598e27700         call dword ptr [0x77e298]
// 006438a8  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 006438ac  5f                   pop edi
// 006438ad  5e                   pop esi
// 006438ae  33cc                 xor ecx, esp
// 006438b0  e8f1b5fdff           call 0x61eea6
// 006438b5  83c464               add esp, 0x64
// 006438b8  c3                   ret 
// copied from an identical function in another client (function ?__ProcessTime_X@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp