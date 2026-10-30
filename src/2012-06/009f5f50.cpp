// from server: 100% by auto
// roc 2012-06 009f5f50  unit: CXTPWinThemeWrapper  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f5f50
//
// 009f5f50  53                   push ebx
// 009f5f51  55                   push ebp
// 009f5f52  56                   push esi
// 009f5f53  57                   push edi
// 009f5f54  8bf9                 mov edi, ecx
// 009f5f56  8b4730               mov eax, dword ptr [edi + 0x30]
// 009f5f59  33f6                 xor esi, esi
// 009f5f5b  85c0                 test eax, eax
// 009f5f5d  7e33                 jle 0x9f5f92
// 009f5f5f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 009f5f63  85f6                 test esi, esi
// 009f5f65  7c11                 jl 0x9f5f78
// 009f5f67  3bf0                 cmp esi, eax
// 009f5f69  7d0d                 jge 0x9f5f78
// 009f5f6b  3b7730               cmp esi, dword ptr [edi + 0x30]
// 009f5f6e  7d2b                 jge 0x9f5f9b
// 009f5f70  8b472c               mov eax, dword ptr [edi + 0x2c]
// 009f5f73  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 009f5f76  eb02                 jmp 0x9f5f7a
// 009f5f78  33db                 xor ebx, ebx
// 009f5f7a  8bcb                 mov ecx, ebx
// 009f5f7c  e8af740400           call 0xa3d430
// 009f5f81  85c0                 test eax, eax
// 009f5f83  7405                 je 0x9f5f8a
// 009f5f85  85ed                 test ebp, ebp
// 009f5f87  7417                 je 0x9f5fa0
// 009f5f89  4d                   dec ebp
// 009f5f8a  8b4730               mov eax, dword ptr [edi + 0x30]
// 009f5f8d  46                   inc esi
// 009f5f8e  3bf0                 cmp esi, eax
// 009f5f90  7cd1                 jl 0x9f5f63
// 009f5f92  5f                   pop edi
// 009f5f93  5e                   pop esi
// 009f5f94  5d                   pop ebp
// 009f5f95  33c0                 xor eax, eax
// 009f5f97  5b                   pop ebx
// 009f5f98  c20400               ret 4
// 009f5f9b  e820c4f8ff           call 0x9823c0
// 009f5fa0  5f                   pop edi
// 009f5fa1  5e                   pop esi
// 009f5fa2  5d                   pop ebp
// 009f5fa3  8bc3                 mov eax, ebx
// 009f5fa5  5b                   pop ebx
// 009f5fa6  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportColumns.cpp (function ?GetVisibleAt@CXTPReportColumns@@QBEPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportColumns.cpp
