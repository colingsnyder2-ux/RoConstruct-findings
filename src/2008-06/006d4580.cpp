// from server: 100% by auto
// roc 2008-06 006d4580  unit: CXTPReportControl  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4580
//
// 006d4580  8b442404             mov eax, dword ptr [esp + 4]
// 006d4584  8b516c               mov edx, dword ptr [ecx + 0x6c]
// 006d4587  8910                 mov dword ptr [eax], edx
// 006d4589  8b5170               mov edx, dword ptr [ecx + 0x70]
// 006d458c  895004               mov dword ptr [eax + 4], edx
// 006d458f  8b5174               mov edx, dword ptr [ecx + 0x74]
// 006d4592  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 006d4595  895008               mov dword ptr [eax + 8], edx
// 006d4598  89480c               mov dword ptr [eax + 0xc], ecx
// 006d459b  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetRect@CXTPReportColumn@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
