// roc 2010-06 005d31e0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::slot  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005d31e0
//
// 005d31e0  6aff                 push -1
// 005d31e2  6888df9a00           push 0x9adf88
// 005d31e7  64a100000000         mov eax, dword ptr fs:[0]
// 005d31ed  50                   push eax
// 005d31ee  64892500000000       mov dword ptr fs:[0], esp
// 005d31f5  51                   push ecx
// 005d31f6  56                   push esi
// 005d31f7  57                   push edi
// 005d31f8  8bf1                 mov esi, ecx
// 005d31fa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d31fe  83ec0c               sub esp, 0xc
// 005d3201  8bc4                 mov eax, esp
// 005d3203  c70600000000         mov dword ptr [esi], 0
// 005d3209  8908                 mov dword ptr [eax], ecx
// 005d320b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005d320f  895004               mov dword ptr [eax + 4], edx
// 005d3212  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005d3216  894808               mov dword ptr [eax + 8], ecx
// 005d3219  8b442430             mov eax, dword ptr [esp + 0x30]
// 005d321d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005d3225  89642414             mov dword ptr [esp + 0x14], esp
// 005d3229  85c0                 test eax, eax
// 005d322b  740c                 je 0x5d3239
// 005d322d  83c004               add eax, 4
// 005d3230  ba01000000           mov edx, 1
// 005d3235  f00fc110             lock xadd dword ptr [eax], edx
// 005d3239  8bce                 mov ecx, esi
// 005d323b  e820f6ffff           call 0x5d2860
// 005d3240  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005d3244  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005d324c  85ff                 test edi, edi
// 005d324e  742a                 je 0x5d327a
// 005d3250  8d4704               lea eax, [edi + 4]
// 005d3253  83c9ff               or ecx, 0xffffffff
// 005d3256  f00fc108             lock xadd dword ptr [eax], ecx
// 005d325a  751e                 jne 0x5d327a
// 005d325c  8b17                 mov edx, dword ptr [edi]
// 005d325e  8b4204               mov eax, dword ptr [edx + 4]
// 005d3261  8bcf                 mov ecx, edi
// 005d3263  ffd0                 call eax
// 005d3265  8d4f08               lea ecx, [edi + 8]
// 005d3268  83caff               or edx, 0xffffffff
// 005d326b  f00fc111             lock xadd dword ptr [ecx], edx
// 005d326f  7509                 jne 0x5d327a
// 005d3271  8b07                 mov eax, dword ptr [edi]
// 005d3273  8b5008               mov edx, dword ptr [eax + 8]
// 005d3276  8bcf                 mov ecx, edi
// 005d3278  ffd2                 call edx
// 005d327a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d327e  5f                   pop edi
// 005d327f  8bc6                 mov eax, esi
// 005d3281  64890d00000000       mov dword ptr fs:[0], ecx
// 005d3288  5e                   pop esi
// 005d3289  83c410               add esp, 0x10
// 005d328c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
