// roc 2010-06 0045c4b0  unit: RBX::VSpecialShape::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0045c4b0
//
// 0045c4b0  6aff                 push -1
// 0045c4b2  6888df9a00           push 0x9adf88
// 0045c4b7  64a100000000         mov eax, dword ptr fs:[0]
// 0045c4bd  50                   push eax
// 0045c4be  64892500000000       mov dword ptr fs:[0], esp
// 0045c4c5  51                   push ecx
// 0045c4c6  56                   push esi
// 0045c4c7  57                   push edi
// 0045c4c8  8bf1                 mov esi, ecx
// 0045c4ca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0045c4ce  83ec0c               sub esp, 0xc
// 0045c4d1  8bc4                 mov eax, esp
// 0045c4d3  c70600000000         mov dword ptr [esi], 0
// 0045c4d9  8908                 mov dword ptr [eax], ecx
// 0045c4db  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0045c4df  895004               mov dword ptr [eax + 4], edx
// 0045c4e2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0045c4e6  894808               mov dword ptr [eax + 8], ecx
// 0045c4e9  8b442430             mov eax, dword ptr [esp + 0x30]
// 0045c4ed  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0045c4f5  89642414             mov dword ptr [esp + 0x14], esp
// 0045c4f9  85c0                 test eax, eax
// 0045c4fb  740c                 je 0x45c509
// 0045c4fd  83c004               add eax, 4
// 0045c500  ba01000000           mov edx, 1
// 0045c505  f00fc110             lock xadd dword ptr [eax], edx
// 0045c509  8bce                 mov ecx, esi
// 0045c50b  e830fbffff           call 0x45c040
// 0045c510  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0045c514  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0045c51c  85ff                 test edi, edi
// 0045c51e  742a                 je 0x45c54a
// 0045c520  8d4704               lea eax, [edi + 4]
// 0045c523  83c9ff               or ecx, 0xffffffff
// 0045c526  f00fc108             lock xadd dword ptr [eax], ecx
// 0045c52a  751e                 jne 0x45c54a
// 0045c52c  8b17                 mov edx, dword ptr [edi]
// 0045c52e  8b4204               mov eax, dword ptr [edx + 4]
// 0045c531  8bcf                 mov ecx, edi
// 0045c533  ffd0                 call eax
// 0045c535  8d4f08               lea ecx, [edi + 8]
// 0045c538  83caff               or edx, 0xffffffff
// 0045c53b  f00fc111             lock xadd dword ptr [ecx], edx
// 0045c53f  7509                 jne 0x45c54a
// 0045c541  8b07                 mov eax, dword ptr [edi]
// 0045c543  8b5008               mov edx, dword ptr [eax + 8]
// 0045c546  8bcf                 mov ecx, edi
// 0045c548  ffd2                 call edx
// 0045c54a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045c54e  5f                   pop edi
// 0045c54f  8bc6                 mov eax, esi
// 0045c551  64890d00000000       mov dword ptr fs:[0], ecx
// 0045c558  5e                   pop esi
// 0045c559  83c410               add esp, 0x10
// 0045c55c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
