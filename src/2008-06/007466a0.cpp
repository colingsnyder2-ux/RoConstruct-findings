// roc 2008-06 007466a0  unit: CXTPReportPaintManager  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007466a0
//
// 007466a0  56                   push esi
// 007466a1  8bf1                 mov esi, ecx
// 007466a3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007466a7  8b01                 mov eax, dword ptr [ecx]
// 007466a9  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 007466af  ffd2                 call edx
// 007466b1  85c0                 test eax, eax
// 007466b3  7513                 jne 0x7466c8
// 007466b5  3986b8020000         cmp dword ptr [esi + 0x2b8], eax
// 007466bb  0f95c0               setne al
// 007466be  038660020000         add eax, dword ptr [esi + 0x260]
// 007466c4  5e                   pop esi
// 007466c5  c20800               ret 8
// 007466c8  83be0402000000       cmp dword ptr [esi + 0x204], 0
// 007466cf  8b8660020000         mov eax, dword ptr [esi + 0x260]
// 007466d5  7407                 je 0x7466de
// 007466d7  83c006               add eax, 6
// 007466da  5e                   pop esi
// 007466db  c20800               ret 8
// 007466de  83c010               add eax, 0x10
// 007466e1  5e                   pop esi
// 007466e2  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportPaintManager.cpp (function ?GetRowHeight@CXTPReportPaintManager@@UAEHPAVCDC@@PAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp
