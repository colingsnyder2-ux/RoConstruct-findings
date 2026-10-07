// roc 2008-06 00747370  unit: CXTPReportPaintManager  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00747370
//
// 00747370  8bc1                 mov eax, ecx
// 00747372  83b80802000000       cmp dword ptr [eax + 0x208], 0
// 00747379  7434                 je 0x7473af
// 0074737b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0074737f  85c9                 test ecx, ecx
// 00747381  742c                 je 0x7473af
// 00747383  8b9014010000         mov edx, dword ptr [eax + 0x114]
// 00747389  83faff               cmp edx, -1
// 0074738c  7514                 jne 0x7473a2
// 0074738e  8b8010010000         mov eax, dword ptr [eax + 0x110]
// 00747394  50                   push eax
// 00747395  8d44240c             lea eax, [esp + 0xc]
// 00747399  50                   push eax
// 0074739a  e8bf9ff5ff           call 0x6a135e
// 0074739f  c21400               ret 0x14
// 007473a2  8bc2                 mov eax, edx
// 007473a4  50                   push eax
// 007473a5  8d44240c             lea eax, [esp + 0xc]
// 007473a9  50                   push eax
// 007473aa  e8af9ff5ff           call 0x6a135e
// 007473af  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillItemShade@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
