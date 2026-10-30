// roc 2009-12 0082cfe0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082cfe0
//
// 0082cfe0  56                   push esi
// 0082cfe1  8b742408             mov esi, dword ptr [esp + 8]
// 0082cfe5  57                   push edi
// 0082cfe6  8bf9                 mov edi, ecx
// 0082cfe8  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0082cfeb  7d2d                 jge 0x82d01a
// 0082cfed  53                   push ebx
// 0082cfee  8d5f20               lea ebx, [edi + 0x20]
// 0082cff1  85f6                 test esi, esi
// 0082cff3  7c2a                 jl 0x82d01f
// 0082cff5  3b7308               cmp esi, dword ptr [ebx + 8]
// 0082cff8  7d25                 jge 0x82d01f
// 0082cffa  8b4304               mov eax, dword ptr [ebx + 4]
// 0082cffd  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0082d000  e8d76dfcff           call 0x7f3ddc
// 0082d005  6a01                 push 1
// 0082d007  56                   push esi
// 0082d008  8bcb                 mov ecx, ebx
// 0082d00a  e871020000           call 0x82d280
// 0082d00f  8b17                 mov edx, dword ptr [edi]
// 0082d011  8b4268               mov eax, dword ptr [edx + 0x68]
// 0082d014  56                   push esi
// 0082d015  8bcf                 mov ecx, edi
// 0082d017  ffd0                 call eax
// 0082d019  5b                   pop ebx
// 0082d01a  5f                   pop edi
// 0082d01b  5e                   pop esi
// 0082d01c  c20400               ret 4
// 0082d01f  e8e86afcff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAt@CXTPReportRecords@@QAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp