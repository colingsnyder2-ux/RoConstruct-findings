// roc 2012-06 009f5fb0  unit: CXTPWinThemeWrapper  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f5fb0
//
// 009f5fb0  53                   push ebx
// 009f5fb1  56                   push esi
// 009f5fb2  57                   push edi
// 009f5fb3  8bf9                 mov edi, ecx
// 009f5fb5  8b4730               mov eax, dword ptr [edi + 0x30]
// 009f5fb8  33f6                 xor esi, esi
// 009f5fba  85c0                 test eax, eax
// 009f5fbc  7e2c                 jle 0x9f5fea
// 009f5fbe  8bff                 mov edi, edi
// 009f5fc0  85f6                 test esi, esi
// 009f5fc2  7c11                 jl 0x9f5fd5
// 009f5fc4  3bf0                 cmp esi, eax
// 009f5fc6  7d0d                 jge 0x9f5fd5
// 009f5fc8  3b7730               cmp esi, dword ptr [edi + 0x30]
// 009f5fcb  7d23                 jge 0x9f5ff0
// 009f5fcd  8b472c               mov eax, dword ptr [edi + 0x2c]
// 009f5fd0  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 009f5fd3  eb02                 jmp 0x9f5fd7
// 009f5fd5  33db                 xor ebx, ebx
// 009f5fd7  8bcb                 mov ecx, ebx
// 009f5fd9  e852740400           call 0xa3d430
// 009f5fde  85c0                 test eax, eax
// 009f5fe0  7513                 jne 0x9f5ff5
// 009f5fe2  8b4730               mov eax, dword ptr [edi + 0x30]
// 009f5fe5  46                   inc esi
// 009f5fe6  3bf0                 cmp esi, eax
// 009f5fe8  7cd6                 jl 0x9f5fc0
// 009f5fea  5f                   pop edi
// 009f5feb  5e                   pop esi
// 009f5fec  33c0                 xor eax, eax
// 009f5fee  5b                   pop ebx
// 009f5fef  c3                   ret 
// 009f5ff0  e8cbc3f8ff           call 0x9823c0
// 009f5ff5  5f                   pop edi
// 009f5ff6  5e                   pop esi
// 009f5ff7  8bc3                 mov eax, ebx
// 009f5ff9  5b                   pop ebx
// 009f5ffa  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportColumns.cpp (function ?GetFirstVisibleColumn@CXTPReportColumns@@QBEPAVCXTPReportColumn@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportColumns.cpp
