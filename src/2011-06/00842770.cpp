// roc 2011-06 00842770  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00842770
//
// 00842770  56                   push esi
// 00842771  57                   push edi
// 00842772  8bf9                 mov edi, ecx
// 00842774  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 00842778  7521                 jne 0x84279b
// 0084277a  8b7728               mov esi, dword ptr [edi + 0x28]
// 0084277d  83ee01               sub esi, 1
// 00842780  7819                 js 0x84279b
// 00842782  85f6                 test esi, esi
// 00842784  7c24                 jl 0x8427aa
// 00842786  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00842789  7d1f                 jge 0x8427aa
// 0084278b  8b4724               mov eax, dword ptr [edi + 0x24]
// 0084278e  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00842791  e8447efcff           call 0x80a5da
// 00842796  83ee01               sub esi, 1
// 00842799  79e7                 jns 0x842782
// 0084279b  6aff                 push -1
// 0084279d  6a00                 push 0
// 0084279f  8d4f20               lea ecx, [edi + 0x20]
// 008427a2  e899c3ffff           call 0x83eb40
// 008427a7  5f                   pop edi
// 008427a8  5e                   pop esi
// 008427a9  c3                   ret 
// 008427aa  e85b7bfcff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAll@CXTPReportRecords@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp