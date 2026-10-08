// roc 2009-06 00742680  unit: CXTPReportControl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00742680
//
// 00742680  8b8130020000         mov eax, dword ptr [ecx + 0x230]
// 00742686  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0074268a  50                   push eax
// 0074268b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0074268f  52                   push edx
// 00742690  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00742694  51                   push ecx
// 00742695  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0074269b  50                   push eax
// 0074269c  52                   push edx
// 0074269d  e8be270800           call 0x7c4e60
// 007426a2  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?DrawFixedRecordsDivider@CXTPReportControl@@IAEXPAVCDC@@AAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
