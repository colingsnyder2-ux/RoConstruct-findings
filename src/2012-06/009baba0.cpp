// roc 2012-06 009baba0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009baba0
//
// 009baba0  56                   push esi
// 009baba1  57                   push edi
// 009baba2  8bf9                 mov edi, ecx
// 009baba4  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 009baba8  7521                 jne 0x9babcb
// 009babaa  8b7728               mov esi, dword ptr [edi + 0x28]
// 009babad  83ee01               sub esi, 1
// 009babb0  7819                 js 0x9babcb
// 009babb2  85f6                 test esi, esi
// 009babb4  7c24                 jl 0x9babda
// 009babb6  3b7728               cmp esi, dword ptr [edi + 0x28]
// 009babb9  7d1f                 jge 0x9babda
// 009babbb  8b4724               mov eax, dword ptr [edi + 0x24]
// 009babbe  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009babc1  e8c47afcff           call 0x98268a
// 009babc6  83ee01               sub esi, 1
// 009babc9  79e7                 jns 0x9babb2
// 009babcb  6aff                 push -1
// 009babcd  6a00                 push 0
// 009babcf  8d4f20               lea ecx, [edi + 0x20]
// 009babd2  e889d6fdff           call 0x998260
// 009babd7  5f                   pop edi
// 009babd8  5e                   pop esi
// 009babd9  c3                   ret 
// 009babda  e8e177fcff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAll@CXTPReportRecords@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp