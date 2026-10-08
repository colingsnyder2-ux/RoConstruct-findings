// roc 2007-08 005ede00  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ede00
//
// 005ede00  6aff                 push -1
// 005ede02  68d8bc7500           push 0x75bcd8
// 005ede07  64a100000000         mov eax, dword ptr fs:[0]
// 005ede0d  50                   push eax
// 005ede0e  64892500000000       mov dword ptr fs:[0], esp
// 005ede15  83ec08               sub esp, 8
// 005ede18  56                   push esi
// 005ede19  8d442404             lea eax, [esp + 4]
// 005ede1d  8bf1                 mov esi, ecx
// 005ede1f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ede23  50                   push eax
// 005ede24  e8c79ae2ff           call 0x4178f0
// 005ede29  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ede2d  894c2420             mov dword ptr [esp + 0x20], ecx
// 005ede31  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ede34  8b11                 mov edx, dword ptr [ecx]
// 005ede36  8b5208               mov edx, dword ptr [edx + 8]
// 005ede39  8d442420             lea eax, [esp + 0x20]
// 005ede3d  50                   push eax
// 005ede3e  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ede42  50                   push eax
// 005ede43  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005ede4b  ffd2                 call edx
// 005ede4d  8b742408             mov esi, dword ptr [esp + 8]
// 005ede51  85f6                 test esi, esi
// 005ede53  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005ede5b  742a                 je 0x5ede87
// 005ede5d  8d4604               lea eax, [esi + 4]
// 005ede60  83c9ff               or ecx, 0xffffffff
// 005ede63  f00fc108             lock xadd dword ptr [eax], ecx
// 005ede67  751e                 jne 0x5ede87
// 005ede69  8b16                 mov edx, dword ptr [esi]
// 005ede6b  8b4204               mov eax, dword ptr [edx + 4]
// 005ede6e  8bce                 mov ecx, esi
// 005ede70  ffd0                 call eax
// 005ede72  8d4e08               lea ecx, [esi + 8]
// 005ede75  83caff               or edx, 0xffffffff
// 005ede78  f00fc111             lock xadd dword ptr [ecx], edx
// 005ede7c  7509                 jne 0x5ede87
// 005ede7e  8b06                 mov eax, dword ptr [esi]
// 005ede80  8b5008               mov edx, dword ptr [eax + 8]
// 005ede83  8bce                 mov ecx, esi
// 005ede85  ffd2                 call edx
// 005ede87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ede8b  5e                   pop esi
// 005ede8c  64890d00000000       mov dword ptr fs:[0], ecx
// 005ede93  83c414               add esp, 0x14
// 005ede96  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?assignIDREF@?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@RBX@@UBEXPAVDescribedBase@23@ABVInstanceHandle@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
