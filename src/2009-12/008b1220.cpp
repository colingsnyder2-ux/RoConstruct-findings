// roc 2009-12 008b1220  unit: CXTPDockingPaneTabbedContainer  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1220
//
// 008b1220  53                   push ebx
// 008b1221  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008b1225  56                   push esi
// 008b1226  57                   push edi
// 008b1227  85db                 test ebx, ebx
// 008b1229  7466                 je 0x8b1291
// 008b122b  83c1ac               add ecx, -0x54
// 008b122e  e81df6ffff           call 0x8b0850
// 008b1233  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 008b1239  83782400             cmp dword ptr [eax + 0x24], 0
// 008b123d  7508                 jne 0x8b1247
// 008b123f  33c0                 xor eax, eax
// 008b1241  5f                   pop edi
// 008b1242  5e                   pop esi
// 008b1243  5b                   pop ebx
// 008b1244  c21800               ret 0x18
// 008b1247  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 008b124a  8b742424             mov esi, dword ptr [esp + 0x24]
// 008b124e  8b11                 mov edx, dword ptr [ecx]
// 008b1250  8b06                 mov eax, dword ptr [esi]
// 008b1252  8b5264               mov edx, dword ptr [edx + 0x64]
// 008b1255  50                   push eax
// 008b1256  ffd2                 call edx
// 008b1258  85c0                 test eax, eax
// 008b125a  74e3                 je 0x8b123f
// 008b125c  837c242000           cmp dword ptr [esp + 0x20], 0
// 008b1261  742e                 je 0x8b1291
// 008b1263  8b0e                 mov ecx, dword ptr [esi]
// 008b1265  8b542414             mov edx, dword ptr [esp + 0x14]
// 008b1269  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008b126d  8b7604               mov esi, dword ptr [esi + 4]
// 008b1270  50                   push eax
// 008b1271  83ec10               sub esp, 0x10
// 008b1274  8bc4                 mov eax, esp
// 008b1276  8910                 mov dword ptr [eax], edx
// 008b1278  03ca                 add ecx, edx
// 008b127a  897804               mov dword ptr [eax + 4], edi
// 008b127d  894808               mov dword ptr [eax + 8], ecx
// 008b1280  03f7                 add esi, edi
// 008b1282  89700c               mov dword ptr [eax + 0xc], esi
// 008b1285  8b442424             mov eax, dword ptr [esp + 0x24]
// 008b1289  50                   push eax
// 008b128a  8bcb                 mov ecx, ebx
// 008b128c  e88fd40100           call 0x8ce720
// 008b1291  5f                   pop edi
// 008b1292  5e                   pop esi
// 008b1293  b801000000           mov eax, 1
// 008b1298  5b                   pop ebx
// 008b1299  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawIcon@CXTPDockingPaneTabbedContainer@@MBEHPAVCDC@@VCPoint@@PAVCXTPTabManagerItem@@HAAVCSize@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp