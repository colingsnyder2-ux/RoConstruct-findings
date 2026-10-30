// roc 2009-12 00829e20  unit: CXTPReportHeader  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00829e20
//
// 00829e20  56                   push esi
// 00829e21  8bf1                 mov esi, ecx
// 00829e23  8b4624               mov eax, dword ptr [esi + 0x24]
// 00829e26  8b4878               mov ecx, dword ptr [eax + 0x78]
// 00829e29  2b4870               sub ecx, dword ptr [eax + 0x70]
// 00829e2c  83c070               add eax, 0x70
// 00829e2f  6a00                 push 0
// 00829e31  51                   push ecx
// 00829e32  8bce                 mov ecx, esi
// 00829e34  e8e7ebffff           call 0x828a20
// 00829e39  8bce                 mov ecx, esi
// 00829e3b  e8e0e4ffff           call 0x828320
// 00829e40  83b8a802000000       cmp dword ptr [eax + 0x2a8], 0
// 00829e47  750d                 jne 0x829e56
// 00829e49  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00829e4c  8b11                 mov edx, dword ptr [ecx]
// 00829e4e  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 00829e54  ffd0                 call eax
// 00829e56  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00829e59  e8b226ffff           call 0x81c510
// 00829e5e  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00829e61  e81a56ffff           call 0x81f480
// 00829e66  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00829e69  6a00                 push 0
// 00829e6b  6ac9                 push -0x37
// 00829e6d  e8fe93ffff           call 0x823270
// 00829e72  5e                   pop esi
// 00829e73  c3                   ret 
// copied from an identical function in another client (function ?OnColumnsChanged@CXTPReportHeader@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHeader.cpp