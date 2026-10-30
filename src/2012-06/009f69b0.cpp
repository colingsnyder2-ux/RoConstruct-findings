// roc 2012-06 009f69b0  unit: CXTPReportColumnOrder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f69b0
//
// 009f69b0  56                   push esi
// 009f69b1  57                   push edi
// 009f69b2  8bf9                 mov edi, ecx
// 009f69b4  8b7730               mov esi, dword ptr [edi + 0x30]
// 009f69b7  83ee01               sub esi, 1
// 009f69ba  781d                 js 0x9f69d9
// 009f69bc  8d642400             lea esp, [esp]
// 009f69c0  85f6                 test esi, esi
// 009f69c2  7c33                 jl 0x9f69f7
// 009f69c4  3b7730               cmp esi, dword ptr [edi + 0x30]
// 009f69c7  7d2e                 jge 0x9f69f7
// 009f69c9  8b472c               mov eax, dword ptr [edi + 0x2c]
// 009f69cc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009f69cf  e8b6bcf8ff           call 0x98268a
// 009f69d4  83ee01               sub esi, 1
// 009f69d7  79e7                 jns 0x9f69c0
// 009f69d9  6aff                 push -1
// 009f69db  6a00                 push 0
// 009f69dd  8d4f28               lea ecx, [edi + 0x28]
// 009f69e0  e87b18faff           call 0x998260
// 009f69e5  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 009f69e8  e883fcffff           call 0x9f6670
// 009f69ed  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 009f69f0  5f                   pop edi
// 009f69f1  5e                   pop esi
// 009f69f2  e979fcffff           jmp 0x9f6670
// 009f69f7  e8c4b9f8ff           call 0x9823c0
// copied from an identical function in another client (function ?Clear@CXTPReportColumns@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportColumns.cpp