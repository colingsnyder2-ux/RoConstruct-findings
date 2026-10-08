// roc 2010-06 0045c650  unit: RBX::VSpecialShape::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0045c650
//
// 0045c650  6aff                 push -1
// 0045c652  6888df9a00           push 0x9adf88
// 0045c657  64a100000000         mov eax, dword ptr fs:[0]
// 0045c65d  50                   push eax
// 0045c65e  64892500000000       mov dword ptr fs:[0], esp
// 0045c665  51                   push ecx
// 0045c666  56                   push esi
// 0045c667  57                   push edi
// 0045c668  8bf1                 mov esi, ecx
// 0045c66a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0045c66e  83ec0c               sub esp, 0xc
// 0045c671  8bc4                 mov eax, esp
// 0045c673  c70600000000         mov dword ptr [esi], 0
// 0045c679  8908                 mov dword ptr [eax], ecx
// 0045c67b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0045c67f  895004               mov dword ptr [eax + 4], edx
// 0045c682  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0045c686  894808               mov dword ptr [eax + 8], ecx
// 0045c689  8b442430             mov eax, dword ptr [esp + 0x30]
// 0045c68d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0045c695  89642414             mov dword ptr [esp + 0x14], esp
// 0045c699  85c0                 test eax, eax
// 0045c69b  740c                 je 0x45c6a9
// 0045c69d  83c004               add eax, 4
// 0045c6a0  ba01000000           mov edx, 1
// 0045c6a5  f00fc110             lock xadd dword ptr [eax], edx
// 0045c6a9  8bce                 mov ecx, esi
// 0045c6ab  e850faffff           call 0x45c100
// 0045c6b0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0045c6b4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0045c6bc  85ff                 test edi, edi
// 0045c6be  742a                 je 0x45c6ea
// 0045c6c0  8d4704               lea eax, [edi + 4]
// 0045c6c3  83c9ff               or ecx, 0xffffffff
// 0045c6c6  f00fc108             lock xadd dword ptr [eax], ecx
// 0045c6ca  751e                 jne 0x45c6ea
// 0045c6cc  8b17                 mov edx, dword ptr [edi]
// 0045c6ce  8b4204               mov eax, dword ptr [edx + 4]
// 0045c6d1  8bcf                 mov ecx, edi
// 0045c6d3  ffd0                 call eax
// 0045c6d5  8d4f08               lea ecx, [edi + 8]
// 0045c6d8  83caff               or edx, 0xffffffff
// 0045c6db  f00fc111             lock xadd dword ptr [ecx], edx
// 0045c6df  7509                 jne 0x45c6ea
// 0045c6e1  8b07                 mov eax, dword ptr [edi]
// 0045c6e3  8b5008               mov edx, dword ptr [eax + 8]
// 0045c6e6  8bcf                 mov ecx, edi
// 0045c6e8  ffd2                 call edx
// 0045c6ea  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045c6ee  5f                   pop edi
// 0045c6ef  8bc6                 mov eax, esi
// 0045c6f1  64890d00000000       mov dword ptr fs:[0], ecx
// 0045c6f8  5e                   pop esi
// 0045c6f9  83c410               add esp, 0x10
// 0045c6fc  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
