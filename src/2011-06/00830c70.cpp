// roc 2011-06 00830c70  unit: CXTPReportControl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00830c70
//
// 00830c70  56                   push esi
// 00830c71  8b742408             mov esi, dword ptr [esp + 8]
// 00830c75  85f6                 test esi, esi
// 00830c77  7506                 jne 0x830c7f
// 00830c79  33c0                 xor eax, eax
// 00830c7b  5e                   pop esi
// 00830c7c  c20400               ret 4
// 00830c7f  8b89e8000000         mov ecx, dword ptr [ecx + 0xe8]
// 00830c85  56                   push esi
// 00830c86  e8e51f0100           call 0x842c70
// 00830c8b  8bc6                 mov eax, esi
// 00830c8d  5e                   pop esi
// 00830c8e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?AddRecord@CXTPReportControl@@UAEPAVCXTPReportRecord@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
