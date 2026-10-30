// roc 2010-06 007cb730  unit: MyXTPCommandBars  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cb730
//
// 007cb730  56                   push esi
// 007cb731  57                   push edi
// 007cb732  8bf1                 mov esi, ecx
// 007cb734  e807e5ffff           call 0x7c9c40
// 007cb739  837c241000           cmp dword ptr [esp + 0x10], 0
// 007cb73e  8bf8                 mov edi, eax
// 007cb740  751e                 jne 0x7cb760
// 007cb742  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 007cb749  7415                 je 0x7cb760
// 007cb74b  6a00                 push 0
// 007cb74d  8bcf                 mov ecx, edi
// 007cb74f  e85c780500           call 0x822fb0
// 007cb754  85c0                 test eax, eax
// 007cb756  7508                 jne 0x7cb760
// 007cb758  50                   push eax
// 007cb759  8bce                 mov ecx, esi
// 007cb75b  e8b0e4ffff           call 0x7c9c10
// 007cb760  837e4400             cmp dword ptr [esi + 0x44], 0
// 007cb764  7e52                 jle 0x7cb7b8
// 007cb766  8b4674               mov eax, dword ptr [esi + 0x74]
// 007cb769  83b8c400000000       cmp dword ptr [eax + 0xc4], 0
// 007cb770  7446                 je 0x7cb7b8
// 007cb772  8bce                 mov ecx, esi
// 007cb774  e827e4ffff           call 0x7c9ba0
// 007cb779  6a00                 push 0
// 007cb77b  8bcf                 mov ecx, edi
// 007cb77d  e82e780500           call 0x822fb0
// 007cb782  85c0                 test eax, eax
// 007cb784  7432                 je 0x7cb7b8
// 007cb786  8b4710               mov eax, dword ptr [edi + 0x10]
// 007cb789  83e801               sub eax, 1
// 007cb78c  782f                 js 0x7cb7bd
// 007cb78e  3b4710               cmp eax, dword ptr [edi + 0x10]
// 007cb791  7d2a                 jge 0x7cb7bd
// 007cb793  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 007cb796  8b0481               mov eax, dword ptr [ecx + eax*4]
// 007cb799  83b83001000000       cmp dword ptr [eax + 0x130], 0
// 007cb7a0  7416                 je 0x7cb7b8
// 007cb7a2  8b5020               mov edx, dword ptr [eax + 0x20]
// 007cb7a5  6a00                 push 0
// 007cb7a7  68cacc0000           push 0xccca
// 007cb7ac  6813010000           push 0x113
// 007cb7b1  52                   push edx
// 007cb7b2  ff1548ba9e00         call dword ptr [0x9eba48]
// 007cb7b8  5f                   pop edi
// 007cb7b9  5e                   pop esi
// 007cb7ba  c20800               ret 8
// 007cb7bd  e88ac4fdff           call 0x7a7c4c
// copied from an identical function in another client (function ?OnTrackingModeChanged@CXTPCommandBars@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp