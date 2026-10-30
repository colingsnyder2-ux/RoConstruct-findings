// roc 2009-06 00792f40  unit: CXTPReportColumnOrder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00792f40
//
// 00792f40  56                   push esi
// 00792f41  57                   push edi
// 00792f42  8bf9                 mov edi, ecx
// 00792f44  8b7730               mov esi, dword ptr [edi + 0x30]
// 00792f47  83ee01               sub esi, 1
// 00792f4a  781d                 js 0x792f69
// 00792f4c  8d642400             lea esp, [esp]
// 00792f50  85f6                 test esi, esi
// 00792f52  7c33                 jl 0x792f87
// 00792f54  3b7730               cmp esi, dword ptr [edi + 0x30]
// 00792f57  7d2e                 jge 0x792f87
// 00792f59  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00792f5c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00792f5f  e84460f8ff           call 0x718fa8
// 00792f64  83ee01               sub esi, 1
// 00792f67  79e7                 jns 0x792f50
// 00792f69  6aff                 push -1
// 00792f6b  6a00                 push 0
// 00792f6d  8d4f28               lea ecx, [edi + 0x28]
// 00792f70  e89bf5fbff           call 0x752510
// 00792f75  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00792f78  e883fcffff           call 0x792c00
// 00792f7d  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00792f80  5f                   pop edi
// 00792f81  5e                   pop esi
// 00792f82  e979fcffff           jmp 0x792c00
// 00792f87  e8585df8ff           call 0x718ce4
// copied from an identical function in another client (function ?Clear@CXTPReportColumns@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportColumns.cpp