// roc 2009-06 0074d5b0  unit: CXTPReportColumn  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074d5b0
//
// 0074d5b0  8b442404             mov eax, dword ptr [esp + 4]
// 0074d5b4  894138               mov dword ptr [ecx + 0x38], eax
// 0074d5b7  8b442408             mov eax, dword ptr [esp + 8]
// 0074d5bb  33d2                 xor edx, edx
// 0074d5bd  85c0                 test eax, eax
// 0074d5bf  0f94c2               sete dl
// 0074d5c2  894140               mov dword ptr [ecx + 0x40], eax
// 0074d5c5  c74128ffffffff       mov dword ptr [ecx + 0x28], 0xffffffff
// 0074d5cc  895144               mov dword ptr [ecx + 0x44], edx
// 0074d5cf  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?StartDragging@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
