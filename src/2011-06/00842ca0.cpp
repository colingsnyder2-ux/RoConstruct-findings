// roc 2011-06 00842ca0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00842ca0
//
// 00842ca0  56                   push esi
// 00842ca1  8b742408             mov esi, dword ptr [esp + 8]
// 00842ca5  57                   push edi
// 00842ca6  8bf9                 mov edi, ecx
// 00842ca8  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00842cab  7d2d                 jge 0x842cda
// 00842cad  53                   push ebx
// 00842cae  8d5f20               lea ebx, [edi + 0x20]
// 00842cb1  85f6                 test esi, esi
// 00842cb3  7c2a                 jl 0x842cdf
// 00842cb5  3b7308               cmp esi, dword ptr [ebx + 8]
// 00842cb8  7d25                 jge 0x842cdf
// 00842cba  8b4304               mov eax, dword ptr [ebx + 4]
// 00842cbd  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00842cc0  e81579fcff           call 0x80a5da
// 00842cc5  6a01                 push 1
// 00842cc7  56                   push esi
// 00842cc8  8bcb                 mov ecx, ebx
// 00842cca  e8b175feff           call 0x82a280
// 00842ccf  8b17                 mov edx, dword ptr [edi]
// 00842cd1  8b4268               mov eax, dword ptr [edx + 0x68]
// 00842cd4  56                   push esi
// 00842cd5  8bcf                 mov ecx, edi
// 00842cd7  ffd0                 call eax
// 00842cd9  5b                   pop ebx
// 00842cda  5f                   pop edi
// 00842cdb  5e                   pop esi
// 00842cdc  c20400               ret 4
// 00842cdf  e82676fcff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAt@CXTPReportRecords@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp