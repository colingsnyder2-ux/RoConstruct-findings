// roc 2009-12 00865d10  unit: CXTPPropertyGridItemConstraint  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865d10
//
// 00865d10  56                   push esi
// 00865d11  8bf1                 mov esi, ecx
// 00865d13  8d4e20               lea ecx, [esi + 0x20]
// 00865d16  ff15c0de9800         call dword ptr [0x98dec0]
// 00865d1c  8bce                 mov ecx, esi
// 00865d1e  e8bfe6f8ff           call 0x7f43e2
// 00865d23  f644240801           test byte ptr [esp + 8], 1
// 00865d28  7409                 je 0x865d33
// 00865d2a  56                   push esi
// 00865d2b  e82adbf8ff           call 0x7f385a
// 00865d30  83c404               add esp, 4
// 00865d33  8bc6                 mov eax, esi
// 00865d35  5e                   pop esi
// 00865d36  c20400               ret 4
// copied from an identical function in another client (function ??_GCXTPReportRecordItemConstraint@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp