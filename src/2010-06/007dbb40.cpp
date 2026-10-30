// roc 2010-06 007dbb40  unit: CXTPReportControl  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbb40
//
// 007dbb40  8b442404             mov eax, dword ptr [esp + 4]
// 007dbb44  8b516c               mov edx, dword ptr [ecx + 0x6c]
// 007dbb47  8910                 mov dword ptr [eax], edx
// 007dbb49  8b5170               mov edx, dword ptr [ecx + 0x70]
// 007dbb4c  895004               mov dword ptr [eax + 4], edx
// 007dbb4f  8b5174               mov edx, dword ptr [ecx + 0x74]
// 007dbb52  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 007dbb55  895008               mov dword ptr [eax + 8], edx
// 007dbb58  89480c               mov dword ptr [eax + 0xc], ecx
// 007dbb5b  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetRect@CXTPReportColumn@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
