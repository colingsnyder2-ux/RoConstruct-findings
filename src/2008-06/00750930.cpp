// roc 2008-06 00750930  unit: CXTPReportGroupRow  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750930
//
// 00750930  56                   push esi
// 00750931  8bf1                 mov esi, ecx
// 00750933  8d4e74               lea ecx, [esi + 0x74]
// 00750936  ff15143f8000         call dword ptr [0x803f14]
// 0075093c  8bce                 mov ecx, esi
// 0075093e  e85d000000           call 0x7509a0
// 00750943  f644240801           test byte ptr [esp + 8], 1
// 00750948  742c                 je 0x750976
// 0075094a  833d24e1970000       cmp dword ptr [0x97e124], 0
// 00750951  740f                 je 0x750962
// 00750953  56                   push esi
// 00750954  e857abf7ff           call 0x6cb4b0
// 00750959  83c404               add esp, 4
// 0075095c  8bc6                 mov eax, esi
// 0075095e  5e                   pop esi
// 0075095f  c20400               ret 4
// 00750962  681ce19700           push 0x97e11c
// 00750967  ff15ac218000         call dword ptr [0x8021ac]
// 0075096d  56                   push esi
// 0075096e  e807fdf4ff           call 0x6a067a
// 00750973  83c404               add esp, 4
// 00750976  8bc6                 mov eax, esi
// 00750978  5e                   pop esi
// 00750979  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportGroupRow.cpp (function ??_GCXTPReportGroupRow@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportGroupRow.cpp
