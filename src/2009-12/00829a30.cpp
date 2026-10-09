// roc 2009-12 00829a30  unit: CXTPReportHeader  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00829a30
//
// 00829a30  8b442404             mov eax, dword ptr [esp + 4]
// 00829a34  53                   push ebx
// 00829a35  56                   push esi
// 00829a36  57                   push edi
// 00829a37  8bf9                 mov edi, ecx
// 00829a39  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00829a3c  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 00829a3f  50                   push eax
// 00829a40  e87b390400           call 0x86d3c0
// 00829a45  8bf0                 mov esi, eax
// 00829a47  46                   inc esi
// 00829a48  3bf3                 cmp esi, ebx
// 00829a4a  7d28                 jge 0x829a74
// 00829a4c  8d642400             lea esp, [esp]
// 00829a50  8b4720               mov eax, dword ptr [edi + 0x20]
// 00829a53  85f6                 test esi, esi
// 00829a55  7c18                 jl 0x829a6f
// 00829a57  3b7030               cmp esi, dword ptr [eax + 0x30]
// 00829a5a  7d13                 jge 0x829a6f
// 00829a5c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00829a5f  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00829a62  85c9                 test ecx, ecx
// 00829a64  7409                 je 0x829a6f
// 00829a66  e855a00800           call 0x8b3ac0
// 00829a6b  85c0                 test eax, eax
// 00829a6d  7510                 jne 0x829a7f
// 00829a6f  46                   inc esi
// 00829a70  3bf3                 cmp esi, ebx
// 00829a72  7cdc                 jl 0x829a50
// 00829a74  5f                   pop edi
// 00829a75  5e                   pop esi
// 00829a76  b801000000           mov eax, 1
// 00829a7b  5b                   pop ebx
// 00829a7c  c20400               ret 4
// 00829a7f  5f                   pop edi
// 00829a80  5e                   pop esi
// 00829a81  33c0                 xor eax, eax
// 00829a83  5b                   pop ebx
// 00829a84  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?IsLastVisibleColumn@CXTPReportHeader@@QBEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
