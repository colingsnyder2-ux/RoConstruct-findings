// roc 2012-06 009b59b0  unit: CXTPReportHeader  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b59b0
//
// 009b59b0  8b442404             mov eax, dword ptr [esp + 4]
// 009b59b4  53                   push ebx
// 009b59b5  55                   push ebp
// 009b59b6  56                   push esi
// 009b59b7  8bd9                 mov ebx, ecx
// 009b59b9  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 009b59bc  8b6930               mov ebp, dword ptr [ecx + 0x30]
// 009b59bf  57                   push edi
// 009b59c0  50                   push eax
// 009b59c1  e84a040400           call 0x9f5e10
// 009b59c6  8bf0                 mov esi, eax
// 009b59c8  46                   inc esi
// 009b59c9  3bf5                 cmp esi, ebp
// 009b59cb  7d2f                 jge 0x9b59fc
// 009b59cd  8d4900               lea ecx, [ecx]
// 009b59d0  8b4320               mov eax, dword ptr [ebx + 0x20]
// 009b59d3  85f6                 test esi, esi
// 009b59d5  7c20                 jl 0x9b59f7
// 009b59d7  3b7030               cmp esi, dword ptr [eax + 0x30]
// 009b59da  7d1b                 jge 0x9b59f7
// 009b59dc  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 009b59df  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 009b59e2  85ff                 test edi, edi
// 009b59e4  7411                 je 0x9b59f7
// 009b59e6  8bcf                 mov ecx, edi
// 009b59e8  e8437a0800           call 0xa3d430
// 009b59ed  85c0                 test eax, eax
// 009b59ef  7406                 je 0x9b59f7
// 009b59f1  837f6800             cmp dword ptr [edi + 0x68], 0
// 009b59f5  7511                 jne 0x9b5a08
// 009b59f7  46                   inc esi
// 009b59f8  3bf5                 cmp esi, ebp
// 009b59fa  7cd4                 jl 0x9b59d0
// 009b59fc  5f                   pop edi
// 009b59fd  5e                   pop esi
// 009b59fe  5d                   pop ebp
// 009b59ff  b801000000           mov eax, 1
// 009b5a04  5b                   pop ebx
// 009b5a05  c20400               ret 4
// 009b5a08  5f                   pop edi
// 009b5a09  5e                   pop esi
// 009b5a0a  5d                   pop ebp
// 009b5a0b  33c0                 xor eax, eax
// 009b5a0d  5b                   pop ebx
// 009b5a0e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?IsLastResizebleColumn@CXTPReportHeader@@QBEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
