// roc 2010-06 007e0c20  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e0c20
//
// 007e0c20  53                   push ebx
// 007e0c21  8bd9                 mov ebx, ecx
// 007e0c23  8b4328               mov eax, dword ptr [ebx + 0x28]
// 007e0c26  56                   push esi
// 007e0c27  33f6                 xor esi, esi
// 007e0c29  57                   push edi
// 007e0c2a  85c0                 test eax, eax
// 007e0c2c  7e1d                 jle 0x7e0c4b
// 007e0c2e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007e0c32  8d7b20               lea edi, [ebx + 0x20]
// 007e0c35  85f6                 test esi, esi
// 007e0c37  7c3c                 jl 0x7e0c75
// 007e0c39  3b7708               cmp esi, dword ptr [edi + 8]
// 007e0c3c  7d37                 jge 0x7e0c75
// 007e0c3e  8b5704               mov edx, dword ptr [edi + 4]
// 007e0c41  390cb2               cmp dword ptr [edx + esi*4], ecx
// 007e0c44  740e                 je 0x7e0c54
// 007e0c46  46                   inc esi
// 007e0c47  3bf0                 cmp esi, eax
// 007e0c49  7cea                 jl 0x7e0c35
// 007e0c4b  5f                   pop edi
// 007e0c4c  5e                   pop esi
// 007e0c4d  83c8ff               or eax, 0xffffffff
// 007e0c50  5b                   pop ebx
// 007e0c51  c20400               ret 4
// 007e0c54  e8c372fcff           call 0x7a7f1c
// 007e0c59  6a01                 push 1
// 007e0c5b  56                   push esi
// 007e0c5c  8bcf                 mov ecx, edi
// 007e0c5e  e8dd7dfdff           call 0x7b8a40
// 007e0c63  8b03                 mov eax, dword ptr [ebx]
// 007e0c65  8b5068               mov edx, dword ptr [eax + 0x68]
// 007e0c68  56                   push esi
// 007e0c69  8bcb                 mov ecx, ebx
// 007e0c6b  ffd2                 call edx
// 007e0c6d  5f                   pop edi
// 007e0c6e  8bc6                 mov eax, esi
// 007e0c70  5e                   pop esi
// 007e0c71  5b                   pop ebx
// 007e0c72  c20400               ret 4
// 007e0c75  e8d26ffcff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveRecord@CXTPReportRecords@@QAEHPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp