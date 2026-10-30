// roc 2007-03 0064c9b0  unit: seg_00640000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064c9b0
//
// 0064c9b0  8b442404             mov eax, dword ptr [esp + 4]
// 0064c9b4  53                   push ebx
// 0064c9b5  56                   push esi
// 0064c9b6  57                   push edi
// 0064c9b7  8bf9                 mov edi, ecx
// 0064c9b9  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0064c9bc  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 0064c9bf  50                   push eax
// 0064c9c0  e82bfd0600           call 0x6bc6f0
// 0064c9c5  8bf0                 mov esi, eax
// 0064c9c7  83c601               add esi, 1
// 0064c9ca  3bf3                 cmp esi, ebx
// 0064c9cc  7d28                 jge 0x64c9f6
// 0064c9ce  8bff                 mov edi, edi
// 0064c9d0  85f6                 test esi, esi
// 0064c9d2  8b4720               mov eax, dword ptr [edi + 0x20]
// 0064c9d5  7c18                 jl 0x64c9ef
// 0064c9d7  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0064c9da  7d13                 jge 0x64c9ef
// 0064c9dc  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0064c9df  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0064c9e2  85c9                 test ecx, ecx
// 0064c9e4  7409                 je 0x64c9ef
// 0064c9e6  e895dfffff           call 0x64a980
// 0064c9eb  85c0                 test eax, eax
// 0064c9ed  7512                 jne 0x64ca01
// 0064c9ef  83c601               add esi, 1
// 0064c9f2  3bf3                 cmp esi, ebx
// 0064c9f4  7cda                 jl 0x64c9d0
// 0064c9f6  5f                   pop edi
// 0064c9f7  5e                   pop esi
// 0064c9f8  b801000000           mov eax, 1
// 0064c9fd  5b                   pop ebx
// 0064c9fe  c20400               ret 4
// 0064ca01  5f                   pop edi
// 0064ca02  5e                   pop esi
// 0064ca03  33c0                 xor eax, eax
// 0064ca05  5b                   pop ebx
// 0064ca06  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportHeader.cpp (function ?IsLastVisibleColumn@CXTPReportHeader@@QBEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportHeader.cpp
