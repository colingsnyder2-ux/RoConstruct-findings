// roc 2009-12 00828370  unit: CXTPReportColumn  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00828370
//
// 00828370  8b442404             mov eax, dword ptr [esp + 4]
// 00828374  894138               mov dword ptr [ecx + 0x38], eax
// 00828377  8b442408             mov eax, dword ptr [esp + 8]
// 0082837b  33d2                 xor edx, edx
// 0082837d  85c0                 test eax, eax
// 0082837f  0f94c2               sete dl
// 00828382  894140               mov dword ptr [ecx + 0x40], eax
// 00828385  c74128ffffffff       mov dword ptr [ecx + 0x28], 0xffffffff
// 0082838c  895144               mov dword ptr [ecx + 0x44], edx
// 0082838f  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?StartDragging@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
