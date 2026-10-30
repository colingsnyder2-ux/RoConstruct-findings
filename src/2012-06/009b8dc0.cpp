// from server: 100% by auto
// roc 2012-06 009b8dc0  unit: CInstanceRecord  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b8dc0
//
// 009b8dc0  56                   push esi
// 009b8dc1  8bf1                 mov esi, ecx
// 009b8dc3  85f6                 test esi, esi
// 009b8dc5  741c                 je 0x9b8de3
// 009b8dc7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009b8dcb  e850ecfdff           call 0x997a20
// 009b8dd0  85c0                 test eax, eax
// 009b8dd2  7c0f                 jl 0x9b8de3
// 009b8dd4  3b4628               cmp eax, dword ptr [esi + 0x28]
// 009b8dd7  7d0a                 jge 0x9b8de3
// 009b8dd9  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 009b8ddc  8b0481               mov eax, dword ptr [ecx + eax*4]
// 009b8ddf  5e                   pop esi
// 009b8de0  c20400               ret 4
// 009b8de3  33c0                 xor eax, eax
// 009b8de5  5e                   pop esi
// 009b8de6  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportRecord.cpp (function ?GetItem@CXTPReportRecord@@QBEPAVCXTPReportRecordItem@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecord.cpp
