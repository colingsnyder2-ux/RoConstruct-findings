// roc 2009-12 0066c2d0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::slot  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0066c2d0
//
// 0066c2d0  6aff                 push -1
// 0066c2d2  6888459400           push 0x944588
// 0066c2d7  64a100000000         mov eax, dword ptr fs:[0]
// 0066c2dd  50                   push eax
// 0066c2de  64892500000000       mov dword ptr fs:[0], esp
// 0066c2e5  51                   push ecx
// 0066c2e6  56                   push esi
// 0066c2e7  57                   push edi
// 0066c2e8  8bf1                 mov esi, ecx
// 0066c2ea  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066c2ee  83ec0c               sub esp, 0xc
// 0066c2f1  8bc4                 mov eax, esp
// 0066c2f3  c70600000000         mov dword ptr [esi], 0
// 0066c2f9  8908                 mov dword ptr [eax], ecx
// 0066c2fb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0066c2ff  895004               mov dword ptr [eax + 4], edx
// 0066c302  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0066c306  894808               mov dword ptr [eax + 8], ecx
// 0066c309  8b442430             mov eax, dword ptr [esp + 0x30]
// 0066c30d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0066c315  89642414             mov dword ptr [esp + 0x14], esp
// 0066c319  85c0                 test eax, eax
// 0066c31b  740c                 je 0x66c329
// 0066c31d  83c004               add eax, 4
// 0066c320  ba01000000           mov edx, 1
// 0066c325  f00fc110             lock xadd dword ptr [eax], edx
// 0066c329  8bce                 mov ecx, esi
// 0066c32b  e8b0f4ffff           call 0x66b7e0
// 0066c330  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0066c334  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0066c33c  85ff                 test edi, edi
// 0066c33e  742a                 je 0x66c36a
// 0066c340  8d4704               lea eax, [edi + 4]
// 0066c343  83c9ff               or ecx, 0xffffffff
// 0066c346  f00fc108             lock xadd dword ptr [eax], ecx
// 0066c34a  751e                 jne 0x66c36a
// 0066c34c  8b17                 mov edx, dword ptr [edi]
// 0066c34e  8b4204               mov eax, dword ptr [edx + 4]
// 0066c351  8bcf                 mov ecx, edi
// 0066c353  ffd0                 call eax
// 0066c355  8d4f08               lea ecx, [edi + 8]
// 0066c358  83caff               or edx, 0xffffffff
// 0066c35b  f00fc111             lock xadd dword ptr [ecx], edx
// 0066c35f  7509                 jne 0x66c36a
// 0066c361  8b07                 mov eax, dword ptr [edi]
// 0066c363  8b5008               mov edx, dword ptr [eax + 8]
// 0066c366  8bcf                 mov ecx, edi
// 0066c368  ffd2                 call edx
// 0066c36a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066c36e  5f                   pop edi
// 0066c36f  8bc6                 mov eax, esi
// 0066c371  64890d00000000       mov dword ptr fs:[0], ecx
// 0066c378  5e                   pop esi
// 0066c379  83c410               add esp, 0x10
// 0066c37c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
