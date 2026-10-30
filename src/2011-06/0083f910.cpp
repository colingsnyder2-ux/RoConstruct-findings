// roc 2011-06 0083f910  unit: PAVCXTPReportInplaceButton::?$CArray  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083f910
//
// 0083f910  56                   push esi
// 0083f911  57                   push edi
// 0083f912  8bf9                 mov edi, ecx
// 0083f914  33f6                 xor esi, esi
// 0083f916  e8759a0200           call 0x869390
// 0083f91b  85c0                 test eax, eax
// 0083f91d  7e21                 jle 0x83f940
// 0083f91f  90                   nop 
// 0083f920  85f6                 test esi, esi
// 0083f922  7c2b                 jl 0x83f94f
// 0083f924  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0083f927  7d26                 jge 0x83f94f
// 0083f929  8b4724               mov eax, dword ptr [edi + 0x24]
// 0083f92c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0083f92f  e8a6acfcff           call 0x80a5da
// 0083f934  8bcf                 mov ecx, edi
// 0083f936  46                   inc esi
// 0083f937  e8549a0200           call 0x869390
// 0083f93c  3bf0                 cmp esi, eax
// 0083f93e  7ce0                 jl 0x83f920
// 0083f940  6aff                 push -1
// 0083f942  6a00                 push 0
// 0083f944  8d4f20               lea ecx, [edi + 0x20]
// 0083f947  e8f4f1ffff           call 0x83eb40
// 0083f94c  5f                   pop edi
// 0083f94d  5e                   pop esi
// 0083f94e  c3                   ret 
// 0083f94f  e8b6a9fcff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAll@CXTPReportRecordItemConstraints@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp