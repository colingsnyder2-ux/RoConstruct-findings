// roc 2009-12 0086d6d0  unit: PAVCXTPReportColumn::?$CArray  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086d6d0
//
// 0086d6d0  8b442404             mov eax, dword ptr [esp + 4]
// 0086d6d4  56                   push esi
// 0086d6d5  8bf1                 mov esi, ecx
// 0086d6d7  8d4e28               lea ecx, [esi + 0x28]
// 0086d6da  50                   push eax
// 0086d6db  897058               mov dword ptr [eax + 0x58], esi
// 0086d6de  8b4108               mov eax, dword ptr [ecx + 8]
// 0086d6e1  50                   push eax
// 0086d6e2  e889d5ffff           call 0x86ac70
// 0086d6e7  8bce                 mov ecx, esi
// 0086d6e9  e8c2fcffff           call 0x86d3b0
// 0086d6ee  8b10                 mov edx, dword ptr [eax]
// 0086d6f0  8bc8                 mov ecx, eax
// 0086d6f2  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 0086d6f8  ffd0                 call eax
// 0086d6fa  5e                   pop esi
// 0086d6fb  c20400               ret 4
// copied from an identical function in another client (function ?Add@CXTPReportColumns@@QAEXPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportColumns.cpp