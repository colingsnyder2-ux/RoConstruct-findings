// roc 2007-08 006d3550  unit: CXTPReportRow_Batch  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3550
//
// 006d3550  53                   push ebx
// 006d3551  55                   push ebp
// 006d3552  56                   push esi
// 006d3553  57                   push edi
// 006d3554  8bf9                 mov edi, ecx
// 006d3556  8b4730               mov eax, dword ptr [edi + 0x30]
// 006d3559  33f6                 xor esi, esi
// 006d355b  85c0                 test eax, eax
// 006d355d  7e37                 jle 0x6d3596
// 006d355f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006d3563  85f6                 test esi, esi
// 006d3565  7c11                 jl 0x6d3578
// 006d3567  3bf0                 cmp esi, eax
// 006d3569  7d0d                 jge 0x6d3578
// 006d356b  3b7730               cmp esi, dword ptr [edi + 0x30]
// 006d356e  7d2f                 jge 0x6d359f
// 006d3570  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006d3573  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 006d3576  eb02                 jmp 0x6d357a
// 006d3578  33db                 xor ebx, ebx
// 006d357a  8bcb                 mov ecx, ebx
// 006d357c  e82fb0f8ff           call 0x65e5b0
// 006d3581  85c0                 test eax, eax
// 006d3583  7407                 je 0x6d358c
// 006d3585  85ed                 test ebp, ebp
// 006d3587  741b                 je 0x6d35a4
// 006d3589  83ed01               sub ebp, 1
// 006d358c  8b4730               mov eax, dword ptr [edi + 0x30]
// 006d358f  83c601               add esi, 1
// 006d3592  3bf0                 cmp esi, eax
// 006d3594  7ccd                 jl 0x6d3563
// 006d3596  5f                   pop edi
// 006d3597  5e                   pop esi
// 006d3598  5d                   pop ebp
// 006d3599  33c0                 xor eax, eax
// 006d359b  5b                   pop ebx
// 006d359c  c20400               ret 4
// 006d359f  e87cc9f5ff           call 0x62ff20
// 006d35a4  5f                   pop edi
// 006d35a5  5e                   pop esi
// 006d35a6  5d                   pop ebp
// 006d35a7  8bc3                 mov eax, ebx
// 006d35a9  5b                   pop ebx
// 006d35aa  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportColumns.cpp (function ?GetVisibleAt@CXTPReportColumns@@QBEPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportColumns.cpp
