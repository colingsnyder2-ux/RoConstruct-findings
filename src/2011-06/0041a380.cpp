// roc 2011-06 0041a380  unit: RBX::VScriptContext::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0041a380
//
// 0041a380  6aff                 push -1
// 0041a382  6858949e00           push 0x9e9458
// 0041a387  64a100000000         mov eax, dword ptr fs:[0]
// 0041a38d  50                   push eax
// 0041a38e  64892500000000       mov dword ptr fs:[0], esp
// 0041a395  51                   push ecx
// 0041a396  56                   push esi
// 0041a397  57                   push edi
// 0041a398  8bf1                 mov esi, ecx
// 0041a39a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041a39e  83ec0c               sub esp, 0xc
// 0041a3a1  8bc4                 mov eax, esp
// 0041a3a3  c70600000000         mov dword ptr [esi], 0
// 0041a3a9  8908                 mov dword ptr [eax], ecx
// 0041a3ab  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0041a3af  895004               mov dword ptr [eax + 4], edx
// 0041a3b2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0041a3b6  894808               mov dword ptr [eax + 8], ecx
// 0041a3b9  8b442430             mov eax, dword ptr [esp + 0x30]
// 0041a3bd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0041a3c5  89642414             mov dword ptr [esp + 0x14], esp
// 0041a3c9  85c0                 test eax, eax
// 0041a3cb  740c                 je 0x41a3d9
// 0041a3cd  83c004               add eax, 4
// 0041a3d0  ba01000000           mov edx, 1
// 0041a3d5  f00fc110             lock xadd dword ptr [eax], edx
// 0041a3d9  8bce                 mov ecx, esi
// 0041a3db  e8e0feffff           call 0x41a2c0
// 0041a3e0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0041a3e4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0041a3ec  85ff                 test edi, edi
// 0041a3ee  742a                 je 0x41a41a
// 0041a3f0  8d4704               lea eax, [edi + 4]
// 0041a3f3  83c9ff               or ecx, 0xffffffff
// 0041a3f6  f00fc108             lock xadd dword ptr [eax], ecx
// 0041a3fa  751e                 jne 0x41a41a
// 0041a3fc  8b17                 mov edx, dword ptr [edi]
// 0041a3fe  8b4204               mov eax, dword ptr [edx + 4]
// 0041a401  8bcf                 mov ecx, edi
// 0041a403  ffd0                 call eax
// 0041a405  8d4f08               lea ecx, [edi + 8]
// 0041a408  83caff               or edx, 0xffffffff
// 0041a40b  f00fc111             lock xadd dword ptr [ecx], edx
// 0041a40f  7509                 jne 0x41a41a
// 0041a411  8b07                 mov eax, dword ptr [edi]
// 0041a413  8b5008               mov edx, dword ptr [eax + 8]
// 0041a416  8bcf                 mov ecx, edi
// 0041a418  ffd2                 call edx
// 0041a41a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041a41e  5f                   pop edi
// 0041a41f  8bc6                 mov eax, esi
// 0041a421  64890d00000000       mov dword ptr fs:[0], ecx
// 0041a428  5e                   pop esi
// 0041a429  83c410               add esp, 0x10
// 0041a42c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
