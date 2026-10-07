// roc 2008-06 006c9620  unit: CXTPReportControl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c9620
//
// 006c9620  56                   push esi
// 006c9621  8b742408             mov esi, dword ptr [esp + 8]
// 006c9625  85f6                 test esi, esi
// 006c9627  7506                 jne 0x6c962f
// 006c9629  33c0                 xor eax, eax
// 006c962b  5e                   pop esi
// 006c962c  c20400               ret 4
// 006c962f  8b89e8000000         mov ecx, dword ptr [ecx + 0xe8]
// 006c9635  56                   push esi
// 006c9636  e865e60000           call 0x6d7ca0
// 006c963b  8bc6                 mov eax, esi
// 006c963d  5e                   pop esi
// 006c963e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?AddRecord@CXTPReportControl@@UAEPAVCXTPReportRecord@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
