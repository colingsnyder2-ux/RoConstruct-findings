// roc 2009-12 0081cad0  unit: CXTPReportControl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081cad0
//
// 0081cad0  56                   push esi
// 0081cad1  8b742408             mov esi, dword ptr [esp + 8]
// 0081cad5  85f6                 test esi, esi
// 0081cad7  7506                 jne 0x81cadf
// 0081cad9  33c0                 xor eax, eax
// 0081cadb  5e                   pop esi
// 0081cadc  c20400               ret 4
// 0081cadf  8b89e8000000         mov ecx, dword ptr [ecx + 0xe8]
// 0081cae5  56                   push esi
// 0081cae6  e8c5040100           call 0x82cfb0
// 0081caeb  8bc6                 mov eax, esi
// 0081caed  5e                   pop esi
// 0081caee  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?AddRecord@CXTPReportControl@@UAEPAVCXTPReportRecord@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
