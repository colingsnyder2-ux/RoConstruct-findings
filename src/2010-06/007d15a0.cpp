// roc 2010-06 007d15a0  unit: CXTPReportControl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d15a0
//
// 007d15a0  8b8130020000         mov eax, dword ptr [ecx + 0x230]
// 007d15a6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007d15aa  50                   push eax
// 007d15ab  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007d15af  52                   push edx
// 007d15b0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007d15b4  51                   push ecx
// 007d15b5  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007d15bb  50                   push eax
// 007d15bc  52                   push edx
// 007d15bd  e8fe270800           call 0x853dc0
// 007d15c2  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?DrawFixedRecordsDivider@CXTPReportControl@@IAEXPAVCDC@@AAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
