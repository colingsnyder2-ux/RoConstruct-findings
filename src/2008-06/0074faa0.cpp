// roc 2008-06 0074faa0  unit: CXTPReportHyperlinks  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074faa0
//
// 0074faa0  53                   push ebx
// 0074faa1  56                   push esi
// 0074faa2  57                   push edi
// 0074faa3  8bf9                 mov edi, ecx
// 0074faa5  8b4730               mov eax, dword ptr [edi + 0x30]
// 0074faa8  33f6                 xor esi, esi
// 0074faaa  85c0                 test eax, eax
// 0074faac  7e2c                 jle 0x74fada
// 0074faae  8bff                 mov edi, edi
// 0074fab0  85f6                 test esi, esi
// 0074fab2  7c11                 jl 0x74fac5
// 0074fab4  3bf0                 cmp esi, eax
// 0074fab6  7d0d                 jge 0x74fac5
// 0074fab8  3b7730               cmp esi, dword ptr [edi + 0x30]
// 0074fabb  7d23                 jge 0x74fae0
// 0074fabd  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0074fac0  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0074fac3  eb02                 jmp 0x74fac7
// 0074fac5  33db                 xor ebx, ebx
// 0074fac7  8bcb                 mov ecx, ebx
// 0074fac9  e8124bf8ff           call 0x6d45e0
// 0074face  85c0                 test eax, eax
// 0074fad0  7513                 jne 0x74fae5
// 0074fad2  8b4730               mov eax, dword ptr [edi + 0x30]
// 0074fad5  46                   inc esi
// 0074fad6  3bf0                 cmp esi, eax
// 0074fad8  7cd6                 jl 0x74fab0
// 0074fada  5f                   pop edi
// 0074fadb  5e                   pop esi
// 0074fadc  33c0                 xor eax, eax
// 0074fade  5b                   pop ebx
// 0074fadf  c3                   ret 
// 0074fae0  e85f0ef5ff           call 0x6a0944
// 0074fae5  5f                   pop edi
// 0074fae6  5e                   pop esi
// 0074fae7  8bc3                 mov eax, ebx
// 0074fae9  5b                   pop ebx
// 0074faea  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumns.cpp (function ?GetFirstVisibleColumn@CXTPReportColumns@@QBEPAVCXTPReportColumn@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumns.cpp
