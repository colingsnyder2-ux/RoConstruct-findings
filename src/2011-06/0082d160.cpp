// roc 2011-06 0082d160  unit: MyXTPCommandBars  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082d160
//
// 0082d160  56                   push esi
// 0082d161  57                   push edi
// 0082d162  8bf1                 mov esi, ecx
// 0082d164  e887e5ffff           call 0x82b6f0
// 0082d169  837c241000           cmp dword ptr [esp + 0x10], 0
// 0082d16e  8bf8                 mov edi, eax
// 0082d170  751e                 jne 0x82d190
// 0082d172  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 0082d179  7415                 je 0x82d190
// 0082d17b  6a00                 push 0
// 0082d17d  8bcf                 mov ecx, edi
// 0082d17f  e87c340500           call 0x880600
// 0082d184  85c0                 test eax, eax
// 0082d186  7508                 jne 0x82d190
// 0082d188  50                   push eax
// 0082d189  8bce                 mov ecx, esi
// 0082d18b  e830e5ffff           call 0x82b6c0
// 0082d190  837e4400             cmp dword ptr [esi + 0x44], 0
// 0082d194  7e52                 jle 0x82d1e8
// 0082d196  8b4674               mov eax, dword ptr [esi + 0x74]
// 0082d199  83b8c400000000       cmp dword ptr [eax + 0xc4], 0
// 0082d1a0  7446                 je 0x82d1e8
// 0082d1a2  8bce                 mov ecx, esi
// 0082d1a4  e8a7e4ffff           call 0x82b650
// 0082d1a9  6a00                 push 0
// 0082d1ab  8bcf                 mov ecx, edi
// 0082d1ad  e84e340500           call 0x880600
// 0082d1b2  85c0                 test eax, eax
// 0082d1b4  7432                 je 0x82d1e8
// 0082d1b6  8b4710               mov eax, dword ptr [edi + 0x10]
// 0082d1b9  83e801               sub eax, 1
// 0082d1bc  782f                 js 0x82d1ed
// 0082d1be  3b4710               cmp eax, dword ptr [edi + 0x10]
// 0082d1c1  7d2a                 jge 0x82d1ed
// 0082d1c3  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0082d1c6  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0082d1c9  83b83001000000       cmp dword ptr [eax + 0x130], 0
// 0082d1d0  7416                 je 0x82d1e8
// 0082d1d2  8b5020               mov edx, dword ptr [eax + 0x20]
// 0082d1d5  6a00                 push 0
// 0082d1d7  68cacc0000           push 0xccca
// 0082d1dc  6813010000           push 0x113
// 0082d1e1  52                   push edx
// 0082d1e2  ff15b419a400         call dword ptr [0xa419b4]
// 0082d1e8  5f                   pop edi
// 0082d1e9  5e                   pop esi
// 0082d1ea  c20800               ret 8
// 0082d1ed  e818d1fdff           call 0x80a30a
// copied from an identical function in another client (function ?OnTrackingModeChanged@CXTPCommandBars@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp