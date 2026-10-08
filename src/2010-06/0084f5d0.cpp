// roc 2010-06 0084f5d0  unit: CXTPReportPaintManager  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084f5d0
//
// 0084f5d0  8bc1                 mov eax, ecx
// 0084f5d2  83b80802000000       cmp dword ptr [eax + 0x208], 0
// 0084f5d9  7434                 je 0x84f60f
// 0084f5db  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084f5df  85c9                 test ecx, ecx
// 0084f5e1  742c                 je 0x84f60f
// 0084f5e3  8b9014010000         mov edx, dword ptr [eax + 0x114]
// 0084f5e9  83faff               cmp edx, -1
// 0084f5ec  7514                 jne 0x84f602
// 0084f5ee  8b8010010000         mov eax, dword ptr [eax + 0x110]
// 0084f5f4  50                   push eax
// 0084f5f5  8d44240c             lea eax, [esp + 0xc]
// 0084f5f9  50                   push eax
// 0084f5fa  e83f91f5ff           call 0x7a873e
// 0084f5ff  c21400               ret 0x14
// 0084f602  8bc2                 mov eax, edx
// 0084f604  50                   push eax
// 0084f605  8d44240c             lea eax, [esp + 0xc]
// 0084f609  50                   push eax
// 0084f60a  e82f91f5ff           call 0x7a873e
// 0084f60f  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillItemShade@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
