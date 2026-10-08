// roc 2011-06 0083bc70  unit: CXTPReportControl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083bc70
//
// 0083bc70  8b442404             mov eax, dword ptr [esp + 4]
// 0083bc74  894138               mov dword ptr [ecx + 0x38], eax
// 0083bc77  8b442408             mov eax, dword ptr [esp + 8]
// 0083bc7b  33d2                 xor edx, edx
// 0083bc7d  85c0                 test eax, eax
// 0083bc7f  0f94c2               sete dl
// 0083bc82  894140               mov dword ptr [ecx + 0x40], eax
// 0083bc85  c74128ffffffff       mov dword ptr [ecx + 0x28], 0xffffffff
// 0083bc8c  895144               mov dword ptr [ecx + 0x44], edx
// 0083bc8f  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?StartDragging@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
