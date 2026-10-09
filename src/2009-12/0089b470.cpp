// roc 2009-12 0089b470  unit: CXTPReportPaintManager  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089b470
//
// 0089b470  8bc1                 mov eax, ecx
// 0089b472  83b80802000000       cmp dword ptr [eax + 0x208], 0
// 0089b479  7434                 je 0x89b4af
// 0089b47b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0089b47f  85c9                 test ecx, ecx
// 0089b481  742c                 je 0x89b4af
// 0089b483  8b9014010000         mov edx, dword ptr [eax + 0x114]
// 0089b489  83faff               cmp edx, -1
// 0089b48c  7514                 jne 0x89b4a2
// 0089b48e  8b8010010000         mov eax, dword ptr [eax + 0x110]
// 0089b494  50                   push eax
// 0089b495  8d44240c             lea eax, [esp + 0xc]
// 0089b499  50                   push eax
// 0089b49a  e85f91f5ff           call 0x7f45fe
// 0089b49f  c21400               ret 0x14
// 0089b4a2  8bc2                 mov eax, edx
// 0089b4a4  50                   push eax
// 0089b4a5  8d44240c             lea eax, [esp + 0xc]
// 0089b4a9  50                   push eax
// 0089b4aa  e84f91f5ff           call 0x7f45fe
// 0089b4af  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillItemShade@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
