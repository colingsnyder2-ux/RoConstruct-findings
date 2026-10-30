// roc 2010-06 00820cf0  unit: CXTPReportColumnOrder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00820cf0
//
// 00820cf0  56                   push esi
// 00820cf1  57                   push edi
// 00820cf2  8bf9                 mov edi, ecx
// 00820cf4  8b7730               mov esi, dword ptr [edi + 0x30]
// 00820cf7  83ee01               sub esi, 1
// 00820cfa  781d                 js 0x820d19
// 00820cfc  8d642400             lea esp, [esp]
// 00820d00  85f6                 test esi, esi
// 00820d02  7c33                 jl 0x820d37
// 00820d04  3b7730               cmp esi, dword ptr [edi + 0x30]
// 00820d07  7d2e                 jge 0x820d37
// 00820d09  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00820d0c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00820d0f  e80872f8ff           call 0x7a7f1c
// 00820d14  83ee01               sub esi, 1
// 00820d17  79e7                 jns 0x820d00
// 00820d19  6aff                 push -1
// 00820d1b  6a00                 push 0
// 00820d1d  8d4f28               lea ecx, [edi + 0x28]
// 00820d20  e8db05fcff           call 0x7e1300
// 00820d25  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00820d28  e883fcffff           call 0x8209b0
// 00820d2d  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00820d30  5f                   pop edi
// 00820d31  5e                   pop esi
// 00820d32  e979fcffff           jmp 0x8209b0
// 00820d37  e8106ff8ff           call 0x7a7c4c
// copied from an identical function in another client (function ?Clear@CXTPReportColumns@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportColumns.cpp