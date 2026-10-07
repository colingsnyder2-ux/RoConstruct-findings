// roc 2007-08 00660430  unit: CXTPReportHeader  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00660430
//
// 00660430  8b442404             mov eax, dword ptr [esp + 4]
// 00660434  53                   push ebx
// 00660435  56                   push esi
// 00660436  57                   push edi
// 00660437  8bf9                 mov edi, ecx
// 00660439  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0066043c  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 0066043f  50                   push eax
// 00660440  e82b300700           call 0x6d3470
// 00660445  8bf0                 mov esi, eax
// 00660447  83c601               add esi, 1
// 0066044a  3bf3                 cmp esi, ebx
// 0066044c  7d28                 jge 0x660476
// 0066044e  8bff                 mov edi, edi
// 00660450  85f6                 test esi, esi
// 00660452  8b4720               mov eax, dword ptr [edi + 0x20]
// 00660455  7c18                 jl 0x66046f
// 00660457  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0066045a  7d13                 jge 0x66046f
// 0066045c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0066045f  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00660462  85c9                 test ecx, ecx
// 00660464  7409                 je 0x66046f
// 00660466  e845e1ffff           call 0x65e5b0
// 0066046b  85c0                 test eax, eax
// 0066046d  7512                 jne 0x660481
// 0066046f  83c601               add esi, 1
// 00660472  3bf3                 cmp esi, ebx
// 00660474  7cda                 jl 0x660450
// 00660476  5f                   pop edi
// 00660477  5e                   pop esi
// 00660478  b801000000           mov eax, 1
// 0066047d  5b                   pop ebx
// 0066047e  c20400               ret 4
// 00660481  5f                   pop edi
// 00660482  5e                   pop esi
// 00660483  33c0                 xor eax, eax
// 00660485  5b                   pop ebx
// 00660486  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportHeader.cpp (function ?IsLastVisibleColumn@CXTPReportHeader@@QBEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportHeader.cpp
