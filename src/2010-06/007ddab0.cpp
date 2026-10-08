// roc 2010-06 007ddab0  unit: CXTPReportHeader  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ddab0
//
// 007ddab0  8b442404             mov eax, dword ptr [esp + 4]
// 007ddab4  53                   push ebx
// 007ddab5  56                   push esi
// 007ddab6  57                   push edi
// 007ddab7  8bf9                 mov edi, ecx
// 007ddab9  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 007ddabc  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 007ddabf  50                   push eax
// 007ddac0  e88b260400           call 0x820150
// 007ddac5  8bf0                 mov esi, eax
// 007ddac7  46                   inc esi
// 007ddac8  3bf3                 cmp esi, ebx
// 007ddaca  7d28                 jge 0x7ddaf4
// 007ddacc  8d642400             lea esp, [esp]
// 007ddad0  8b4720               mov eax, dword ptr [edi + 0x20]
// 007ddad3  85f6                 test esi, esi
// 007ddad5  7c18                 jl 0x7ddaef
// 007ddad7  3b7030               cmp esi, dword ptr [eax + 0x30]
// 007ddada  7d13                 jge 0x7ddaef
// 007ddadc  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 007ddadf  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 007ddae2  85c9                 test ecx, ecx
// 007ddae4  7409                 je 0x7ddaef
// 007ddae6  e8b5e0ffff           call 0x7dbba0
// 007ddaeb  85c0                 test eax, eax
// 007ddaed  7510                 jne 0x7ddaff
// 007ddaef  46                   inc esi
// 007ddaf0  3bf3                 cmp esi, ebx
// 007ddaf2  7cdc                 jl 0x7ddad0
// 007ddaf4  5f                   pop edi
// 007ddaf5  5e                   pop esi
// 007ddaf6  b801000000           mov eax, 1
// 007ddafb  5b                   pop ebx
// 007ddafc  c20400               ret 4
// 007ddaff  5f                   pop edi
// 007ddb00  5e                   pop esi
// 007ddb01  33c0                 xor eax, eax
// 007ddb03  5b                   pop ebx
// 007ddb04  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?IsLastVisibleColumn@CXTPReportHeader@@QBEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
