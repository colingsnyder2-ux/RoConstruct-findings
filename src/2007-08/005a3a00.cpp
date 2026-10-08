// roc 2007-08 005a3a00  unit: RBX::VTeams::?$BoundFuncDesc  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a3a00
//
// 005a3a00  6aff                 push -1
// 005a3a02  68d8bc7500           push 0x75bcd8
// 005a3a07  64a100000000         mov eax, dword ptr fs:[0]
// 005a3a0d  50                   push eax
// 005a3a0e  64892500000000       mov dword ptr fs:[0], esp
// 005a3a15  83ec08               sub esp, 8
// 005a3a18  8bc1                 mov eax, ecx
// 005a3a1a  8b5028               mov edx, dword ptr [eax + 0x28]
// 005a3a1d  56                   push esi
// 005a3a1e  8d4c2404             lea ecx, [esp + 4]
// 005a3a22  51                   push ecx
// 005a3a23  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 005a3a26  034c2420             add ecx, dword ptr [esp + 0x20]
// 005a3a2a  ffd2                 call edx
// 005a3a2c  8bf0                 mov esi, eax
// 005a3a2e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a3a36  e8259dfcff           call 0x56d760
// 005a3a3b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a3a3f  8901                 mov dword ptr [ecx], eax
// 005a3a41  56                   push esi
// 005a3a42  83c104               add ecx, 4
// 005a3a45  e8e629efff           call 0x496430
// 005a3a4a  8b442408             mov eax, dword ptr [esp + 8]
// 005a3a4e  85c0                 test eax, eax
// 005a3a50  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005a3a58  742c                 je 0x5a3a86
// 005a3a5a  8bf0                 mov esi, eax
// 005a3a5c  83c004               add eax, 4
// 005a3a5f  83c9ff               or ecx, 0xffffffff
// 005a3a62  f00fc108             lock xadd dword ptr [eax], ecx
// 005a3a66  751e                 jne 0x5a3a86
// 005a3a68  8b16                 mov edx, dword ptr [esi]
// 005a3a6a  8b4204               mov eax, dword ptr [edx + 4]
// 005a3a6d  8bce                 mov ecx, esi
// 005a3a6f  ffd0                 call eax
// 005a3a71  8d4e08               lea ecx, [esi + 8]
// 005a3a74  83caff               or edx, 0xffffffff
// 005a3a77  f00fc111             lock xadd dword ptr [ecx], edx
// 005a3a7b  7509                 jne 0x5a3a86
// 005a3a7d  8b06                 mov eax, dword ptr [esi]
// 005a3a7f  8b5008               mov edx, dword ptr [eax + 8]
// 005a3a82  8bce                 mov ecx, esi
// 005a3a84  ffd2                 call edx
// 005a3a86  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a3a8a  5e                   pop esi
// 005a3a8b  64890d00000000       mov dword ptr fs:[0], ecx
// 005a3a92  83c414               add esp, 0x14
// 005a3a95  c20800               ret 8
// library rbxgs/v8datamodel\Selection.cpp (function ??$call@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@?$BoundFuncDesc@VSelection@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ$0A@@Reflection@RBX@@ABEXPAVSelection@2@AAVValue@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
