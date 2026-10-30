// roc 2012-06 00a145e0  unit: CXTPControlEdit  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a145e0
//
// 00a145e0  83ec30               sub esp, 0x30
// 00a145e3  56                   push esi
// 00a145e4  8bf1                 mov esi, ecx
// 00a145e6  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00a145ec  83f8ff               cmp eax, -1
// 00a145ef  750f                 jne 0xa14600
// 00a145f1  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00a145f7  85c9                 test ecx, ecx
// 00a145f9  7405                 je 0xa14600
// 00a145fb  e82009f7ff           call 0x984f20
// 00a14600  85c0                 test eax, eax
// 00a14602  0f8410010000         je 0xa14718
// 00a14608  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 00a1460f  0f8403010000         je 0xa14718
// 00a14615  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 00a1461c  0f84f6000000         je 0xa14718
// 00a14622  53                   push ebx
// 00a14623  57                   push edi
// 00a14624  8d44240c             lea eax, [esp + 0xc]
// 00a14628  50                   push eax
// 00a14629  8bce                 mov ecx, esi
// 00a1462b  e850ffffff           call 0xa14580
// 00a14630  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a14634  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a14638  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a1463c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a14640  89442420             mov dword ptr [esp + 0x20], eax
// 00a14644  03c3                 add eax, ebx
// 00a14646  99                   cdq 
// 00a14647  2bc2                 sub eax, edx
// 00a14649  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a1464d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00a14651  d1f8                 sar eax, 1
// 00a14653  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00a14657  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a1465b  51                   push ecx
// 00a1465c  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a14660  89442434             mov dword ptr [esp + 0x34], eax
// 00a14664  52                   push edx
// 00a14665  8d442424             lea eax, [esp + 0x24]
// 00a14669  897c242c             mov dword ptr [esp + 0x2c], edi
// 00a1466d  897c243c             mov dword ptr [esp + 0x3c], edi
// 00a14671  8b3d483bb200         mov edi, dword ptr [0xb23b48]
// 00a14677  50                   push eax
// 00a14678  895c2444             mov dword ptr [esp + 0x44], ebx
// 00a1467c  ffd7                 call edi
// 00a1467e  bb03000000           mov ebx, 3
// 00a14683  85c0                 test eax, eax
// 00a14685  7420                 je 0xa146a7
// 00a14687  399ea4000000         cmp dword ptr [esi + 0xa4], ebx
// 00a1468d  7418                 je 0xa146a7
// 00a1468f  6a00                 push 0
// 00a14691  8bce                 mov ecx, esi
// 00a14693  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 00a14699  e89209f7ff           call 0x985030
// 00a1469e  5f                   pop edi
// 00a1469f  5b                   pop ebx
// 00a146a0  5e                   pop esi
// 00a146a1  83c430               add esp, 0x30
// 00a146a4  c20800               ret 8
// 00a146a7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a146ab  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a146af  51                   push ecx
// 00a146b0  52                   push edx
// 00a146b1  8d442434             lea eax, [esp + 0x34]
// 00a146b5  50                   push eax
// 00a146b6  ffd7                 call edi
// 00a146b8  b904000000           mov ecx, 4
// 00a146bd  85c0                 test eax, eax
// 00a146bf  7420                 je 0xa146e1
// 00a146c1  398ea4000000         cmp dword ptr [esi + 0xa4], ecx
// 00a146c7  7418                 je 0xa146e1
// 00a146c9  898ea4000000         mov dword ptr [esi + 0xa4], ecx
// 00a146cf  6a00                 push 0
// 00a146d1  8bce                 mov ecx, esi
// 00a146d3  e85809f7ff           call 0x985030
// 00a146d8  5f                   pop edi
// 00a146d9  5b                   pop ebx
// 00a146da  5e                   pop esi
// 00a146db  83c430               add esp, 0x30
// 00a146de  c20800               ret 8
// 00a146e1  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00a146e7  3bc3                 cmp eax, ebx
// 00a146e9  7404                 je 0xa146ef
// 00a146eb  3bc1                 cmp eax, ecx
// 00a146ed  7527                 jne 0xa14716
// 00a146ef  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a146f3  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a146f7  51                   push ecx
// 00a146f8  52                   push edx
// 00a146f9  8d442414             lea eax, [esp + 0x14]
// 00a146fd  50                   push eax
// 00a146fe  ffd7                 call edi
// 00a14700  85c0                 test eax, eax
// 00a14702  7512                 jne 0xa14716
// 00a14704  50                   push eax
// 00a14705  8bce                 mov ecx, esi
// 00a14707  c786a400000001000000 mov dword ptr [esi + 0xa4], 1
// 00a14711  e81a09f7ff           call 0x985030
// 00a14716  5f                   pop edi
// 00a14717  5b                   pop ebx
// 00a14718  5e                   pop esi
// 00a14719  83c430               add esp, 0x30
// 00a1471c  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?OnMouseMove@CXTPControlEdit@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
