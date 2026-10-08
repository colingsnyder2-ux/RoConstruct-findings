// roc 2012-06 00a24bb0  unit: CXTPReportPaintManager  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a24bb0
//
// 00a24bb0  8bc1                 mov eax, ecx
// 00a24bb2  83b80802000000       cmp dword ptr [eax + 0x208], 0
// 00a24bb9  7434                 je 0xa24bef
// 00a24bbb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a24bbf  85c9                 test ecx, ecx
// 00a24bc1  742c                 je 0xa24bef
// 00a24bc3  8b9014010000         mov edx, dword ptr [eax + 0x114]
// 00a24bc9  83faff               cmp edx, -1
// 00a24bcc  7514                 jne 0xa24be2
// 00a24bce  8b8010010000         mov eax, dword ptr [eax + 0x110]
// 00a24bd4  50                   push eax
// 00a24bd5  8d44240c             lea eax, [esp + 0xc]
// 00a24bd9  50                   push eax
// 00a24bda  e8cde2f5ff           call 0x982eac
// 00a24bdf  c21400               ret 0x14
// 00a24be2  8bc2                 mov eax, edx
// 00a24be4  50                   push eax
// 00a24be5  8d44240c             lea eax, [esp + 0xc]
// 00a24be9  50                   push eax
// 00a24bea  e8bde2f5ff           call 0x982eac
// 00a24bef  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillItemShade@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
