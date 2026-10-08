// roc 2011-06 008ac730  unit: CXTPReportPaintManager  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ac730
//
// 008ac730  8bc1                 mov eax, ecx
// 008ac732  83b80802000000       cmp dword ptr [eax + 0x208], 0
// 008ac739  7434                 je 0x8ac76f
// 008ac73b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008ac73f  85c9                 test ecx, ecx
// 008ac741  742c                 je 0x8ac76f
// 008ac743  8b9014010000         mov edx, dword ptr [eax + 0x114]
// 008ac749  83faff               cmp edx, -1
// 008ac74c  7514                 jne 0x8ac762
// 008ac74e  8b8010010000         mov eax, dword ptr [eax + 0x110]
// 008ac754  50                   push eax
// 008ac755  8d44240c             lea eax, [esp + 0xc]
// 008ac759  50                   push eax
// 008ac75a  e8c1e6f5ff           call 0x80ae20
// 008ac75f  c21400               ret 0x14
// 008ac762  8bc2                 mov eax, edx
// 008ac764  50                   push eax
// 008ac765  8d44240c             lea eax, [esp + 0xc]
// 008ac769  50                   push eax
// 008ac76a  e8b1e6f5ff           call 0x80ae20
// 008ac76f  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillItemShade@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
