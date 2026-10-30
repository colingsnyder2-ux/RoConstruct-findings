// roc 2009-12 0082cb50  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082cb50
//
// 0082cb50  56                   push esi
// 0082cb51  57                   push edi
// 0082cb52  8bf9                 mov edi, ecx
// 0082cb54  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 0082cb58  7521                 jne 0x82cb7b
// 0082cb5a  8b7728               mov esi, dword ptr [edi + 0x28]
// 0082cb5d  83ee01               sub esi, 1
// 0082cb60  7819                 js 0x82cb7b
// 0082cb62  85f6                 test esi, esi
// 0082cb64  7c24                 jl 0x82cb8a
// 0082cb66  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0082cb69  7d1f                 jge 0x82cb8a
// 0082cb6b  8b4724               mov eax, dword ptr [edi + 0x24]
// 0082cb6e  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0082cb71  e86672fcff           call 0x7f3ddc
// 0082cb76  83ee01               sub esi, 1
// 0082cb79  79e7                 jns 0x82cb62
// 0082cb7b  6aff                 push -1
// 0082cb7d  6a00                 push 0
// 0082cb7f  8d4f20               lea ecx, [edi + 0x20]
// 0082cb82  e819880200           call 0x8553a0
// 0082cb87  5f                   pop edi
// 0082cb88  5e                   pop esi
// 0082cb89  c3                   ret 
// 0082cb8a  e87d6ffcff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAll@CXTPReportRecords@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp