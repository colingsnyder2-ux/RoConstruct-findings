// roc 2011-06 0083d330  unit: CXTPReportHeader  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083d330
//
// 0083d330  8b442404             mov eax, dword ptr [esp + 4]
// 0083d334  53                   push ebx
// 0083d335  56                   push esi
// 0083d336  57                   push edi
// 0083d337  8bf9                 mov edi, ecx
// 0083d339  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0083d33c  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 0083d33f  50                   push eax
// 0083d340  e81b050400           call 0x87d860
// 0083d345  8bf0                 mov esi, eax
// 0083d347  46                   inc esi
// 0083d348  3bf3                 cmp esi, ebx
// 0083d34a  7d28                 jge 0x83d374
// 0083d34c  8d642400             lea esp, [esp]
// 0083d350  8b4720               mov eax, dword ptr [edi + 0x20]
// 0083d353  85f6                 test esi, esi
// 0083d355  7c18                 jl 0x83d36f
// 0083d357  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0083d35a  7d13                 jge 0x83d36f
// 0083d35c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0083d35f  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0083d362  85c9                 test ecx, ecx
// 0083d364  7409                 je 0x83d36f
// 0083d366  e80529ffff           call 0x82fc70
// 0083d36b  85c0                 test eax, eax
// 0083d36d  7510                 jne 0x83d37f
// 0083d36f  46                   inc esi
// 0083d370  3bf3                 cmp esi, ebx
// 0083d372  7cdc                 jl 0x83d350
// 0083d374  5f                   pop edi
// 0083d375  5e                   pop esi
// 0083d376  b801000000           mov eax, 1
// 0083d37b  5b                   pop ebx
// 0083d37c  c20400               ret 4
// 0083d37f  5f                   pop edi
// 0083d380  5e                   pop esi
// 0083d381  33c0                 xor eax, eax
// 0083d383  5b                   pop ebx
// 0083d384  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?IsLastVisibleColumn@CXTPReportHeader@@QBEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
