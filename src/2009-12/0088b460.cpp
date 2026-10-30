// roc 2009-12 0088b460  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b460
//
// 0088b460  8b442404             mov eax, dword ptr [esp + 4]
// 0088b464  56                   push esi
// 0088b465  50                   push eax
// 0088b466  8bf1                 mov esi, ecx
// 0088b468  e8d3ecf6ff           call 0x7fa140
// 0088b46d  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0088b470  8b11                 mov edx, dword ptr [ecx]
// 0088b472  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 0088b478  ffd0                 call eax
// 0088b47a  5e                   pop esi
// 0088b47b  c20400               ret 4
// copied from an identical function in another client (function ?OnKillFocus@CXTPControlEditCtrl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp