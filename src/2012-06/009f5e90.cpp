// from server: 100% by auto
// roc 2012-06 009f5e90  unit: CXTPWinThemeWrapper  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f5e90
//
// 009f5e90  53                   push ebx
// 009f5e91  55                   push ebp
// 009f5e92  56                   push esi
// 009f5e93  57                   push edi
// 009f5e94  8bf9                 mov edi, ecx
// 009f5e96  8b4730               mov eax, dword ptr [edi + 0x30]
// 009f5e99  33f6                 xor esi, esi
// 009f5e9b  85c0                 test eax, eax
// 009f5e9d  7e2e                 jle 0x9f5ecd
// 009f5e9f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 009f5ea3  85f6                 test esi, esi
// 009f5ea5  7c11                 jl 0x9f5eb8
// 009f5ea7  3bf0                 cmp esi, eax
// 009f5ea9  7d0d                 jge 0x9f5eb8
// 009f5eab  3b7730               cmp esi, dword ptr [edi + 0x30]
// 009f5eae  7d26                 jge 0x9f5ed6
// 009f5eb0  8b472c               mov eax, dword ptr [edi + 0x2c]
// 009f5eb3  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 009f5eb6  eb02                 jmp 0x9f5eba
// 009f5eb8  33db                 xor ebx, ebx
// 009f5eba  8bcb                 mov ecx, ebx
// 009f5ebc  e85f1bfaff           call 0x997a20
// 009f5ec1  3bc5                 cmp eax, ebp
// 009f5ec3  7416                 je 0x9f5edb
// 009f5ec5  8b4730               mov eax, dword ptr [edi + 0x30]
// 009f5ec8  46                   inc esi
// 009f5ec9  3bf0                 cmp esi, eax
// 009f5ecb  7cd6                 jl 0x9f5ea3
// 009f5ecd  5f                   pop edi
// 009f5ece  5e                   pop esi
// 009f5ecf  5d                   pop ebp
// 009f5ed0  33c0                 xor eax, eax
// 009f5ed2  5b                   pop ebx
// 009f5ed3  c20400               ret 4
// 009f5ed6  e8e5c4f8ff           call 0x9823c0
// 009f5edb  5f                   pop edi
// 009f5edc  5e                   pop esi
// 009f5edd  5d                   pop ebp
// 009f5ede  8bc3                 mov eax, ebx
// 009f5ee0  5b                   pop ebx
// 009f5ee1  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportColumns.cpp (function ?Find@CXTPReportColumns@@QBEPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportColumns.cpp
