// from server: 100% by auto
// roc 2008-06 006d4e40  unit: CXTPReportColumn  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4e40
//
// 006d4e40  8b442404             mov eax, dword ptr [esp + 4]
// 006d4e44  894138               mov dword ptr [ecx + 0x38], eax
// 006d4e47  8b442408             mov eax, dword ptr [esp + 8]
// 006d4e4b  33d2                 xor edx, edx
// 006d4e4d  85c0                 test eax, eax
// 006d4e4f  0f94c2               sete dl
// 006d4e52  894140               mov dword ptr [ecx + 0x40], eax
// 006d4e55  c74128ffffffff       mov dword ptr [ecx + 0x28], 0xffffffff
// 006d4e5c  895144               mov dword ptr [ecx + 0x44], edx
// 006d4e5f  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?StartDragging@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
