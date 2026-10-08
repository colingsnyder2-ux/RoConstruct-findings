// roc 2010-06 007dc3f0  unit: CXTPReportColumn  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dc3f0
//
// 007dc3f0  8b442404             mov eax, dword ptr [esp + 4]
// 007dc3f4  894138               mov dword ptr [ecx + 0x38], eax
// 007dc3f7  8b442408             mov eax, dword ptr [esp + 8]
// 007dc3fb  33d2                 xor edx, edx
// 007dc3fd  85c0                 test eax, eax
// 007dc3ff  0f94c2               sete dl
// 007dc402  894140               mov dword ptr [ecx + 0x40], eax
// 007dc405  c74128ffffffff       mov dword ptr [ecx + 0x28], 0xffffffff
// 007dc40c  895144               mov dword ptr [ecx + 0x44], edx
// 007dc40f  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?StartDragging@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
