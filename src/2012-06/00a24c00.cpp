// roc 2012-06 00a24c00  unit: CXTPReportPaintManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a24c00
//
// 00a24c00  8b4178               mov eax, dword ptr [ecx + 0x78]
// 00a24c03  83f8ff               cmp eax, -1
// 00a24c06  7503                 jne 0xa24c0b
// 00a24c08  8b4174               mov eax, dword ptr [ecx + 0x74]
// 00a24c0b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a24c0f  50                   push eax
// 00a24c10  8d44240c             lea eax, [esp + 0xc]
// 00a24c14  50                   push eax
// 00a24c15  e892e2f5ff           call 0x982eac
// 00a24c1a  c21400               ret 0x14
// library xtp-13.2.1/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillHeaderControl@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportPaintManager.cpp
