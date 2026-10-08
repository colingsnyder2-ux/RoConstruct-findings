// roc 2008-06 004b3fa0  unit: RBX::Network::VPeer::?$BoundFuncDesc  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b3fa0
//
// 004b3fa0  6aff                 push -1
// 004b3fa2  6868917d00           push 0x7d9168
// 004b3fa7  64a100000000         mov eax, dword ptr fs:[0]
// 004b3fad  50                   push eax
// 004b3fae  64892500000000       mov dword ptr fs:[0], esp
// 004b3fb5  83ec08               sub esp, 8
// 004b3fb8  8bc1                 mov eax, ecx
// 004b3fba  8b5038               mov edx, dword ptr [eax + 0x38]
// 004b3fbd  56                   push esi
// 004b3fbe  8d4c2404             lea ecx, [esp + 4]
// 004b3fc2  51                   push ecx
// 004b3fc3  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 004b3fc6  034c2420             add ecx, dword ptr [esp + 0x20]
// 004b3fca  ffd2                 call edx
// 004b3fcc  8bf0                 mov esi, eax
// 004b3fce  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004b3fd6  e8958a0b00           call 0x56ca70
// 004b3fdb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004b3fdf  8901                 mov dword ptr [ecx], eax
// 004b3fe1  56                   push esi
// 004b3fe2  83c104               add ecx, 4
// 004b3fe5  e8a6d7fdff           call 0x491790
// 004b3fea  8b442408             mov eax, dword ptr [esp + 8]
// 004b3fee  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004b3ff6  85c0                 test eax, eax
// 004b3ff8  742c                 je 0x4b4026
// 004b3ffa  8bf0                 mov esi, eax
// 004b3ffc  83c004               add eax, 4
// 004b3fff  83c9ff               or ecx, 0xffffffff
// 004b4002  f00fc108             lock xadd dword ptr [eax], ecx
// 004b4006  751e                 jne 0x4b4026
// 004b4008  8b16                 mov edx, dword ptr [esi]
// 004b400a  8b4204               mov eax, dword ptr [edx + 4]
// 004b400d  8bce                 mov ecx, esi
// 004b400f  ffd0                 call eax
// 004b4011  8d4e08               lea ecx, [esi + 8]
// 004b4014  83caff               or edx, 0xffffffff
// 004b4017  f00fc111             lock xadd dword ptr [ecx], edx
// 004b401b  7509                 jne 0x4b4026
// 004b401d  8b06                 mov eax, dword ptr [esi]
// 004b401f  8b5008               mov edx, dword ptr [eax + 8]
// 004b4022  8bce                 mov ecx, esi
// 004b4024  ffd2                 call edx
// 004b4026  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b402a  5e                   pop esi
// 004b402b  64890d00000000       mov dword ptr fs:[0], ecx
// 004b4032  83c414               add esp, 0x14
// 004b4035  c20800               ret 8
// library rbxgs/v8datamodel\Selection.cpp (function ??$call@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@?$BoundFuncDesc@VSelection@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ$0A@@Reflection@RBX@@ABEXPAVSelection@2@AAVValue@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
