// roc 2012-06 009a9260  unit: CXTPReportControl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a9260
//
// 009a9260  56                   push esi
// 009a9261  8b742408             mov esi, dword ptr [esp + 8]
// 009a9265  85f6                 test esi, esi
// 009a9267  7506                 jne 0x9a926f
// 009a9269  33c0                 xor eax, eax
// 009a926b  5e                   pop esi
// 009a926c  c20400               ret 4
// 009a926f  8b89e8000000         mov ecx, dword ptr [ecx + 0xe8]
// 009a9275  56                   push esi
// 009a9276  e8851d0100           call 0x9bb000
// 009a927b  8bc6                 mov eax, esi
// 009a927d  5e                   pop esi
// 009a927e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?AddRecord@CXTPReportControl@@UAEPAVCXTPReportRecord@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
