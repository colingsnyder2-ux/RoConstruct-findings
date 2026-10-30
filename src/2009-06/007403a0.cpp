// roc 2009-06 007403a0  unit: PAVCXTPReportInplaceButton::?$CArray  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007403a0
//
// 007403a0  56                   push esi
// 007403a1  57                   push edi
// 007403a2  8bf9                 mov edi, ecx
// 007403a4  33f6                 xor esi, esi
// 007403a6  e8757e0800           call 0x7c8220
// 007403ab  85c0                 test eax, eax
// 007403ad  7e21                 jle 0x7403d0
// 007403af  90                   nop 
// 007403b0  85f6                 test esi, esi
// 007403b2  7c2b                 jl 0x7403df
// 007403b4  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007403b7  7d26                 jge 0x7403df
// 007403b9  8b4724               mov eax, dword ptr [edi + 0x24]
// 007403bc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007403bf  e8e48bfdff           call 0x718fa8
// 007403c4  8bcf                 mov ecx, edi
// 007403c6  46                   inc esi
// 007403c7  e8547e0800           call 0x7c8220
// 007403cc  3bf0                 cmp esi, eax
// 007403ce  7ce0                 jl 0x7403b0
// 007403d0  6aff                 push -1
// 007403d2  6a00                 push 0
// 007403d4  8d4f20               lea ecx, [edi + 0x20]
// 007403d7  e834210100           call 0x752510
// 007403dc  5f                   pop edi
// 007403dd  5e                   pop esi
// 007403de  c3                   ret 
// 007403df  e80089fdff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveAll@CXTPReportRecordItemConstraints@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp