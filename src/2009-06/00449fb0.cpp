// roc 2009-06 00449fb0  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00449fb0
//
// 00449fb0  6aff                 push -1
// 00449fb2  68883e8700           push 0x873e88
// 00449fb7  64a100000000         mov eax, dword ptr fs:[0]
// 00449fbd  50                   push eax
// 00449fbe  64892500000000       mov dword ptr fs:[0], esp
// 00449fc5  51                   push ecx
// 00449fc6  56                   push esi
// 00449fc7  57                   push edi
// 00449fc8  8bf1                 mov esi, ecx
// 00449fca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00449fce  83ec0c               sub esp, 0xc
// 00449fd1  8bc4                 mov eax, esp
// 00449fd3  c70600000000         mov dword ptr [esi], 0
// 00449fd9  8908                 mov dword ptr [eax], ecx
// 00449fdb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00449fdf  895004               mov dword ptr [eax + 4], edx
// 00449fe2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00449fe6  894808               mov dword ptr [eax + 8], ecx
// 00449fe9  8b442430             mov eax, dword ptr [esp + 0x30]
// 00449fed  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00449ff5  89642414             mov dword ptr [esp + 0x14], esp
// 00449ff9  85c0                 test eax, eax
// 00449ffb  740c                 je 0x44a009
// 00449ffd  83c004               add eax, 4
// 0044a000  ba01000000           mov edx, 1
// 0044a005  f00fc110             lock xadd dword ptr [eax], edx
// 0044a009  8bce                 mov ecx, esi
// 0044a00b  e800feffff           call 0x449e10
// 0044a010  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0044a014  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0044a01c  85ff                 test edi, edi
// 0044a01e  742a                 je 0x44a04a
// 0044a020  8d4704               lea eax, [edi + 4]
// 0044a023  83c9ff               or ecx, 0xffffffff
// 0044a026  f00fc108             lock xadd dword ptr [eax], ecx
// 0044a02a  751e                 jne 0x44a04a
// 0044a02c  8b17                 mov edx, dword ptr [edi]
// 0044a02e  8b4204               mov eax, dword ptr [edx + 4]
// 0044a031  8bcf                 mov ecx, edi
// 0044a033  ffd0                 call eax
// 0044a035  8d4f08               lea ecx, [edi + 8]
// 0044a038  83caff               or edx, 0xffffffff
// 0044a03b  f00fc111             lock xadd dword ptr [ecx], edx
// 0044a03f  7509                 jne 0x44a04a
// 0044a041  8b07                 mov eax, dword ptr [edi]
// 0044a043  8b5008               mov edx, dword ptr [eax + 8]
// 0044a046  8bcf                 mov ecx, edi
// 0044a048  ffd2                 call edx
// 0044a04a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044a04e  5f                   pop edi
// 0044a04f  8bc6                 mov eax, esi
// 0044a051  64890d00000000       mov dword ptr fs:[0], ecx
// 0044a058  5e                   pop esi
// 0044a059  83c410               add esp, 0x10
// 0044a05c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
