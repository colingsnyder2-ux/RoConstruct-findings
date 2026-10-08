// roc 2012-06 009b4280  unit: CXTPReportControl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b4280
//
// 009b4280  8b442404             mov eax, dword ptr [esp + 4]
// 009b4284  894138               mov dword ptr [ecx + 0x38], eax
// 009b4287  8b442408             mov eax, dword ptr [esp + 8]
// 009b428b  33d2                 xor edx, edx
// 009b428d  85c0                 test eax, eax
// 009b428f  0f94c2               sete dl
// 009b4292  894140               mov dword ptr [ecx + 0x40], eax
// 009b4295  c74128ffffffff       mov dword ptr [ecx + 0x28], 0xffffffff
// 009b429c  895144               mov dword ptr [ecx + 0x44], edx
// 009b429f  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?StartDragging@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
