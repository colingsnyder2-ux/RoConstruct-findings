// from server: 100% by auto
// roc 2007-08 006d35b0  unit: CXTPReportRow_Batch  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d35b0
//
// 006d35b0  53                   push ebx
// 006d35b1  56                   push esi
// 006d35b2  57                   push edi
// 006d35b3  8bf9                 mov edi, ecx
// 006d35b5  8b4730               mov eax, dword ptr [edi + 0x30]
// 006d35b8  33f6                 xor esi, esi
// 006d35ba  85c0                 test eax, eax
// 006d35bc  7e2e                 jle 0x6d35ec
// 006d35be  8bff                 mov edi, edi
// 006d35c0  85f6                 test esi, esi
// 006d35c2  7c11                 jl 0x6d35d5
// 006d35c4  3bf0                 cmp esi, eax
// 006d35c6  7d0d                 jge 0x6d35d5
// 006d35c8  3b7730               cmp esi, dword ptr [edi + 0x30]
// 006d35cb  7d25                 jge 0x6d35f2
// 006d35cd  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006d35d0  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 006d35d3  eb02                 jmp 0x6d35d7
// 006d35d5  33db                 xor ebx, ebx
// 006d35d7  8bcb                 mov ecx, ebx
// 006d35d9  e8d2aff8ff           call 0x65e5b0
// 006d35de  85c0                 test eax, eax
// 006d35e0  7515                 jne 0x6d35f7
// 006d35e2  8b4730               mov eax, dword ptr [edi + 0x30]
// 006d35e5  83c601               add esi, 1
// 006d35e8  3bf0                 cmp esi, eax
// 006d35ea  7cd4                 jl 0x6d35c0
// 006d35ec  5f                   pop edi
// 006d35ed  5e                   pop esi
// 006d35ee  33c0                 xor eax, eax
// 006d35f0  5b                   pop ebx
// 006d35f1  c3                   ret 
// 006d35f2  e929c9f5ff           jmp 0x62ff20
// 006d35f7  5f                   pop edi
// 006d35f8  5e                   pop esi
// 006d35f9  8bc3                 mov eax, ebx
// 006d35fb  5b                   pop ebx
// 006d35fc  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportColumns.cpp (function ?GetFirstVisibleColumn@CXTPReportColumns@@QBEPAVCXTPReportColumn@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportColumns.cpp
