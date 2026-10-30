// from server: 100% by auto
// roc 2007-08 0065ed50  unit: CXTPReportColumn  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065ed50
//
// 0065ed50  8b442404             mov eax, dword ptr [esp + 4]
// 0065ed54  894138               mov dword ptr [ecx + 0x38], eax
// 0065ed57  8b442408             mov eax, dword ptr [esp + 8]
// 0065ed5b  33d2                 xor edx, edx
// 0065ed5d  85c0                 test eax, eax
// 0065ed5f  0f94c2               sete dl
// 0065ed62  894140               mov dword ptr [ecx + 0x40], eax
// 0065ed65  c74128ffffffff       mov dword ptr [ecx + 0x28], 0xffffffff
// 0065ed6c  895144               mov dword ptr [ecx + 0x44], edx
// 0065ed6f  c20800               ret 8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportHeader.cpp (function ?StartDragging@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportHeader.cpp
