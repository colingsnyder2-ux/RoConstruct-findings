// roc 2010-06 007cf360  unit: PAVCXTPReportInplaceButton::?$CArray  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cf360
//
// 007cf360  56                   push esi
// 007cf361  57                   push edi
// 007cf362  8bf9                 mov edi, ecx
// 007cf364  33f6                 xor esi, esi
// 007cf366  e835eeffff           call 0x7ce1a0
// 007cf36b  85c0                 test eax, eax
// 007cf36d  7e21                 jle 0x7cf390
// 007cf36f  90                   nop 
// 007cf370  85f6                 test esi, esi
// 007cf372  7c2b                 jl 0x7cf39f
// 007cf374  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007cf377  7d26                 jge 0x7cf39f
// 007cf379  8b4724               mov eax, dword ptr [edi + 0x24]
// 007cf37c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007cf37f  e8988bfdff           call 0x7a7f1c
// 007cf384  8bcf                 mov ecx, edi
// 007cf386  46                   inc esi
// 007cf387  e814eeffff           call 0x7ce1a0
// 007cf38c  3bf0                 cmp esi, eax
// 007cf38e  7ce0                 jl 0x7cf370
// 007cf390  6aff                 push -1
// 007cf392  6a00                 push 0
// 007cf394  8d4f20               lea ecx, [edi + 0x20]
// 007cf397  e8641f0100           call 0x7e1300
// 007cf39c  5f                   pop edi
// 007cf39d  5e                   pop esi
// 007cf39e  c3                   ret 
// 007cf39f  e8a888fdff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAll@CXTPReportRecordItemConstraints@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp