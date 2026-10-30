// roc 2009-12 0089a7a0  unit: CXTPReportPaintManager  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089a7a0
//
// 0089a7a0  56                   push esi
// 0089a7a1  8bf1                 mov esi, ecx
// 0089a7a3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089a7a7  8b01                 mov eax, dword ptr [ecx]
// 0089a7a9  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 0089a7af  ffd2                 call edx
// 0089a7b1  85c0                 test eax, eax
// 0089a7b3  7513                 jne 0x89a7c8
// 0089a7b5  3986b8020000         cmp dword ptr [esi + 0x2b8], eax
// 0089a7bb  0f95c0               setne al
// 0089a7be  038660020000         add eax, dword ptr [esi + 0x260]
// 0089a7c4  5e                   pop esi
// 0089a7c5  c20800               ret 8
// 0089a7c8  83be0402000000       cmp dword ptr [esi + 0x204], 0
// 0089a7cf  8b8660020000         mov eax, dword ptr [esi + 0x260]
// 0089a7d5  7407                 je 0x89a7de
// 0089a7d7  83c006               add eax, 6
// 0089a7da  5e                   pop esi
// 0089a7db  c20800               ret 8
// 0089a7de  83c010               add eax, 0x10
// 0089a7e1  5e                   pop esi
// 0089a7e2  c20800               ret 8
// copied from an identical function in another client (function ?GetRowHeight@CXTPReportPaintManager@@UAEHPAVCDC@@PAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp