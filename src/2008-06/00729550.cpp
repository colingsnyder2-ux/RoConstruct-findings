// roc 2008-06 00729550  unit: CXTPRibbonTheme  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00729550
//
// 00729550  83ec60               sub esp, 0x60
// 00729553  53                   push ebx
// 00729554  55                   push ebp
// 00729555  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 00729559  56                   push esi
// 0072955a  57                   push edi
// 0072955b  8bf1                 mov esi, ecx
// 0072955d  55                   push ebp
// 0072955e  8d4c2414             lea ecx, [esp + 0x14]
// 00729562  e8c9e5fcff           call 0x6f7b30
// 00729567  8bcd                 mov ecx, ebp
// 00729569  e8b28bffff           call 0x722120
// 0072956e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00729572  85c0                 test eax, eax
// 00729574  740a                 je 0x729580
// 00729576  038ec0050000         add ecx, dword ptr [esi + 0x5c0]
// 0072957c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00729580  8b542410             mov edx, dword ptr [esp + 0x10]
// 00729584  8b8650060000         mov eax, dword ptr [esi + 0x650]
// 0072958a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0072958e  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 00729592  03c1                 add eax, ecx
// 00729594  894c2424             mov dword ptr [esp + 0x24], ecx
// 00729598  8b8e6c060000         mov ecx, dword ptr [esi + 0x66c]
// 0072959e  89542420             mov dword ptr [esp + 0x20], edx
// 007295a2  89542430             mov dword ptr [esp + 0x30], edx
// 007295a6  51                   push ecx
// 007295a7  89442430             mov dword ptr [esp + 0x30], eax
// 007295ab  89442438             mov dword ptr [esp + 0x38], eax
// 007295af  8b442420             mov eax, dword ptr [esp + 0x20]
// 007295b3  8d542424             lea edx, [esp + 0x24]
// 007295b7  52                   push edx
// 007295b8  8bcb                 mov ecx, ebx
// 007295ba  897c2430             mov dword ptr [esp + 0x30], edi
// 007295be  897c2440             mov dword ptr [esp + 0x40], edi
// 007295c2  89442444             mov dword ptr [esp + 0x44], eax
// 007295c6  e8937df7ff           call 0x6a135e
// 007295cb  8b866c060000         mov eax, dword ptr [esi + 0x66c]
// 007295d1  50                   push eax
// 007295d2  8d4c2434             lea ecx, [esp + 0x34]
// 007295d6  51                   push ecx
// 007295d7  8bcb                 mov ecx, ebx
// 007295d9  e8807df7ff           call 0x6a135e
// 007295de  8bcd                 mov ecx, ebp
// 007295e0  e88b94ffff           call 0x722a70
// 007295e5  85c0                 test eax, eax
// 007295e7  0f8491000000         je 0x72967e
// 007295ed  8b952c020000         mov edx, dword ptr [ebp + 0x22c]
// 007295f3  8b8d34020000         mov ecx, dword ptr [ebp + 0x234]
// 007295f9  8b8530020000         mov eax, dword ptr [ebp + 0x230]
// 007295ff  89542440             mov dword ptr [esp + 0x40], edx
// 00729603  8b9538020000         mov edx, dword ptr [ebp + 0x238]
// 00729609  894c2448             mov dword ptr [esp + 0x48], ecx
// 0072960d  68e81b8600           push 0x861be8
// 00729612  8bce                 mov ecx, esi
// 00729614  89442448             mov dword ptr [esp + 0x48], eax
// 00729618  89542450             mov dword ptr [esp + 0x50], edx
// 0072961c  e8cfc00000           call 0x7356f0
// 00729621  8bf8                 mov edi, eax
// 00729623  85ff                 test edi, edi
// 00729625  7457                 je 0x72967e
// 00729627  6a01                 push 1
// 00729629  6a00                 push 0
// 0072962b  8d442468             lea eax, [esp + 0x68]
// 0072962f  bd03000000           mov ebp, 3
// 00729634  50                   push eax
// 00729635  8bcf                 mov ecx, edi
// 00729637  896c2468             mov dword ptr [esp + 0x68], ebp
// 0072963b  e8f0400600           call 0x78d730
// 00729640  83ec10               sub esp, 0x10
// 00729643  8bcc                 mov ecx, esp
// 00729645  8929                 mov dword ptr [ecx], ebp
// 00729647  8bd5                 mov edx, ebp
// 00729649  895104               mov dword ptr [ecx + 4], edx
// 0072964c  895108               mov dword ptr [ecx + 8], edx
// 0072964f  89510c               mov dword ptr [ecx + 0xc], edx
// 00729652  8b10                 mov edx, dword ptr [eax]
// 00729654  83ec10               sub esp, 0x10
// 00729657  8bcc                 mov ecx, esp
// 00729659  8911                 mov dword ptr [ecx], edx
// 0072965b  8b5004               mov edx, dword ptr [eax + 4]
// 0072965e  895104               mov dword ptr [ecx + 4], edx
// 00729661  8b5008               mov edx, dword ptr [eax + 8]
// 00729664  8b400c               mov eax, dword ptr [eax + 0xc]
// 00729667  895108               mov dword ptr [ecx + 8], edx
// 0072966a  89410c               mov dword ptr [ecx + 0xc], eax
// 0072966d  8d4c2460             lea ecx, [esp + 0x60]
// 00729671  51                   push ecx
// 00729672  53                   push ebx
// 00729673  8bcf                 mov ecx, edi
// 00729675  e886390600           call 0x78d000
// 0072967a  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 0072967e  8bcd                 mov ecx, ebp
// 00729680  e82b8cffff           call 0x7222b0
// 00729685  85c0                 test eax, eax
// 00729687  754b                 jne 0x7296d4
// 00729689  8bcd                 mov ecx, ebp
// 0072968b  e8e093ffff           call 0x722a70
// 00729690  85c0                 test eax, eax
// 00729692  7540                 jne 0x7296d4
// 00729694  8b9680060000         mov edx, dword ptr [esi + 0x680]
// 0072969a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0072969e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007296a2  52                   push edx
// 007296a3  8b542414             mov edx, dword ptr [esp + 0x14]
// 007296a7  50                   push eax
// 007296a8  83c1fe               add ecx, -2
// 007296ab  51                   push ecx
// 007296ac  52                   push edx
// 007296ad  53                   push ebx
// 007296ae  8bce                 mov ecx, esi
// 007296b0  e8eb4bf8ff           call 0x6ae2a0
// 007296b5  8b867c060000         mov eax, dword ptr [esi + 0x67c]
// 007296bb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007296bf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007296c3  50                   push eax
// 007296c4  8b442414             mov eax, dword ptr [esp + 0x14]
// 007296c8  51                   push ecx
// 007296c9  4a                   dec edx
// 007296ca  52                   push edx
// 007296cb  50                   push eax
// 007296cc  53                   push ebx
// 007296cd  8bce                 mov ecx, esi
// 007296cf  e8cc4bf8ff           call 0x6ae2a0
// 007296d4  5f                   pop edi
// 007296d5  5e                   pop esi
// 007296d6  5d                   pop ebp
// 007296d7  5b                   pop ebx
// 007296d8  83c460               add esp, 0x60
// 007296db  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillRibbonBar@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
