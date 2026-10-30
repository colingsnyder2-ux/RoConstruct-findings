// roc 2011-06 0087e400  unit: CXTPReportColumnOrder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087e400
//
// 0087e400  56                   push esi
// 0087e401  57                   push edi
// 0087e402  8bf9                 mov edi, ecx
// 0087e404  8b7730               mov esi, dword ptr [edi + 0x30]
// 0087e407  83ee01               sub esi, 1
// 0087e40a  781d                 js 0x87e429
// 0087e40c  8d642400             lea esp, [esp]
// 0087e410  85f6                 test esi, esi
// 0087e412  7c33                 jl 0x87e447
// 0087e414  3b7730               cmp esi, dword ptr [edi + 0x30]
// 0087e417  7d2e                 jge 0x87e447
// 0087e419  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0087e41c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0087e41f  e8b6c1f8ff           call 0x80a5da
// 0087e424  83ee01               sub esi, 1
// 0087e427  79e7                 jns 0x87e410
// 0087e429  6aff                 push -1
// 0087e42b  6a00                 push 0
// 0087e42d  8d4f28               lea ecx, [edi + 0x28]
// 0087e430  e80b07fcff           call 0x83eb40
// 0087e435  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0087e438  e883fcffff           call 0x87e0c0
// 0087e43d  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0087e440  5f                   pop edi
// 0087e441  5e                   pop esi
// 0087e442  e979fcffff           jmp 0x87e0c0
// 0087e447  e8bebef8ff           call 0x80a30a
// copied from an identical function in another client (function ?Clear@CXTPReportColumns@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportColumns.cpp