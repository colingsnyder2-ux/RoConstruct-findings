// roc 2007-03 006bc830  unit: seg_006b0000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bc830
//
// 006bc830  53                   push ebx
// 006bc831  56                   push esi
// 006bc832  57                   push edi
// 006bc833  8bf9                 mov edi, ecx
// 006bc835  8b4730               mov eax, dword ptr [edi + 0x30]
// 006bc838  33f6                 xor esi, esi
// 006bc83a  85c0                 test eax, eax
// 006bc83c  7e2e                 jle 0x6bc86c
// 006bc83e  8bff                 mov edi, edi
// 006bc840  85f6                 test esi, esi
// 006bc842  7c11                 jl 0x6bc855
// 006bc844  3bf0                 cmp esi, eax
// 006bc846  7d0d                 jge 0x6bc855
// 006bc848  3b7730               cmp esi, dword ptr [edi + 0x30]
// 006bc84b  7d25                 jge 0x6bc872
// 006bc84d  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006bc850  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 006bc853  eb02                 jmp 0x6bc857
// 006bc855  33db                 xor ebx, ebx
// 006bc857  8bcb                 mov ecx, ebx
// 006bc859  e822e1f8ff           call 0x64a980
// 006bc85e  85c0                 test eax, eax
// 006bc860  7515                 jne 0x6bc877
// 006bc862  8b4730               mov eax, dword ptr [edi + 0x30]
// 006bc865  83c601               add esi, 1
// 006bc868  3bf0                 cmp esi, eax
// 006bc86a  7cd4                 jl 0x6bc840
// 006bc86c  5f                   pop edi
// 006bc86d  5e                   pop esi
// 006bc86e  33c0                 xor eax, eax
// 006bc870  5b                   pop ebx
// 006bc871  c3                   ret 
// 006bc872  e9371bf6ff           jmp 0x61e3ae
// 006bc877  5f                   pop edi
// 006bc878  5e                   pop esi
// 006bc879  8bc3                 mov eax, ebx
// 006bc87b  5b                   pop ebx
// 006bc87c  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportColumns.cpp (function ?GetFirstVisibleColumn@CXTPReportColumns@@QBEPAVCXTPReportColumn@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportColumns.cpp
