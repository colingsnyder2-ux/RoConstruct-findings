// roc 2009-12 00817660  unit: MyXTPCommandBars  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00817660
//
// 00817660  56                   push esi
// 00817661  57                   push edi
// 00817662  8bf1                 mov esi, ecx
// 00817664  e807e5ffff           call 0x815b70
// 00817669  837c241000           cmp dword ptr [esp + 0x10], 0
// 0081766e  8bf8                 mov edi, eax
// 00817670  751e                 jne 0x817690
// 00817672  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 00817679  7415                 je 0x817690
// 0081767b  6a00                 push 0
// 0081767d  8bcf                 mov ecx, edi
// 0081767f  e81c790500           call 0x86efa0
// 00817684  85c0                 test eax, eax
// 00817686  7508                 jne 0x817690
// 00817688  50                   push eax
// 00817689  8bce                 mov ecx, esi
// 0081768b  e8b0e4ffff           call 0x815b40
// 00817690  837e4400             cmp dword ptr [esi + 0x44], 0
// 00817694  7e52                 jle 0x8176e8
// 00817696  8b4674               mov eax, dword ptr [esi + 0x74]
// 00817699  83b8c400000000       cmp dword ptr [eax + 0xc4], 0
// 008176a0  7446                 je 0x8176e8
// 008176a2  8bce                 mov ecx, esi
// 008176a4  e827e4ffff           call 0x815ad0
// 008176a9  6a00                 push 0
// 008176ab  8bcf                 mov ecx, edi
// 008176ad  e8ee780500           call 0x86efa0
// 008176b2  85c0                 test eax, eax
// 008176b4  7432                 je 0x8176e8
// 008176b6  8b4710               mov eax, dword ptr [edi + 0x10]
// 008176b9  83e801               sub eax, 1
// 008176bc  782f                 js 0x8176ed
// 008176be  3b4710               cmp eax, dword ptr [edi + 0x10]
// 008176c1  7d2a                 jge 0x8176ed
// 008176c3  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008176c6  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008176c9  83b83001000000       cmp dword ptr [eax + 0x130], 0
// 008176d0  7416                 je 0x8176e8
// 008176d2  8b5020               mov edx, dword ptr [eax + 0x20]
// 008176d5  6a00                 push 0
// 008176d7  68cacc0000           push 0xccca
// 008176dc  6813010000           push 0x113
// 008176e1  52                   push edx
// 008176e2  ff15b8cb9800         call dword ptr [0x98cbb8]
// 008176e8  5f                   pop edi
// 008176e9  5e                   pop esi
// 008176ea  c20800               ret 8
// 008176ed  e81ac4fdff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnTrackingModeChanged@CXTPCommandBars@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp