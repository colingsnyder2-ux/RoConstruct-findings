// roc 2007-08 006b1250  unit: CXTPRibbonTheme  size: 431 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b1250
//
// 006b1250  83ec40               sub esp, 0x40
// 006b1253  53                   push ebx
// 006b1254  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 006b1258  85db                 test ebx, ebx
// 006b125a  55                   push ebp
// 006b125b  56                   push esi
// 006b125c  57                   push edi
// 006b125d  8bf9                 mov edi, ecx
// 006b125f  b83c5e7d00           mov eax, 0x7d5e3c
// 006b1264  7505                 jne 0x6b126b
// 006b1266  b8245e7d00           mov eax, 0x7d5e24
// 006b126b  50                   push eax
// 006b126c  e83f950000           call 0x6ba7b0
// 006b1271  8bf0                 mov esi, eax
// 006b1273  85f6                 test esi, esi
// 006b1275  0f847a010000         je 0x6b13f5
// 006b127b  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 006b127f  8b85c0000000         mov eax, dword ptr [ebp + 0xc0]
// 006b1285  8b95c8000000         mov edx, dword ptr [ebp + 0xc8]
// 006b128b  8b8dc4000000         mov ecx, dword ptr [ebp + 0xc4]
// 006b1291  89442410             mov dword ptr [esp + 0x10], eax
// 006b1295  8b85cc000000         mov eax, dword ptr [ebp + 0xcc]
// 006b129b  89542418             mov dword ptr [esp + 0x18], edx
// 006b129f  8b5500               mov edx, dword ptr [ebp]
// 006b12a2  894c2414             mov dword ptr [esp + 0x14], ecx
// 006b12a6  8944241c             mov dword ptr [esp + 0x1c], eax
// 006b12aa  8b4278               mov eax, dword ptr [edx + 0x78]
// 006b12ad  8bcd                 mov ecx, ebp
// 006b12af  ffd0                 call eax
// 006b12b1  85c0                 test eax, eax
// 006b12b3  7407                 je 0x6b12bc
// 006b12b5  bd02000000           mov ebp, 2
// 006b12ba  eb12                 jmp 0x6b12ce
// 006b12bc  8b5500               mov edx, dword ptr [ebp]
// 006b12bf  8b426c               mov eax, dword ptr [edx + 0x6c]
// 006b12c2  8bcd                 mov ecx, ebp
// 006b12c4  ffd0                 call eax
// 006b12c6  8be8                 mov ebp, eax
// 006b12c8  f7dd                 neg ebp
// 006b12ca  1bed                 sbb ebp, ebp
// 006b12cc  f7dd                 neg ebp
// 006b12ce  85db                 test ebx, ebx
// 006b12d0  b8085e7d00           mov eax, 0x7d5e08
// 006b12d5  7505                 jne 0x6b12dc
// 006b12d7  b8e85d7d00           mov eax, 0x7d5de8
// 006b12dc  50                   push eax
// 006b12dd  8bcf                 mov ecx, edi
// 006b12df  e8cc940000           call 0x6ba7b0
// 006b12e4  6a03                 push 3
// 006b12e6  55                   push ebp
// 006b12e7  8d4c2448             lea ecx, [esp + 0x48]
// 006b12eb  8bd8                 mov ebx, eax
// 006b12ed  b806000000           mov eax, 6
// 006b12f2  51                   push ecx
// 006b12f3  8bce                 mov ecx, esi
// 006b12f5  c7462c01000000       mov dword ptr [esi + 0x2c], 1
// 006b12fc  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 006b1304  89442430             mov dword ptr [esp + 0x30], eax
// 006b1308  c744243403000000     mov dword ptr [esp + 0x34], 3
// 006b1310  89442438             mov dword ptr [esp + 0x38], eax
// 006b1314  e8c7ec0500           call 0x70ffe0
// 006b1319  68ff00ff00           push 0xff00ff
// 006b131e  8d542424             lea edx, [esp + 0x24]
// 006b1322  52                   push edx
// 006b1323  8b10                 mov edx, dword ptr [eax]
// 006b1325  83ec10               sub esp, 0x10
// 006b1328  8bcc                 mov ecx, esp
// 006b132a  8911                 mov dword ptr [ecx], edx
// 006b132c  8b5004               mov edx, dword ptr [eax + 4]
// 006b132f  895104               mov dword ptr [ecx + 4], edx
// 006b1332  8b5008               mov edx, dword ptr [eax + 8]
// 006b1335  8b400c               mov eax, dword ptr [eax + 0xc]
// 006b1338  895108               mov dword ptr [ecx + 8], edx
// 006b133b  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 006b133f  89410c               mov dword ptr [ecx + 0xc], eax
// 006b1342  8d4c2428             lea ecx, [esp + 0x28]
// 006b1346  51                   push ecx
// 006b1347  52                   push edx
// 006b1348  8bce                 mov ecx, esi
// 006b134a  e8d1f10500           call 0x710520
// 006b134f  6a03                 push 3
// 006b1351  6a00                 push 0
// 006b1353  8d442448             lea eax, [esp + 0x48]
// 006b1357  50                   push eax
// 006b1358  8bcb                 mov ecx, ebx
// 006b135a  e881ec0500           call 0x70ffe0
// 006b135f  8b4808               mov ecx, dword ptr [eax + 8]
// 006b1362  2b08                 sub ecx, dword ptr [eax]
// 006b1364  8b700c               mov esi, dword ptr [eax + 0xc]
// 006b1367  2b7004               sub esi, dword ptr [eax + 4]
// 006b136a  8b442410             mov eax, dword ptr [esp + 0x10]
// 006b136e  2bc1                 sub eax, ecx
// 006b1370  03442418             add eax, dword ptr [esp + 0x18]
// 006b1374  6a03                 push 3
// 006b1376  99                   cdq 
// 006b1377  2bc2                 sub eax, edx
// 006b1379  8bf8                 mov edi, eax
// 006b137b  8b442420             mov eax, dword ptr [esp + 0x20]
// 006b137f  2bc6                 sub eax, esi
// 006b1381  03442418             add eax, dword ptr [esp + 0x18]
// 006b1385  d1ff                 sar edi, 1
// 006b1387  99                   cdq 
// 006b1388  2bc2                 sub eax, edx
// 006b138a  d1f8                 sar eax, 1
// 006b138c  89442438             mov dword ptr [esp + 0x38], eax
// 006b1390  897c2434             mov dword ptr [esp + 0x34], edi
// 006b1394  03f9                 add edi, ecx
// 006b1396  03c6                 add eax, esi
// 006b1398  55                   push ebp
// 006b1399  8d4c2448             lea ecx, [esp + 0x48]
// 006b139d  89442444             mov dword ptr [esp + 0x44], eax
// 006b13a1  33c0                 xor eax, eax
// 006b13a3  51                   push ecx
// 006b13a4  8bcb                 mov ecx, ebx
// 006b13a6  897c2444             mov dword ptr [esp + 0x44], edi
// 006b13aa  8944242c             mov dword ptr [esp + 0x2c], eax
// 006b13ae  89442430             mov dword ptr [esp + 0x30], eax
// 006b13b2  89442434             mov dword ptr [esp + 0x34], eax
// 006b13b6  89442438             mov dword ptr [esp + 0x38], eax
// 006b13ba  e821ec0500           call 0x70ffe0
// 006b13bf  68ff00ff00           push 0xff00ff
// 006b13c4  8d542424             lea edx, [esp + 0x24]
// 006b13c8  52                   push edx
// 006b13c9  8b10                 mov edx, dword ptr [eax]
// 006b13cb  83ec10               sub esp, 0x10
// 006b13ce  8bcc                 mov ecx, esp
// 006b13d0  8911                 mov dword ptr [ecx], edx
// 006b13d2  8b5004               mov edx, dword ptr [eax + 4]
// 006b13d5  895104               mov dword ptr [ecx + 4], edx
// 006b13d8  8b5008               mov edx, dword ptr [eax + 8]
// 006b13db  8b400c               mov eax, dword ptr [eax + 0xc]
// 006b13de  895108               mov dword ptr [ecx + 8], edx
// 006b13e1  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 006b13e5  89410c               mov dword ptr [ecx + 0xc], eax
// 006b13e8  8d4c2448             lea ecx, [esp + 0x48]
// 006b13ec  51                   push ecx
// 006b13ed  52                   push edx
// 006b13ee  8bcb                 mov ecx, ebx
// 006b13f0  e82bf10500           call 0x710520
// 006b13f5  5f                   pop edi
// 006b13f6  5e                   pop esi
// 006b13f7  5d                   pop ebp
// 006b13f8  5b                   pop ebx
// 006b13f9  83c440               add esp, 0x40
// 006b13fc  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonScrollButton@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp