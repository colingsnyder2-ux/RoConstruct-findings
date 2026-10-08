// roc 2007-08 00541090  unit: RBX::VInstance::?$BoundFuncDesc  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00541090
//
// 00541090  6aff                 push -1
// 00541092  68d8bc7500           push 0x75bcd8
// 00541097  64a100000000         mov eax, dword ptr fs:[0]
// 0054109d  50                   push eax
// 0054109e  64892500000000       mov dword ptr fs:[0], esp
// 005410a5  83ec08               sub esp, 8
// 005410a8  8bc1                 mov eax, ecx
// 005410aa  8b5028               mov edx, dword ptr [eax + 0x28]
// 005410ad  56                   push esi
// 005410ae  8d4c2404             lea ecx, [esp + 4]
// 005410b2  51                   push ecx
// 005410b3  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 005410b6  034c2420             add ecx, dword ptr [esp + 0x20]
// 005410ba  ffd2                 call edx
// 005410bc  8bf0                 mov esi, eax
// 005410be  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005410c6  e825c60200           call 0x56d6f0
// 005410cb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005410cf  8901                 mov dword ptr [ecx], eax
// 005410d1  56                   push esi
// 005410d2  83c104               add ecx, 4
// 005410d5  e8468cedff           call 0x419d20
// 005410da  8b442408             mov eax, dword ptr [esp + 8]
// 005410de  85c0                 test eax, eax
// 005410e0  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005410e8  742c                 je 0x541116
// 005410ea  8bf0                 mov esi, eax
// 005410ec  83c004               add eax, 4
// 005410ef  83c9ff               or ecx, 0xffffffff
// 005410f2  f00fc108             lock xadd dword ptr [eax], ecx
// 005410f6  751e                 jne 0x541116
// 005410f8  8b16                 mov edx, dword ptr [esi]
// 005410fa  8b4204               mov eax, dword ptr [edx + 4]
// 005410fd  8bce                 mov ecx, esi
// 005410ff  ffd0                 call eax
// 00541101  8d4e08               lea ecx, [esi + 8]
// 00541104  83caff               or edx, 0xffffffff
// 00541107  f00fc111             lock xadd dword ptr [ecx], edx
// 0054110b  7509                 jne 0x541116
// 0054110d  8b06                 mov eax, dword ptr [esi]
// 0054110f  8b5008               mov edx, dword ptr [eax + 8]
// 00541112  8bce                 mov ecx, esi
// 00541114  ffd2                 call edx
// 00541116  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054111a  5e                   pop esi
// 0054111b  64890d00000000       mov dword ptr fs:[0], ecx
// 00541122  83c414               add esp, 0x14
// 00541125  c20800               ret 8
// library rbxgs/v8datamodel\Selection.cpp (function ??$call@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@?$BoundFuncDesc@VSelection@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ$0A@@Reflection@RBX@@ABEXPAVSelection@2@AAVValue@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
