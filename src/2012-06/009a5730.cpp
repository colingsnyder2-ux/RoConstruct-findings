// roc 2012-06 009a5730  unit: MyXTPCommandBars  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a5730
//
// 009a5730  56                   push esi
// 009a5731  57                   push edi
// 009a5732  8bf1                 mov esi, ecx
// 009a5734  e887e5ffff           call 0x9a3cc0
// 009a5739  837c241000           cmp dword ptr [esp + 0x10], 0
// 009a573e  8bf8                 mov edi, eax
// 009a5740  751e                 jne 0x9a5760
// 009a5742  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 009a5749  7415                 je 0x9a5760
// 009a574b  6a00                 push 0
// 009a574d  8bcf                 mov ecx, edi
// 009a574f  e89c340500           call 0x9f8bf0
// 009a5754  85c0                 test eax, eax
// 009a5756  7508                 jne 0x9a5760
// 009a5758  50                   push eax
// 009a5759  8bce                 mov ecx, esi
// 009a575b  e830e5ffff           call 0x9a3c90
// 009a5760  837e4400             cmp dword ptr [esi + 0x44], 0
// 009a5764  7e52                 jle 0x9a57b8
// 009a5766  8b4674               mov eax, dword ptr [esi + 0x74]
// 009a5769  83b8c400000000       cmp dword ptr [eax + 0xc4], 0
// 009a5770  7446                 je 0x9a57b8
// 009a5772  8bce                 mov ecx, esi
// 009a5774  e8a7e4ffff           call 0x9a3c20
// 009a5779  6a00                 push 0
// 009a577b  8bcf                 mov ecx, edi
// 009a577d  e86e340500           call 0x9f8bf0
// 009a5782  85c0                 test eax, eax
// 009a5784  7432                 je 0x9a57b8
// 009a5786  8b4710               mov eax, dword ptr [edi + 0x10]
// 009a5789  83e801               sub eax, 1
// 009a578c  782f                 js 0x9a57bd
// 009a578e  3b4710               cmp eax, dword ptr [edi + 0x10]
// 009a5791  7d2a                 jge 0x9a57bd
// 009a5793  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 009a5796  8b0481               mov eax, dword ptr [ecx + eax*4]
// 009a5799  83b83001000000       cmp dword ptr [eax + 0x130], 0
// 009a57a0  7416                 je 0x9a57b8
// 009a57a2  8b5020               mov edx, dword ptr [eax + 0x20]
// 009a57a5  6a00                 push 0
// 009a57a7  68cacc0000           push 0xccca
// 009a57ac  6813010000           push 0x113
// 009a57b1  52                   push edx
// 009a57b2  ff15243cb200         call dword ptr [0xb23c24]
// 009a57b8  5f                   pop edi
// 009a57b9  5e                   pop esi
// 009a57ba  c20800               ret 8
// 009a57bd  e8fecbfdff           call 0x9823c0
// copied from an identical function in another client (function ?OnTrackingModeChanged@CXTPCommandBars@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp