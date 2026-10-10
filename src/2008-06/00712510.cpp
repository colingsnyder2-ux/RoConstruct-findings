// roc 2008-06 00712510  unit: CXTPPropertyGridItemConstraint  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00712510
//
// 00712510  56                   push esi
// 00712511  8bf1                 mov esi, ecx
// 00712513  8d4e20               lea ecx, [esi + 0x20]
// 00712516  ff15143f8000         call dword ptr [0x803f14]
// 0071251c  8bce                 mov ecx, esi
// 0071251e  e813ecf8ff           call 0x6a1136
// 00712523  f644240801           test byte ptr [esp + 8], 1
// 00712528  7409                 je 0x712533
// 0071252a  56                   push esi
// 0071252b  e84ae1f8ff           call 0x6a067a
// 00712530  83c404               add esp, 4
// 00712533  8bc6                 mov eax, esi
// 00712535  5e                   pop esi
// 00712536  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGrid.cpp (function ??_GCXTPPropertyGridVerb@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp
