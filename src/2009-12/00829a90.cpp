// roc 2009-12 00829a90  unit: CXTPReportHeader  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00829a90
//
// 00829a90  8b442404             mov eax, dword ptr [esp + 4]
// 00829a94  53                   push ebx
// 00829a95  55                   push ebp
// 00829a96  56                   push esi
// 00829a97  8bd9                 mov ebx, ecx
// 00829a99  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00829a9c  8b6930               mov ebp, dword ptr [ecx + 0x30]
// 00829a9f  57                   push edi
// 00829aa0  50                   push eax
// 00829aa1  e81a390400           call 0x86d3c0
// 00829aa6  8bf0                 mov esi, eax
// 00829aa8  46                   inc esi
// 00829aa9  3bf5                 cmp esi, ebp
// 00829aab  7d2f                 jge 0x829adc
// 00829aad  8d4900               lea ecx, [ecx]
// 00829ab0  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00829ab3  85f6                 test esi, esi
// 00829ab5  7c20                 jl 0x829ad7
// 00829ab7  3b7030               cmp esi, dword ptr [eax + 0x30]
// 00829aba  7d1b                 jge 0x829ad7
// 00829abc  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00829abf  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 00829ac2  85ff                 test edi, edi
// 00829ac4  7411                 je 0x829ad7
// 00829ac6  8bcf                 mov ecx, edi
// 00829ac8  e8f39f0800           call 0x8b3ac0
// 00829acd  85c0                 test eax, eax
// 00829acf  7406                 je 0x829ad7
// 00829ad1  837f6800             cmp dword ptr [edi + 0x68], 0
// 00829ad5  7511                 jne 0x829ae8
// 00829ad7  46                   inc esi
// 00829ad8  3bf5                 cmp esi, ebp
// 00829ada  7cd4                 jl 0x829ab0
// 00829adc  5f                   pop edi
// 00829add  5e                   pop esi
// 00829ade  5d                   pop ebp
// 00829adf  b801000000           mov eax, 1
// 00829ae4  5b                   pop ebx
// 00829ae5  c20400               ret 4
// 00829ae8  5f                   pop edi
// 00829ae9  5e                   pop esi
// 00829aea  5d                   pop ebp
// 00829aeb  33c0                 xor eax, eax
// 00829aed  5b                   pop ebx
// 00829aee  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?IsLastResizebleColumn@CXTPReportHeader@@QBEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
