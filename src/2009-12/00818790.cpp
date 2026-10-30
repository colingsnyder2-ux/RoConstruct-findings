// roc 2009-12 00818790  unit: CXTPPrintingDialog  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00818790
//
// 00818790  8b442404             mov eax, dword ptr [esp + 4]
// 00818794  56                   push esi
// 00818795  50                   push eax
// 00818796  8bf1                 mov esi, ecx
// 00818798  e8f1befdff           call 0x7f468e
// 0081879d  8b16                 mov edx, dword ptr [esi]
// 0081879f  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 008187a5  8bce                 mov ecx, esi
// 008187a7  ffd0                 call eax
// 008187a9  85c0                 test eax, eax
// 008187ab  7403                 je 0x8187b0
// 008187ad  8b4020               mov eax, dword ptr [eax + 0x20]
// 008187b0  50                   push eax
// 008187b1  ff1584cc9800         call dword ptr [0x98cc84]
// 008187b7  85c0                 test eax, eax
// 008187b9  7413                 je 0x8187ce
// 008187bb  8b16                 mov edx, dword ptr [esi]
// 008187bd  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 008187c3  8bce                 mov ecx, esi
// 008187c5  ffd0                 call eax
// 008187c7  8bc8                 mov ecx, eax
// 008187c9  e834b4fdff           call 0x7f3c02
// 008187ce  5e                   pop esi
// 008187cf  c20400               ret 4
// copied from an identical function in another client (function ?OnSetFocus@CXTPReportView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp