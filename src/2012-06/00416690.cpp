// roc 2012-06 00416690  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00416690
//
// 00416690  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00416694  834108ff             add dword ptr [ecx + 8], -1
// 00416698  56                   push esi
// 00416699  8b7108               mov esi, dword ptr [ecx + 8]
// 0041669c  750d                 jne 0x4166ab
// 0041669e  85c9                 test ecx, ecx
// 004166a0  7409                 je 0x4166ab
// 004166a2  8b01                 mov eax, dword ptr [ecx]
// 004166a4  8b5010               mov edx, dword ptr [eax + 0x10]
// 004166a7  6a01                 push 1
// 004166a9  ffd2                 call edx
// 004166ab  8bc6                 mov eax, esi
// 004166ad  5e                   pop esi
// 004166ae  c20400               ret 4
// copied from an identical function in another client (function ?Release@?$CComObject@VCContent@@@ATL@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentinterface6da1be04c6837004.cpp