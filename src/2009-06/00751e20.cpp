// roc 2009-06 00751e20  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00751e20
//
// 00751e20  53                   push ebx
// 00751e21  8bd9                 mov ebx, ecx
// 00751e23  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00751e26  56                   push esi
// 00751e27  33f6                 xor esi, esi
// 00751e29  57                   push edi
// 00751e2a  85c0                 test eax, eax
// 00751e2c  7e1d                 jle 0x751e4b
// 00751e2e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00751e32  8d7b20               lea edi, [ebx + 0x20]
// 00751e35  85f6                 test esi, esi
// 00751e37  7c3c                 jl 0x751e75
// 00751e39  3b7708               cmp esi, dword ptr [edi + 8]
// 00751e3c  7d37                 jge 0x751e75
// 00751e3e  8b5704               mov edx, dword ptr [edi + 4]
// 00751e41  390cb2               cmp dword ptr [edx + esi*4], ecx
// 00751e44  740e                 je 0x751e54
// 00751e46  46                   inc esi
// 00751e47  3bf0                 cmp esi, eax
// 00751e49  7cea                 jl 0x751e35
// 00751e4b  5f                   pop edi
// 00751e4c  5e                   pop esi
// 00751e4d  83c8ff               or eax, 0xffffffff
// 00751e50  5b                   pop ebx
// 00751e51  c20400               ret 4
// 00751e54  e84f71fcff           call 0x718fa8
// 00751e59  6a01                 push 1
// 00751e5b  56                   push esi
// 00751e5c  8bcf                 mov ecx, edi
// 00751e5e  e8fd070000           call 0x752660
// 00751e63  8b03                 mov eax, dword ptr [ebx]
// 00751e65  8b5068               mov edx, dword ptr [eax + 0x68]
// 00751e68  56                   push esi
// 00751e69  8bcb                 mov ecx, ebx
// 00751e6b  ffd2                 call edx
// 00751e6d  5f                   pop edi
// 00751e6e  8bc6                 mov eax, esi
// 00751e70  5e                   pop esi
// 00751e71  5b                   pop ebx
// 00751e72  c20400               ret 4
// 00751e75  e86a6efcff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveRecord@CXTPReportRecords@@QAEHPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp