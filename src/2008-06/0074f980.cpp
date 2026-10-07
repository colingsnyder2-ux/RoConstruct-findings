// roc 2008-06 0074f980  unit: CXTPReportHyperlinks  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074f980
//
// 0074f980  53                   push ebx
// 0074f981  55                   push ebp
// 0074f982  56                   push esi
// 0074f983  57                   push edi
// 0074f984  8bf9                 mov edi, ecx
// 0074f986  8b4730               mov eax, dword ptr [edi + 0x30]
// 0074f989  33f6                 xor esi, esi
// 0074f98b  85c0                 test eax, eax
// 0074f98d  7e2e                 jle 0x74f9bd
// 0074f98f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0074f993  85f6                 test esi, esi
// 0074f995  7c11                 jl 0x74f9a8
// 0074f997  3bf0                 cmp esi, eax
// 0074f999  7d0d                 jge 0x74f9a8
// 0074f99b  3b7730               cmp esi, dword ptr [edi + 0x30]
// 0074f99e  7d26                 jge 0x74f9c6
// 0074f9a0  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0074f9a3  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0074f9a6  eb02                 jmp 0x74f9aa
// 0074f9a8  33db                 xor ebx, ebx
// 0074f9aa  8bcb                 mov ecx, ebx
// 0074f9ac  e8afa0f6ff           call 0x6b9a60
// 0074f9b1  3bc5                 cmp eax, ebp
// 0074f9b3  7416                 je 0x74f9cb
// 0074f9b5  8b4730               mov eax, dword ptr [edi + 0x30]
// 0074f9b8  46                   inc esi
// 0074f9b9  3bf0                 cmp esi, eax
// 0074f9bb  7cd6                 jl 0x74f993
// 0074f9bd  5f                   pop edi
// 0074f9be  5e                   pop esi
// 0074f9bf  5d                   pop ebp
// 0074f9c0  33c0                 xor eax, eax
// 0074f9c2  5b                   pop ebx
// 0074f9c3  c20400               ret 4
// 0074f9c6  e8790ff5ff           call 0x6a0944
// 0074f9cb  5f                   pop edi
// 0074f9cc  5e                   pop esi
// 0074f9cd  5d                   pop ebp
// 0074f9ce  8bc3                 mov eax, ebx
// 0074f9d0  5b                   pop ebx
// 0074f9d1  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportColumns.cpp (function ?Find@CXTPReportColumns@@QBEPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumns.cpp
