// roc 2009-06 0074cce0  unit: CXTPReportControl  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074cce0
//
// 0074cce0  8b442404             mov eax, dword ptr [esp + 4]
// 0074cce4  8b516c               mov edx, dword ptr [ecx + 0x6c]
// 0074cce7  8910                 mov dword ptr [eax], edx
// 0074cce9  8b5170               mov edx, dword ptr [ecx + 0x70]
// 0074ccec  895004               mov dword ptr [eax + 4], edx
// 0074ccef  8b5174               mov edx, dword ptr [ecx + 0x74]
// 0074ccf2  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 0074ccf5  895008               mov dword ptr [eax + 8], edx
// 0074ccf8  89480c               mov dword ptr [eax + 0xc], ecx
// 0074ccfb  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetRect@CXTPReportColumn@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
