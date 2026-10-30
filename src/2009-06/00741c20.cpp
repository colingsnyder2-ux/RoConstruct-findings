// roc 2009-06 00741c20  unit: CXTPReportControl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00741c20
//
// 00741c20  56                   push esi
// 00741c21  8b742408             mov esi, dword ptr [esp + 8]
// 00741c25  85f6                 test esi, esi
// 00741c27  7506                 jne 0x741c2f
// 00741c29  33c0                 xor eax, eax
// 00741c2b  5e                   pop esi
// 00741c2c  c20400               ret 4
// 00741c2f  8b89e8000000         mov ecx, dword ptr [ecx + 0xe8]
// 00741c35  56                   push esi
// 00741c36  e805060100           call 0x752240
// 00741c3b  8bc6                 mov eax, esi
// 00741c3d  5e                   pop esi
// 00741c3e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?AddRecord@CXTPReportControl@@UAEPAVCXTPReportRecord@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
