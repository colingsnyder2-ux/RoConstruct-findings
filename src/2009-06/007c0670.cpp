// roc 2009-06 007c0670  unit: CXTPReportPaintManager  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c0670
//
// 007c0670  8bc1                 mov eax, ecx
// 007c0672  83b80802000000       cmp dword ptr [eax + 0x208], 0
// 007c0679  7434                 je 0x7c06af
// 007c067b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007c067f  85c9                 test ecx, ecx
// 007c0681  742c                 je 0x7c06af
// 007c0683  8b9014010000         mov edx, dword ptr [eax + 0x114]
// 007c0689  83faff               cmp edx, -1
// 007c068c  7514                 jne 0x7c06a2
// 007c068e  8b8010010000         mov eax, dword ptr [eax + 0x110]
// 007c0694  50                   push eax
// 007c0695  8d44240c             lea eax, [esp + 0xc]
// 007c0699  50                   push eax
// 007c069a  e83191f5ff           call 0x7197d0
// 007c069f  c21400               ret 0x14
// 007c06a2  8bc2                 mov eax, edx
// 007c06a4  50                   push eax
// 007c06a5  8d44240c             lea eax, [esp + 0xc]
// 007c06a9  50                   push eax
// 007c06aa  e82191f5ff           call 0x7197d0
// 007c06af  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillItemShade@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
