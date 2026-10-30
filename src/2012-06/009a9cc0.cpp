// roc 2012-06 009a9cc0  unit: CXTPReportControl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a9cc0
//
// 009a9cc0  8b8130020000         mov eax, dword ptr [ecx + 0x230]
// 009a9cc6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009a9cca  50                   push eax
// 009a9ccb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009a9ccf  52                   push edx
// 009a9cd0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009a9cd4  51                   push ecx
// 009a9cd5  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 009a9cdb  50                   push eax
// 009a9cdc  52                   push edx
// 009a9cdd  e8bef60700           call 0xa293a0
// 009a9ce2  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?DrawFixedRecordsDivider@CXTPReportControl@@IAEXPAVCDC@@AAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
