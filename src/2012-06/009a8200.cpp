// roc 2012-06 009a8200  unit: CXTPReportView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8200
//
// 009a8200  8b442404             mov eax, dword ptr [esp + 4]
// 009a8204  8b516c               mov edx, dword ptr [ecx + 0x6c]
// 009a8207  8910                 mov dword ptr [eax], edx
// 009a8209  8b5170               mov edx, dword ptr [ecx + 0x70]
// 009a820c  895004               mov dword ptr [eax + 4], edx
// 009a820f  8b5174               mov edx, dword ptr [ecx + 0x74]
// 009a8212  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 009a8215  895008               mov dword ptr [eax + 8], edx
// 009a8218  89480c               mov dword ptr [eax + 0xc], ecx
// 009a821b  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetRect@CXTPReportColumn@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
