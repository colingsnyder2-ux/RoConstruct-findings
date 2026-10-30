// roc 2009-06 0074ec70  unit: CXTPReportHeader  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074ec70
//
// 0074ec70  8b442404             mov eax, dword ptr [esp + 4]
// 0074ec74  53                   push ebx
// 0074ec75  56                   push esi
// 0074ec76  57                   push edi
// 0074ec77  8bf9                 mov edi, ecx
// 0074ec79  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0074ec7c  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 0074ec7f  50                   push eax
// 0074ec80  e81b370400           call 0x7923a0
// 0074ec85  8bf0                 mov esi, eax
// 0074ec87  46                   inc esi
// 0074ec88  3bf3                 cmp esi, ebx
// 0074ec8a  7d28                 jge 0x74ecb4
// 0074ec8c  8d642400             lea esp, [esp]
// 0074ec90  8b4720               mov eax, dword ptr [edi + 0x20]
// 0074ec93  85f6                 test esi, esi
// 0074ec95  7c18                 jl 0x74ecaf
// 0074ec97  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0074ec9a  7d13                 jge 0x74ecaf
// 0074ec9c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0074ec9f  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0074eca2  85c9                 test ecx, ecx
// 0074eca4  7409                 je 0x74ecaf
// 0074eca6  e8a5e0ffff           call 0x74cd50
// 0074ecab  85c0                 test eax, eax
// 0074ecad  7510                 jne 0x74ecbf
// 0074ecaf  46                   inc esi
// 0074ecb0  3bf3                 cmp esi, ebx
// 0074ecb2  7cdc                 jl 0x74ec90
// 0074ecb4  5f                   pop edi
// 0074ecb5  5e                   pop esi
// 0074ecb6  b801000000           mov eax, 1
// 0074ecbb  5b                   pop ebx
// 0074ecbc  c20400               ret 4
// 0074ecbf  5f                   pop edi
// 0074ecc0  5e                   pop esi
// 0074ecc1  33c0                 xor eax, eax
// 0074ecc3  5b                   pop ebx
// 0074ecc4  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?IsLastVisibleColumn@CXTPReportHeader@@QBEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
