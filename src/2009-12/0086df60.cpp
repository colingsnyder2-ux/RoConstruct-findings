// roc 2009-12 0086df60  unit: CXTPReportColumnOrder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086df60
//
// 0086df60  56                   push esi
// 0086df61  57                   push edi
// 0086df62  8bf9                 mov edi, ecx
// 0086df64  8b7730               mov esi, dword ptr [edi + 0x30]
// 0086df67  83ee01               sub esi, 1
// 0086df6a  781d                 js 0x86df89
// 0086df6c  8d642400             lea esp, [esp]
// 0086df70  85f6                 test esi, esi
// 0086df72  7c33                 jl 0x86dfa7
// 0086df74  3b7730               cmp esi, dword ptr [edi + 0x30]
// 0086df77  7d2e                 jge 0x86dfa7
// 0086df79  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0086df7c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0086df7f  e8585ef8ff           call 0x7f3ddc
// 0086df84  83ee01               sub esi, 1
// 0086df87  79e7                 jns 0x86df70
// 0086df89  6aff                 push -1
// 0086df8b  6a00                 push 0
// 0086df8d  8d4f28               lea ecx, [edi + 0x28]
// 0086df90  e80b74feff           call 0x8553a0
// 0086df95  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0086df98  e883fcffff           call 0x86dc20
// 0086df9d  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0086dfa0  5f                   pop edi
// 0086dfa1  5e                   pop esi
// 0086dfa2  e979fcffff           jmp 0x86dc20
// 0086dfa7  e8605bf8ff           call 0x7f3b0c
// copied from an identical function in another client (function ?Clear@CXTPReportColumns@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportColumns.cpp