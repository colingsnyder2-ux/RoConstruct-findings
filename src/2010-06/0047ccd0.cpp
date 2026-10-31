// roc 2010-06 0047ccd0  unit: VCContent::?$CComObject  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047ccd0
//
// 0047ccd0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047ccd4  834108ff             add dword ptr [ecx + 8], -1
// 0047ccd8  56                   push esi
// 0047ccd9  8b7108               mov esi, dword ptr [ecx + 8]
// 0047ccdc  750d                 jne 0x47cceb
// 0047ccde  85c9                 test ecx, ecx
// 0047cce0  7409                 je 0x47cceb
// 0047cce2  8b01                 mov eax, dword ptr [ecx]
// 0047cce4  8b5010               mov edx, dword ptr [eax + 0x10]
// 0047cce7  6a01                 push 1
// 0047cce9  ffd2                 call edx
// 0047cceb  8bc6                 mov eax, esi
// 0047cced  5e                   pop esi
// 0047ccee  c20400               ret 4
// copied from an identical function in another client (function ?Release@?$CComObject@VCContent@@@ATL@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_contentinterface6da1be04c6837004.cpp