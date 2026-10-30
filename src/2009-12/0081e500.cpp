// roc 2009-12 0081e500  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e500
//
// 0081e500  8b442404             mov eax, dword ptr [esp + 4]
// 0081e504  8b542408             mov edx, dword ptr [esp + 8]
// 0081e508  89413c               mov dword ptr [ecx + 0x3c], eax
// 0081e50b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081e50f  895140               mov dword ptr [ecx + 0x40], edx
// 0081e512  8b542410             mov edx, dword ptr [esp + 0x10]
// 0081e516  894144               mov dword ptr [ecx + 0x44], eax
// 0081e519  895148               mov dword ptr [ecx + 0x48], edx
// 0081e51c  c21000               ret 0x10
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?SetCollapseRect@CXTPReportRow@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
