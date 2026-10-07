// roc 2008-06 006d6560  unit: CXTPReportHeader  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d6560
//
// 006d6560  8b442404             mov eax, dword ptr [esp + 4]
// 006d6564  53                   push ebx
// 006d6565  55                   push ebp
// 006d6566  56                   push esi
// 006d6567  8bd9                 mov ebx, ecx
// 006d6569  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 006d656c  8b6930               mov ebp, dword ptr [ecx + 0x30]
// 006d656f  57                   push edi
// 006d6570  50                   push eax
// 006d6571  e88a930700           call 0x74f900
// 006d6576  8bf0                 mov esi, eax
// 006d6578  46                   inc esi
// 006d6579  3bf5                 cmp esi, ebp
// 006d657b  7d2f                 jge 0x6d65ac
// 006d657d  8d4900               lea ecx, [ecx]
// 006d6580  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006d6583  85f6                 test esi, esi
// 006d6585  7c20                 jl 0x6d65a7
// 006d6587  3b7030               cmp esi, dword ptr [eax + 0x30]
// 006d658a  7d1b                 jge 0x6d65a7
// 006d658c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 006d658f  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 006d6592  85ff                 test edi, edi
// 006d6594  7411                 je 0x6d65a7
// 006d6596  8bcf                 mov ecx, edi
// 006d6598  e843e0ffff           call 0x6d45e0
// 006d659d  85c0                 test eax, eax
// 006d659f  7406                 je 0x6d65a7
// 006d65a1  837f6800             cmp dword ptr [edi + 0x68], 0
// 006d65a5  7511                 jne 0x6d65b8
// 006d65a7  46                   inc esi
// 006d65a8  3bf5                 cmp esi, ebp
// 006d65aa  7cd4                 jl 0x6d6580
// 006d65ac  5f                   pop edi
// 006d65ad  5e                   pop esi
// 006d65ae  5d                   pop ebp
// 006d65af  b801000000           mov eax, 1
// 006d65b4  5b                   pop ebx
// 006d65b5  c20400               ret 4
// 006d65b8  5f                   pop edi
// 006d65b9  5e                   pop esi
// 006d65ba  5d                   pop ebp
// 006d65bb  33c0                 xor eax, eax
// 006d65bd  5b                   pop ebx
// 006d65be  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?IsLastResizebleColumn@CXTPReportHeader@@QBEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
