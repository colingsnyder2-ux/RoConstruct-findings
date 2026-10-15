// roc 2008-06 005e9410  unit: RBX::PhysicsService  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9410
//
// 005e9410  56                   push esi
// 005e9411  8bf1                 mov esi, ecx
// 005e9413  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e9417  57                   push edi
// 005e9418  e853e1ffff           call 0x5e7570
// 005e941d  8bf8                 mov edi, eax
// 005e941f  85ff                 test edi, edi
// 005e9421  7432                 je 0x5e9455
// 005e9423  8bb688000000         mov esi, dword ptr [esi + 0x88]
// 005e9429  8b06                 mov eax, dword ptr [esi]
// 005e942b  8b5004               mov edx, dword ptr [eax + 4]
// 005e942e  8bce                 mov ecx, esi
// 005e9430  ffd2                 call edx
// 005e9432  83f805               cmp eax, 5
// 005e9435  7411                 je 0x5e9448
// 005e9437  8b7608               mov esi, dword ptr [esi + 8]
// 005e943a  8b06                 mov eax, dword ptr [esi]
// 005e943c  8b5004               mov edx, dword ptr [eax + 4]
// 005e943f  8bce                 mov ecx, esi
// 005e9441  ffd2                 call edx
// 005e9443  83f805               cmp eax, 5
// 005e9446  75ef                 jne 0x5e9437
// 005e9448  8b442410             mov eax, dword ptr [esp + 0x10]
// 005e944c  50                   push eax
// 005e944d  57                   push edi
// 005e944e  8bce                 mov ecx, esi
// 005e9450  e83b240600           call 0x64b890
// 005e9455  5f                   pop edi
// 005e9456  5e                   pop esi
// 005e9457  c20800               ret 8
// library rbxgs/roc_unit_0ec1b5c0a1712ab3.cpp (function ?ticklePrimitive@World@RBX@@QAEXPAVPrimitive@2@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0ec1b5c0a1712ab3.cpp
