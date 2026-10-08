// roc 2010-06 007d0b40  unit: CXTPReportControl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d0b40
//
// 007d0b40  56                   push esi
// 007d0b41  8b742408             mov esi, dword ptr [esp + 8]
// 007d0b45  85f6                 test esi, esi
// 007d0b47  7506                 jne 0x7d0b4f
// 007d0b49  33c0                 xor eax, eax
// 007d0b4b  5e                   pop esi
// 007d0b4c  c20400               ret 4
// 007d0b4f  8b89e8000000         mov ecx, dword ptr [ecx + 0xe8]
// 007d0b55  56                   push esi
// 007d0b56  e8d5040100           call 0x7e1030
// 007d0b5b  8bc6                 mov eax, esi
// 007d0b5d  5e                   pop esi
// 007d0b5e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?AddRecord@CXTPReportControl@@UAEPAVCXTPReportRecord@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
