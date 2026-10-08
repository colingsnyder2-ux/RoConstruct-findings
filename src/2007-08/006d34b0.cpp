// from server: 100% by auto
// roc 2007-08 006d34b0  unit: CXTPReportRow_Batch  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d34b0
//
// 006d34b0  53                   push ebx
// 006d34b1  55                   push ebp
// 006d34b2  56                   push esi
// 006d34b3  57                   push edi
// 006d34b4  8bf9                 mov edi, ecx
// 006d34b6  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 006d34b9  33ed                 xor ebp, ebp
// 006d34bb  33f6                 xor esi, esi
// 006d34bd  85db                 test ebx, ebx
// 006d34bf  7e26                 jle 0x6d34e7
// 006d34c1  85f6                 test esi, esi
// 006d34c3  7c1b                 jl 0x6d34e0
// 006d34c5  3b7730               cmp esi, dword ptr [edi + 0x30]
// 006d34c8  7d16                 jge 0x6d34e0
// 006d34ca  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006d34cd  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006d34d0  85c9                 test ecx, ecx
// 006d34d2  740c                 je 0x6d34e0
// 006d34d4  e8d7b0f8ff           call 0x65e5b0
// 006d34d9  85c0                 test eax, eax
// 006d34db  7403                 je 0x6d34e0
// 006d34dd  83c501               add ebp, 1
// 006d34e0  83c601               add esi, 1
// 006d34e3  3bf3                 cmp esi, ebx
// 006d34e5  7cda                 jl 0x6d34c1
// 006d34e7  5f                   pop edi
// 006d34e8  5e                   pop esi
// 006d34e9  8bc5                 mov eax, ebp
// 006d34eb  5d                   pop ebp
// 006d34ec  5b                   pop ebx
// 006d34ed  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportColumns.cpp (function ?GetVisibleColumnsCount@CXTPReportColumns@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportColumns.cpp
