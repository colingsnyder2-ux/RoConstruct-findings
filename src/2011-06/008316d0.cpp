// roc 2011-06 008316d0  unit: CXTPReportControl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008316d0
//
// 008316d0  8b8130020000         mov eax, dword ptr [ecx + 0x230]
// 008316d6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008316da  50                   push eax
// 008316db  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008316df  52                   push edx
// 008316e0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008316e4  51                   push ecx
// 008316e5  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 008316eb  50                   push eax
// 008316ec  52                   push edx
// 008316ed  e82ef80700           call 0x8b0f20
// 008316f2  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?DrawFixedRecordsDivider@CXTPReportControl@@IAEXPAVCDC@@AAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
