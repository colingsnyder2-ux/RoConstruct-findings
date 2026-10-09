// roc 2009-12 00827ad0  unit: CXTPReportControl  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827ad0
//
// 00827ad0  8b442404             mov eax, dword ptr [esp + 4]
// 00827ad4  8b516c               mov edx, dword ptr [ecx + 0x6c]
// 00827ad7  8910                 mov dword ptr [eax], edx
// 00827ad9  8b5170               mov edx, dword ptr [ecx + 0x70]
// 00827adc  895004               mov dword ptr [eax + 4], edx
// 00827adf  8b5174               mov edx, dword ptr [ecx + 0x74]
// 00827ae2  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 00827ae5  895008               mov dword ptr [eax + 8], edx
// 00827ae8  89480c               mov dword ptr [eax + 0xc], ecx
// 00827aeb  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetRect@CXTPReportColumn@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
