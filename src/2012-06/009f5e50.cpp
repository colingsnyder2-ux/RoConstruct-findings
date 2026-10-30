// from server: 100% by auto
// roc 2012-06 009f5e50  unit: CXTPWinThemeWrapper  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f5e50
//
// 009f5e50  53                   push ebx
// 009f5e51  55                   push ebp
// 009f5e52  56                   push esi
// 009f5e53  57                   push edi
// 009f5e54  8bf9                 mov edi, ecx
// 009f5e56  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 009f5e59  33ed                 xor ebp, ebp
// 009f5e5b  33f6                 xor esi, esi
// 009f5e5d  85db                 test ebx, ebx
// 009f5e5f  7e22                 jle 0x9f5e83
// 009f5e61  85f6                 test esi, esi
// 009f5e63  7c19                 jl 0x9f5e7e
// 009f5e65  3b7730               cmp esi, dword ptr [edi + 0x30]
// 009f5e68  7d14                 jge 0x9f5e7e
// 009f5e6a  8b472c               mov eax, dword ptr [edi + 0x2c]
// 009f5e6d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009f5e70  85c9                 test ecx, ecx
// 009f5e72  740a                 je 0x9f5e7e
// 009f5e74  e8b7750400           call 0xa3d430
// 009f5e79  85c0                 test eax, eax
// 009f5e7b  7401                 je 0x9f5e7e
// 009f5e7d  45                   inc ebp
// 009f5e7e  46                   inc esi
// 009f5e7f  3bf3                 cmp esi, ebx
// 009f5e81  7cde                 jl 0x9f5e61
// 009f5e83  5f                   pop edi
// 009f5e84  5e                   pop esi
// 009f5e85  8bc5                 mov eax, ebp
// 009f5e87  5d                   pop ebp
// 009f5e88  5b                   pop ebx
// 009f5e89  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportColumns.cpp (function ?GetVisibleColumnsCount@CXTPReportColumns@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportColumns.cpp
