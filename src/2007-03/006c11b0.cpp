// roc 2007-03 006c11b0  unit: seg_006c0000  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c11b0
//
// 006c11b0  83ec14               sub esp, 0x14
// 006c11b3  53                   push ebx
// 006c11b4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006c11b8  55                   push ebp
// 006c11b9  56                   push esi
// 006c11ba  8bf1                 mov esi, ecx
// 006c11bc  57                   push edi
// 006c11bd  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 006c11c1  8d6e60               lea ebp, [esi + 0x60]
// 006c11c4  c744241004000000     mov dword ptr [esp + 0x10], 4
// 006c11cc  8d642400             lea esp, [esp]
// 006c11d0  8b4d00               mov ecx, dword ptr [ebp]
// 006c11d3  85c9                 test ecx, ecx
// 006c11d5  7411                 je 0x6c11e8
// 006c11d7  8b01                 mov eax, dword ptr [ecx]
// 006c11d9  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 006c11df  57                   push edi
// 006c11e0  8d542430             lea edx, [esp + 0x30]
// 006c11e4  52                   push edx
// 006c11e5  53                   push ebx
// 006c11e6  ffd0                 call eax
// 006c11e8  83c504               add ebp, 4
// 006c11eb  836c241001           sub dword ptr [esp + 0x10], 1
// 006c11f0  75de                 jne 0x6c11d0
// 006c11f2  833f00               cmp dword ptr [edi], 0
// 006c11f5  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 006c11fb  8b81dc000000         mov eax, dword ptr [ecx + 0xdc]
// 006c1201  89442414             mov dword ptr [esp + 0x14], eax
// 006c1205  89442418             mov dword ptr [esp + 0x18], eax
// 006c1209  8944241c             mov dword ptr [esp + 0x1c], eax
// 006c120d  89442420             mov dword ptr [esp + 0x20], eax
// 006c1211  7413                 je 0x6c1226
// 006c1213  8d542414             lea edx, [esp + 0x14]
// 006c1217  52                   push edx
// 006c1218  8d442430             lea eax, [esp + 0x30]
// 006c121c  50                   push eax
// 006c121d  8bce                 mov ecx, esi
// 006c121f  e8bcfdffff           call 0x6c0fe0
// 006c1224  eb10                 jmp 0x6c1236
// 006c1226  0144242c             add dword ptr [esp + 0x2c], eax
// 006c122a  01442430             add dword ptr [esp + 0x30], eax
// 006c122e  29442434             sub dword ptr [esp + 0x34], eax
// 006c1232  29442438             sub dword ptr [esp + 0x38], eax
// 006c1236  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 006c123a  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006c123d  8b11                 mov edx, dword ptr [ecx]
// 006c123f  57                   push edi
// 006c1240  83ec10               sub esp, 0x10
// 006c1243  8bc4                 mov eax, esp
// 006c1245  8928                 mov dword ptr [eax], ebp
// 006c1247  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 006c124b  896804               mov dword ptr [eax + 4], ebp
// 006c124e  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 006c1252  896808               mov dword ptr [eax + 8], ebp
// 006c1255  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 006c1259  89680c               mov dword ptr [eax + 0xc], ebp
// 006c125c  8b4224               mov eax, dword ptr [edx + 0x24]
// 006c125f  53                   push ebx
// 006c1260  ffd0                 call eax
// 006c1262  8b7620               mov esi, dword ptr [esi + 0x20]
// 006c1265  8b5620               mov edx, dword ptr [esi + 0x20]
// 006c1268  8d4e20               lea ecx, [esi + 0x20]
// 006c126b  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006c126f  57                   push edi
// 006c1270  83ec10               sub esp, 0x10
// 006c1273  8bc4                 mov eax, esp
// 006c1275  8930                 mov dword ptr [eax], esi
// 006c1277  8b742444             mov esi, dword ptr [esp + 0x44]
// 006c127b  897004               mov dword ptr [eax + 4], esi
// 006c127e  8b742448             mov esi, dword ptr [esp + 0x48]
// 006c1282  897008               mov dword ptr [eax + 8], esi
// 006c1285  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 006c1289  89700c               mov dword ptr [eax + 0xc], esi
// 006c128c  8b4224               mov eax, dword ptr [edx + 0x24]
// 006c128f  53                   push ebx
// 006c1290  ffd0                 call eax
// 006c1292  5f                   pop edi
// 006c1293  5e                   pop esi
// 006c1294  5d                   pop ebp
// 006c1295  5b                   pop ebx
// 006c1296  83c414               add esp, 0x14
// 006c1299  c21800               ret 0x18
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?OnSizeParent@CXTPDockingPaneLayout@@AAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
