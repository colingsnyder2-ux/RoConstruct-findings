// roc 2009-12 008cdfd0  unit: CXTPTabManagerItem  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cdfd0
//
// 008cdfd0  51                   push ecx
// 008cdfd1  8bc1                 mov eax, ecx
// 008cdfd3  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008cdfd6  8b11                 mov edx, dword ptr [ecx]
// 008cdfd8  56                   push esi
// 008cdfd9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008cdfdd  50                   push eax
// 008cdfde  8b420c               mov eax, dword ptr [edx + 0xc]
// 008cdfe1  56                   push esi
// 008cdfe2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008cdfea  ffd0                 call eax
// 008cdfec  8bc6                 mov eax, esi
// 008cdfee  5e                   pop esi
// 008cdfef  59                   pop ecx
// 008cdff0  c20400               ret 4
// copied from an identical function in another client (function ?GetCaption@CXTPTabManagerItem@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabManager.cpp