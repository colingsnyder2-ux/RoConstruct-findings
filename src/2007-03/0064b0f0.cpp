// roc 2007-03 0064b0f0  unit: seg_00640000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064b0f0
//
// 0064b0f0  8b442404             mov eax, dword ptr [esp + 4]
// 0064b0f4  894138               mov dword ptr [ecx + 0x38], eax
// 0064b0f7  8b442408             mov eax, dword ptr [esp + 8]
// 0064b0fb  33d2                 xor edx, edx
// 0064b0fd  85c0                 test eax, eax
// 0064b0ff  0f94c2               sete dl
// 0064b102  894140               mov dword ptr [ecx + 0x40], eax
// 0064b105  c74128ffffffff       mov dword ptr [ecx + 0x28], 0xffffffff
// 0064b10c  895144               mov dword ptr [ecx + 0x44], edx
// 0064b10f  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?StartDragging@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
