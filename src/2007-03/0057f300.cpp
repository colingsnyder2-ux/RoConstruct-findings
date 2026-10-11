// roc 2007-03 0057f300  unit: seg_00570000  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057f300
//
// 0057f300  81ec10010000         sub esp, 0x110
// 0057f306  56                   push esi
// 0057f307  57                   push edi
// 0057f308  8bf9                 mov edi, ecx
// 0057f30a  8b0db4d38b00         mov ecx, dword ptr [0x8bd3b4]
// 0057f310  8b01                 mov eax, dword ptr [ecx]
// 0057f312  8b10                 mov edx, dword ptr [eax]
// 0057f314  ffd2                 call edx
// 0057f316  8bf0                 mov esi, eax
// 0057f318  8d442408             lea eax, [esp + 8]
// 0057f31c  50                   push eax
// 0057f31d  83c624               add esi, 0x24
// 0057f320  ff15c0d17700         call dword ptr [0x77d1c0]
// 0057f326  0fb74c2416           movzx ecx, word ptr [esp + 0x16]
// 0057f32b  0fb7542412           movzx edx, word ptr [esp + 0x12]
// 0057f330  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 0057f335  51                   push ecx
// 0057f336  52                   push edx
// 0057f337  50                   push eax
// 0057f338  8d4c2424             lea ecx, [esp + 0x24]
// 0057f33c  6800d97a00           push 0x7ad900
// 0057f341  51                   push ecx
// 0057f342  ff15c8e97700         call dword ptr [0x77e9c8]
// 0057f348  8d54242c             lea edx, [esp + 0x2c]
// 0057f34c  52                   push edx
// 0057f34d  56                   push esi
// 0057f34e  e8edc0eeff           call 0x46b440
// 0057f353  83c41c               add esp, 0x1c
// 0057f356  8bce                 mov ecx, esi
// 0057f358  ff158ce67700         call dword ptr [0x77e68c]
// 0057f35e  8b84241c010000       mov eax, dword ptr [esp + 0x11c]
// 0057f365  83e800               sub eax, 0
// 0057f368  7448                 je 0x57f3b2
// 0057f36a  83e801               sub eax, 1
// 0057f36d  7424                 je 0x57f393
// 0057f36f  83e801               sub eax, 1
// 0057f372  755d                 jne 0x57f3d1
// 0057f374  8b0db4d38b00         mov ecx, dword ptr [0x8bd3b4]
// 0057f37a  8b01                 mov eax, dword ptr [ecx]
// 0057f37c  8b10                 mov edx, dword ptr [eax]
// 0057f37e  ffd2                 call edx
// 0057f380  8b0d18098a00         mov ecx, dword ptr [0x8a0918]
// 0057f386  83c024               add eax, 0x24
// 0057f389  51                   push ecx
// 0057f38a  50                   push eax
// 0057f38b  e8b0c0eeff           call 0x46b440
// 0057f390  83c408               add esp, 8
// 0057f393  8b0db4d38b00         mov ecx, dword ptr [0x8bd3b4]
// 0057f399  8b11                 mov edx, dword ptr [ecx]
// 0057f39b  8b02                 mov eax, dword ptr [edx]
// 0057f39d  ffd0                 call eax
// 0057f39f  8b0d14098a00         mov ecx, dword ptr [0x8a0914]
// 0057f3a5  83c024               add eax, 0x24
// 0057f3a8  51                   push ecx
// 0057f3a9  50                   push eax
// 0057f3aa  e891c0eeff           call 0x46b440
// 0057f3af  83c408               add esp, 8
// 0057f3b2  8b0db4d38b00         mov ecx, dword ptr [0x8bd3b4]
// 0057f3b8  8b11                 mov edx, dword ptr [ecx]
// 0057f3ba  8b02                 mov eax, dword ptr [edx]
// 0057f3bc  ffd0                 call eax
// 0057f3be  8b0d10098a00         mov ecx, dword ptr [0x8a0910]
// 0057f3c4  83c024               add eax, 0x24
// 0057f3c7  51                   push ecx
// 0057f3c8  50                   push eax
// 0057f3c9  e872c0eeff           call 0x46b440
// 0057f3ce  83c408               add esp, 8
// 0057f3d1  8b0db4d38b00         mov ecx, dword ptr [0x8bd3b4]
// 0057f3d7  8b942420010000       mov edx, dword ptr [esp + 0x120]
// 0057f3de  8b01                 mov eax, dword ptr [ecx]
// 0057f3e0  52                   push edx
// 0057f3e1  8b10                 mov edx, dword ptr [eax]
// 0057f3e3  ffd2                 call edx
// 0057f3e5  83c024               add eax, 0x24
// 0057f3e8  50                   push eax
// 0057f3e9  e852c0eeff           call 0x46b440
// 0057f3ee  6a0a                 push 0xa
// 0057f3f0  83c724               add edi, 0x24
// 0057f3f3  57                   push edi
// 0057f3f4  e8575cfcff           call 0x545050
// 0057f3f9  8b0db4d38b00         mov ecx, dword ptr [0x8bd3b4]
// 0057f3ff  8b01                 mov eax, dword ptr [ecx]
// 0057f401  8b10                 mov edx, dword ptr [eax]
// 0057f403  83c410               add esp, 0x10
// 0057f406  ffd2                 call edx
// 0057f408  8bc8                 mov ecx, eax
// 0057f40a  83c124               add ecx, 0x24
// 0057f40d  ff158ce67700         call dword ptr [0x77e68c]
// 0057f413  5f                   pop edi
// 0057f414  5e                   pop esi
// 0057f415  81c410010000         add esp, 0x110
// 0057f41b  c20800               ret 8
// library openrbx-client/App\util\Log.cpp (function ?writeEntry@Log@RBX@@QAEXW4Severity@12@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Log.cpp
