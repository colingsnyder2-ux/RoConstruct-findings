// roc 2012-06 009b5950  unit: CXTPReportHeader  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b5950
//
// 009b5950  8b442404             mov eax, dword ptr [esp + 4]
// 009b5954  53                   push ebx
// 009b5955  56                   push esi
// 009b5956  57                   push edi
// 009b5957  8bf9                 mov edi, ecx
// 009b5959  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 009b595c  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 009b595f  50                   push eax
// 009b5960  e8ab040400           call 0x9f5e10
// 009b5965  8bf0                 mov esi, eax
// 009b5967  46                   inc esi
// 009b5968  3bf3                 cmp esi, ebx
// 009b596a  7d28                 jge 0x9b5994
// 009b596c  8d642400             lea esp, [esp]
// 009b5970  8b4720               mov eax, dword ptr [edi + 0x20]
// 009b5973  85f6                 test esi, esi
// 009b5975  7c18                 jl 0x9b598f
// 009b5977  3b7030               cmp esi, dword ptr [eax + 0x30]
// 009b597a  7d13                 jge 0x9b598f
// 009b597c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 009b597f  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 009b5982  85c9                 test ecx, ecx
// 009b5984  7409                 je 0x9b598f
// 009b5986  e8a57a0800           call 0xa3d430
// 009b598b  85c0                 test eax, eax
// 009b598d  7510                 jne 0x9b599f
// 009b598f  46                   inc esi
// 009b5990  3bf3                 cmp esi, ebx
// 009b5992  7cdc                 jl 0x9b5970
// 009b5994  5f                   pop edi
// 009b5995  5e                   pop esi
// 009b5996  b801000000           mov eax, 1
// 009b599b  5b                   pop ebx
// 009b599c  c20400               ret 4
// 009b599f  5f                   pop edi
// 009b59a0  5e                   pop esi
// 009b59a1  33c0                 xor eax, eax
// 009b59a3  5b                   pop ebx
// 009b59a4  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?IsLastVisibleColumn@CXTPReportHeader@@QBEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
