// roc 2011-06 008427b0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008427b0
//
// 008427b0  53                   push ebx
// 008427b1  8bd9                 mov ebx, ecx
// 008427b3  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008427b6  56                   push esi
// 008427b7  33f6                 xor esi, esi
// 008427b9  57                   push edi
// 008427ba  85c0                 test eax, eax
// 008427bc  7e1d                 jle 0x8427db
// 008427be  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008427c2  8d7b20               lea edi, [ebx + 0x20]
// 008427c5  85f6                 test esi, esi
// 008427c7  7c3c                 jl 0x842805
// 008427c9  3b7708               cmp esi, dword ptr [edi + 8]
// 008427cc  7d37                 jge 0x842805
// 008427ce  8b5704               mov edx, dword ptr [edi + 4]
// 008427d1  390cb2               cmp dword ptr [edx + esi*4], ecx
// 008427d4  740e                 je 0x8427e4
// 008427d6  46                   inc esi
// 008427d7  3bf0                 cmp esi, eax
// 008427d9  7cea                 jl 0x8427c5
// 008427db  5f                   pop edi
// 008427dc  5e                   pop esi
// 008427dd  83c8ff               or eax, 0xffffffff
// 008427e0  5b                   pop ebx
// 008427e1  c20400               ret 4
// 008427e4  e8f17dfcff           call 0x80a5da
// 008427e9  6a01                 push 1
// 008427eb  56                   push esi
// 008427ec  8bcf                 mov ecx, edi
// 008427ee  e88d7afeff           call 0x82a280
// 008427f3  8b03                 mov eax, dword ptr [ebx]
// 008427f5  8b5068               mov edx, dword ptr [eax + 0x68]
// 008427f8  56                   push esi
// 008427f9  8bcb                 mov ecx, ebx
// 008427fb  ffd2                 call edx
// 008427fd  5f                   pop edi
// 008427fe  8bc6                 mov eax, esi
// 00842800  5e                   pop esi
// 00842801  5b                   pop ebx
// 00842802  c20400               ret 4
// 00842805  e8007bfcff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveRecord@CXTPReportRecords@@QAEHPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp