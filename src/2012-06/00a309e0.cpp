// roc 2012-06 00a309e0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a309e0
//
// 00a309e0  56                   push esi
// 00a309e1  57                   push edi
// 00a309e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a309e6  8bf1                 mov esi, ecx
// 00a309e8  3bf7                 cmp esi, edi
// 00a309ea  741c                 je 0xa30a08
// 00a309ec  8b4708               mov eax, dword ptr [edi + 8]
// 00a309ef  6aff                 push -1
// 00a309f1  50                   push eax
// 00a309f2  e86978f6ff           call 0x998260
// 00a309f7  8b4f08               mov ecx, dword ptr [edi + 8]
// 00a309fa  8b5704               mov edx, dword ptr [edi + 4]
// 00a309fd  8b4604               mov eax, dword ptr [esi + 4]
// 00a30a00  51                   push ecx
// 00a30a01  52                   push edx
// 00a30a02  50                   push eax
// 00a30a03  e828feffff           call 0xa30830
// 00a30a08  5f                   pop edi
// 00a30a09  5e                   pop esi
// 00a30a0a  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarEventLabel.cpp (function ?Copy@?$CArray@II@@QAEXABV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarEventLabel.cpp
