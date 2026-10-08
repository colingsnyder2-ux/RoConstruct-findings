// roc 2011-06 0083d390  unit: CXTPReportHeader  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083d390
//
// 0083d390  8b442404             mov eax, dword ptr [esp + 4]
// 0083d394  53                   push ebx
// 0083d395  55                   push ebp
// 0083d396  56                   push esi
// 0083d397  8bd9                 mov ebx, ecx
// 0083d399  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0083d39c  8b6930               mov ebp, dword ptr [ecx + 0x30]
// 0083d39f  57                   push edi
// 0083d3a0  50                   push eax
// 0083d3a1  e8ba040400           call 0x87d860
// 0083d3a6  8bf0                 mov esi, eax
// 0083d3a8  46                   inc esi
// 0083d3a9  3bf5                 cmp esi, ebp
// 0083d3ab  7d2f                 jge 0x83d3dc
// 0083d3ad  8d4900               lea ecx, [ecx]
// 0083d3b0  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0083d3b3  85f6                 test esi, esi
// 0083d3b5  7c20                 jl 0x83d3d7
// 0083d3b7  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0083d3ba  7d1b                 jge 0x83d3d7
// 0083d3bc  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0083d3bf  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 0083d3c2  85ff                 test edi, edi
// 0083d3c4  7411                 je 0x83d3d7
// 0083d3c6  8bcf                 mov ecx, edi
// 0083d3c8  e8a328ffff           call 0x82fc70
// 0083d3cd  85c0                 test eax, eax
// 0083d3cf  7406                 je 0x83d3d7
// 0083d3d1  837f6800             cmp dword ptr [edi + 0x68], 0
// 0083d3d5  7511                 jne 0x83d3e8
// 0083d3d7  46                   inc esi
// 0083d3d8  3bf5                 cmp esi, ebp
// 0083d3da  7cd4                 jl 0x83d3b0
// 0083d3dc  5f                   pop edi
// 0083d3dd  5e                   pop esi
// 0083d3de  5d                   pop ebp
// 0083d3df  b801000000           mov eax, 1
// 0083d3e4  5b                   pop ebx
// 0083d3e5  c20400               ret 4
// 0083d3e8  5f                   pop edi
// 0083d3e9  5e                   pop esi
// 0083d3ea  5d                   pop ebp
// 0083d3eb  33c0                 xor eax, eax
// 0083d3ed  5b                   pop ebx
// 0083d3ee  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?IsLastResizebleColumn@CXTPReportHeader@@QBEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
