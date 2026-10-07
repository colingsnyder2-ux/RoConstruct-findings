// roc 2011-06 0087da00  unit: CXTPWinThemeWrapper  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087da00
//
// 0087da00  53                   push ebx
// 0087da01  56                   push esi
// 0087da02  57                   push edi
// 0087da03  8bf9                 mov edi, ecx
// 0087da05  8b4730               mov eax, dword ptr [edi + 0x30]
// 0087da08  33f6                 xor esi, esi
// 0087da0a  85c0                 test eax, eax
// 0087da0c  7e2c                 jle 0x87da3a
// 0087da0e  8bff                 mov edi, edi
// 0087da10  85f6                 test esi, esi
// 0087da12  7c11                 jl 0x87da25
// 0087da14  3bf0                 cmp esi, eax
// 0087da16  7d0d                 jge 0x87da25
// 0087da18  3b7730               cmp esi, dword ptr [edi + 0x30]
// 0087da1b  7d23                 jge 0x87da40
// 0087da1d  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0087da20  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0087da23  eb02                 jmp 0x87da27
// 0087da25  33db                 xor ebx, ebx
// 0087da27  8bcb                 mov ecx, ebx
// 0087da29  e84222fbff           call 0x82fc70
// 0087da2e  85c0                 test eax, eax
// 0087da30  7513                 jne 0x87da45
// 0087da32  8b4730               mov eax, dword ptr [edi + 0x30]
// 0087da35  46                   inc esi
// 0087da36  3bf0                 cmp esi, eax
// 0087da38  7cd6                 jl 0x87da10
// 0087da3a  5f                   pop edi
// 0087da3b  5e                   pop esi
// 0087da3c  33c0                 xor eax, eax
// 0087da3e  5b                   pop ebx
// 0087da3f  c3                   ret 
// 0087da40  e8c5c8f8ff           call 0x80a30a
// 0087da45  5f                   pop edi
// 0087da46  5e                   pop esi
// 0087da47  8bc3                 mov eax, ebx
// 0087da49  5b                   pop ebx
// 0087da4a  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportColumns.cpp (function ?GetFirstVisibleColumn@CXTPReportColumns@@QBEPAVCXTPReportColumn@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportColumns.cpp
