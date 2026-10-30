// roc 2009-12 008283a0  unit: CXTPReportColumn  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008283a0
//
// 008283a0  56                   push esi
// 008283a1  57                   push edi
// 008283a2  e879ffffff           call 0x828320
// 008283a7  8bf0                 mov esi, eax
// 008283a9  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008283ac  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008283af  e8bcd4caff           call 0x4d5870
// 008283b4  8b16                 mov edx, dword ptr [esi]
// 008283b6  8bf8                 mov edi, eax
// 008283b8  8b4268               mov eax, dword ptr [edx + 0x68]
// 008283bb  8bce                 mov ecx, esi
// 008283bd  ffd0                 call eax
// 008283bf  83c0fd               add eax, -3
// 008283c2  99                   cdq 
// 008283c3  2bc2                 sub eax, edx
// 008283c5  8bc8                 mov ecx, eax
// 008283c7  d1f9                 sar ecx, 1
// 008283c9  8d4701               lea eax, [edi + 1]
// 008283cc  0fafc1               imul eax, ecx
// 008283cf  83c00f               add eax, 0xf
// 008283d2  85ff                 test edi, edi
// 008283d4  5f                   pop edi
// 008283d5  5e                   pop esi
// 008283d6  7502                 jne 0x8283da
// 008283d8  03c1                 add eax, ecx
// 008283da  c3                   ret 
// copied from an identical function in another client (function ?GetGroupByHeight@CXTPReportHeader@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHeader.cpp