// roc 2009-12 00821560  unit: CXTPReportControl  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00821560
//
// 00821560  56                   push esi
// 00821561  8bf1                 mov esi, ecx
// 00821563  e844511000           call 0x9266ac
// 00821568  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0082156e  8b01                 mov eax, dword ptr [ecx]
// 00821570  8b5058               mov edx, dword ptr [eax + 0x58]
// 00821573  ffd2                 call edx
// 00821575  8bce                 mov ecx, esi
// 00821577  5e                   pop esi
// 00821578  e903dfffff           jmp 0x81f480
// copied from an identical function in another client (function ?OnSysColorChange@CXTPReportControl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp