// roc 2007-08 006d34f0  unit: CXTPReportRow_Batch  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d34f0
//
// 006d34f0  53                   push ebx
// 006d34f1  55                   push ebp
// 006d34f2  56                   push esi
// 006d34f3  57                   push edi
// 006d34f4  8bf9                 mov edi, ecx
// 006d34f6  8b4730               mov eax, dword ptr [edi + 0x30]
// 006d34f9  33f6                 xor esi, esi
// 006d34fb  85c0                 test eax, eax
// 006d34fd  7e30                 jle 0x6d352f
// 006d34ff  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006d3503  85f6                 test esi, esi
// 006d3505  7c11                 jl 0x6d3518
// 006d3507  3bf0                 cmp esi, eax
// 006d3509  7d0d                 jge 0x6d3518
// 006d350b  3b7730               cmp esi, dword ptr [edi + 0x30]
// 006d350e  7d28                 jge 0x6d3538
// 006d3510  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006d3513  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 006d3516  eb02                 jmp 0x6d351a
// 006d3518  33db                 xor ebx, ebx
// 006d351a  8bcb                 mov ecx, ebx
// 006d351c  e84f03f8ff           call 0x653870
// 006d3521  3bc5                 cmp eax, ebp
// 006d3523  7418                 je 0x6d353d
// 006d3525  8b4730               mov eax, dword ptr [edi + 0x30]
// 006d3528  83c601               add esi, 1
// 006d352b  3bf0                 cmp esi, eax
// 006d352d  7cd4                 jl 0x6d3503
// 006d352f  5f                   pop edi
// 006d3530  5e                   pop esi
// 006d3531  5d                   pop ebp
// 006d3532  33c0                 xor eax, eax
// 006d3534  5b                   pop ebx
// 006d3535  c20400               ret 4
// 006d3538  e8e3c9f5ff           call 0x62ff20
// 006d353d  5f                   pop edi
// 006d353e  5e                   pop esi
// 006d353f  5d                   pop ebp
// 006d3540  8bc3                 mov eax, ebx
// 006d3542  5b                   pop ebx
// 006d3543  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportColumns.cpp (function ?Find@CXTPReportColumns@@QBEPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportColumns.cpp
