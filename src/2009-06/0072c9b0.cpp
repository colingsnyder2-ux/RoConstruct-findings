// roc 2009-06 0072c9b0  unit: MyXTPCommandBars  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072c9b0
//
// 0072c9b0  56                   push esi
// 0072c9b1  57                   push edi
// 0072c9b2  8bf1                 mov esi, ecx
// 0072c9b4  e807e5ffff           call 0x72aec0
// 0072c9b9  837c241000           cmp dword ptr [esp + 0x10], 0
// 0072c9be  8bf8                 mov edi, eax
// 0072c9c0  751e                 jne 0x72c9e0
// 0072c9c2  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 0072c9c9  7415                 je 0x72c9e0
// 0072c9cb  6a00                 push 0
// 0072c9cd  8bcf                 mov ecx, edi
// 0072c9cf  e86c740600           call 0x793e40
// 0072c9d4  85c0                 test eax, eax
// 0072c9d6  7508                 jne 0x72c9e0
// 0072c9d8  50                   push eax
// 0072c9d9  8bce                 mov ecx, esi
// 0072c9db  e8b0e4ffff           call 0x72ae90
// 0072c9e0  837e4400             cmp dword ptr [esi + 0x44], 0
// 0072c9e4  7e52                 jle 0x72ca38
// 0072c9e6  8b4674               mov eax, dword ptr [esi + 0x74]
// 0072c9e9  83b8c400000000       cmp dword ptr [eax + 0xc4], 0
// 0072c9f0  7446                 je 0x72ca38
// 0072c9f2  8bce                 mov ecx, esi
// 0072c9f4  e827e4ffff           call 0x72ae20
// 0072c9f9  6a00                 push 0
// 0072c9fb  8bcf                 mov ecx, edi
// 0072c9fd  e83e740600           call 0x793e40
// 0072ca02  85c0                 test eax, eax
// 0072ca04  7432                 je 0x72ca38
// 0072ca06  8b4710               mov eax, dword ptr [edi + 0x10]
// 0072ca09  83e801               sub eax, 1
// 0072ca0c  782f                 js 0x72ca3d
// 0072ca0e  3b4710               cmp eax, dword ptr [edi + 0x10]
// 0072ca11  7d2a                 jge 0x72ca3d
// 0072ca13  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0072ca16  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0072ca19  83b83001000000       cmp dword ptr [eax + 0x130], 0
// 0072ca20  7416                 je 0x72ca38
// 0072ca22  8b5020               mov edx, dword ptr [eax + 0x20]
// 0072ca25  6a00                 push 0
// 0072ca27  68cacc0000           push 0xccca
// 0072ca2c  6813010000           push 0x113
// 0072ca31  52                   push edx
// 0072ca32  ff159cee8900         call dword ptr [0x89ee9c]
// 0072ca38  5f                   pop edi
// 0072ca39  5e                   pop esi
// 0072ca3a  c20800               ret 8
// 0072ca3d  e8a2c2feff           call 0x718ce4
// copied from an identical function in another client (function ?OnTrackingModeChanged@CXTPCommandBars@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp