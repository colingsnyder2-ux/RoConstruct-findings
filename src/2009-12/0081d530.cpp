// roc 2009-12 0081d530  unit: CXTPReportControl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081d530
//
// 0081d530  8b8130020000         mov eax, dword ptr [ecx + 0x230]
// 0081d536  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0081d53a  50                   push eax
// 0081d53b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081d53f  52                   push edx
// 0081d540  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0081d544  51                   push ecx
// 0081d545  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0081d54b  50                   push eax
// 0081d54c  52                   push edx
// 0081d54d  e80e270800           call 0x89fc60
// 0081d552  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?DrawFixedRecordsDivider@CXTPReportControl@@IAEXPAVCDC@@AAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
