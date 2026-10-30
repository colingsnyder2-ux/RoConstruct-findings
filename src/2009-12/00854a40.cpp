// roc 2009-12 00854a40  unit: CXTPTabClientWnd::CWorkspace  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854a40
//
// 00854a40  51                   push ecx
// 00854a41  8b8990000000         mov ecx, dword ptr [ecx + 0x90]
// 00854a47  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00854a4b  8b01                 mov eax, dword ptr [ecx]
// 00854a4d  8b8068010000         mov eax, dword ptr [eax + 0x168]
// 00854a53  56                   push esi
// 00854a54  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00854a58  52                   push edx
// 00854a59  56                   push esi
// 00854a5a  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00854a62  ffd0                 call eax
// 00854a64  8bc6                 mov eax, esi
// 00854a66  5e                   pop esi
// 00854a67  59                   pop ecx
// 00854a68  c20800               ret 8
// copied from an identical function in another client (function ?GetItemTooltip@CWorkspace@CXTPTabClientWnd@@MBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBVCXTPTabManagerItem@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp