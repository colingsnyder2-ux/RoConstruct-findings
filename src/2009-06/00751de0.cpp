// roc 2009-06 00751de0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00751de0
//
// 00751de0  56                   push esi
// 00751de1  57                   push edi
// 00751de2  8bf9                 mov edi, ecx
// 00751de4  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 00751de8  7521                 jne 0x751e0b
// 00751dea  8b7728               mov esi, dword ptr [edi + 0x28]
// 00751ded  83ee01               sub esi, 1
// 00751df0  7819                 js 0x751e0b
// 00751df2  85f6                 test esi, esi
// 00751df4  7c24                 jl 0x751e1a
// 00751df6  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00751df9  7d1f                 jge 0x751e1a
// 00751dfb  8b4724               mov eax, dword ptr [edi + 0x24]
// 00751dfe  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00751e01  e8a271fcff           call 0x718fa8
// 00751e06  83ee01               sub esi, 1
// 00751e09  79e7                 jns 0x751df2
// 00751e0b  6aff                 push -1
// 00751e0d  6a00                 push 0
// 00751e0f  8d4f20               lea ecx, [edi + 0x20]
// 00751e12  e8f9060000           call 0x752510
// 00751e17  5f                   pop edi
// 00751e18  5e                   pop esi
// 00751e19  c3                   ret 
// 00751e1a  e8c56efcff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveAll@CXTPReportRecords@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp