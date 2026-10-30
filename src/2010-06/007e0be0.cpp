// roc 2010-06 007e0be0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e0be0
//
// 007e0be0  56                   push esi
// 007e0be1  57                   push edi
// 007e0be2  8bf9                 mov edi, ecx
// 007e0be4  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 007e0be8  7521                 jne 0x7e0c0b
// 007e0bea  8b7728               mov esi, dword ptr [edi + 0x28]
// 007e0bed  83ee01               sub esi, 1
// 007e0bf0  7819                 js 0x7e0c0b
// 007e0bf2  85f6                 test esi, esi
// 007e0bf4  7c24                 jl 0x7e0c1a
// 007e0bf6  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007e0bf9  7d1f                 jge 0x7e0c1a
// 007e0bfb  8b4724               mov eax, dword ptr [edi + 0x24]
// 007e0bfe  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007e0c01  e81673fcff           call 0x7a7f1c
// 007e0c06  83ee01               sub esi, 1
// 007e0c09  79e7                 jns 0x7e0bf2
// 007e0c0b  6aff                 push -1
// 007e0c0d  6a00                 push 0
// 007e0c0f  8d4f20               lea ecx, [edi + 0x20]
// 007e0c12  e8e9060000           call 0x7e1300
// 007e0c17  5f                   pop edi
// 007e0c18  5e                   pop esi
// 007e0c19  c3                   ret 
// 007e0c1a  e82d70fcff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAll@CXTPReportRecords@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp