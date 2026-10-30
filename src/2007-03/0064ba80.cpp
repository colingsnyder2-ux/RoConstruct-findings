// from server: 100% by tester
// roc 2008-06 006d56d0  unit: CXTPReportHeader  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d56d0
//
// 006d56d0  8b542404             mov edx, dword ptr [esp + 4]
// 006d56d4  56                   push esi
// 006d56d5  8bf1                 mov esi, ecx
// 006d56d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d56db  8b06                 mov eax, dword ptr [esi]
// 006d56dd  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 006d56e3  51                   push ecx
// 006d56e4  52                   push edx
// 006d56e5  8bce                 mov ecx, esi
// 006d56e7  ffd0                 call eax
// 006d56e9  85c0                 test eax, eax
// 006d56eb  7c16                 jl 0x6d5703
// 006d56ed  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006d56f0  85c9                 test ecx, ecx
// 006d56f2  740f                 je 0x6d5703
// 006d56f4  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 006d56f7  7d0a                 jge 0x6d5703
// 006d56f9  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 006d56fc  8b0481               mov eax, dword ptr [ecx + eax*4]
// 006d56ff  5e                   pop esi
// 006d5700  c20800               ret 8
// 006d5703  33c0                 xor eax, eax
// 006d5705  5e                   pop esi
// 006d5706  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportHeader.cpp (function ?HitTest@CXTPReportHeader@@UBEPAVCXTPReportColumn@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHeader.cpp
