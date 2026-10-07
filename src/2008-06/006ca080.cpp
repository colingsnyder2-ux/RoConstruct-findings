// roc 2008-06 006ca080  unit: CXTPReportControl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ca080
//
// 006ca080  8b8130020000         mov eax, dword ptr [ecx + 0x230]
// 006ca086  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006ca08a  50                   push eax
// 006ca08b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ca08f  52                   push edx
// 006ca090  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006ca094  51                   push ecx
// 006ca095  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 006ca09b  50                   push eax
// 006ca09c  52                   push edx
// 006ca09d  e8be1a0800           call 0x74bb60
// 006ca0a2  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?DrawFixedRecordsDivider@CXTPReportControl@@IAEXPAVCDC@@AAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
