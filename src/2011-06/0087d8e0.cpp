// from server: 100% by auto
// roc 2011-06 0087d8e0  unit: CXTPWinThemeWrapper  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087d8e0
//
// 0087d8e0  53                   push ebx
// 0087d8e1  55                   push ebp
// 0087d8e2  56                   push esi
// 0087d8e3  57                   push edi
// 0087d8e4  8bf9                 mov edi, ecx
// 0087d8e6  8b4730               mov eax, dword ptr [edi + 0x30]
// 0087d8e9  33f6                 xor esi, esi
// 0087d8eb  85c0                 test eax, eax
// 0087d8ed  7e2e                 jle 0x87d91d
// 0087d8ef  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0087d8f3  85f6                 test esi, esi
// 0087d8f5  7c11                 jl 0x87d908
// 0087d8f7  3bf0                 cmp esi, eax
// 0087d8f9  7d0d                 jge 0x87d908
// 0087d8fb  3b7730               cmp esi, dword ptr [edi + 0x30]
// 0087d8fe  7d26                 jge 0x87d926
// 0087d900  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0087d903  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0087d906  eb02                 jmp 0x87d90a
// 0087d908  33db                 xor ebx, ebx
// 0087d90a  8bcb                 mov ecx, ebx
// 0087d90c  e8bf680200           call 0x8a41d0
// 0087d911  3bc5                 cmp eax, ebp
// 0087d913  7416                 je 0x87d92b
// 0087d915  8b4730               mov eax, dword ptr [edi + 0x30]
// 0087d918  46                   inc esi
// 0087d919  3bf0                 cmp esi, eax
// 0087d91b  7cd6                 jl 0x87d8f3
// 0087d91d  5f                   pop edi
// 0087d91e  5e                   pop esi
// 0087d91f  5d                   pop ebp
// 0087d920  33c0                 xor eax, eax
// 0087d922  5b                   pop ebx
// 0087d923  c20400               ret 4
// 0087d926  e8dfc9f8ff           call 0x80a30a
// 0087d92b  5f                   pop edi
// 0087d92c  5e                   pop esi
// 0087d92d  5d                   pop ebp
// 0087d92e  8bc3                 mov eax, ebx
// 0087d930  5b                   pop ebx
// 0087d931  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportColumns.cpp (function ?Find@CXTPReportColumns@@QBEPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportColumns.cpp
