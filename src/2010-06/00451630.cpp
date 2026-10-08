// roc 2010-06 00451630  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00451630
//
// 00451630  6aff                 push -1
// 00451632  6888df9a00           push 0x9adf88
// 00451637  64a100000000         mov eax, dword ptr fs:[0]
// 0045163d  50                   push eax
// 0045163e  64892500000000       mov dword ptr fs:[0], esp
// 00451645  51                   push ecx
// 00451646  56                   push esi
// 00451647  57                   push edi
// 00451648  8bf1                 mov esi, ecx
// 0045164a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0045164e  83ec0c               sub esp, 0xc
// 00451651  8bc4                 mov eax, esp
// 00451653  c70600000000         mov dword ptr [esi], 0
// 00451659  8908                 mov dword ptr [eax], ecx
// 0045165b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0045165f  895004               mov dword ptr [eax + 4], edx
// 00451662  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00451666  894808               mov dword ptr [eax + 8], ecx
// 00451669  8b442430             mov eax, dword ptr [esp + 0x30]
// 0045166d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00451675  89642414             mov dword ptr [esp + 0x14], esp
// 00451679  85c0                 test eax, eax
// 0045167b  740c                 je 0x451689
// 0045167d  83c004               add eax, 4
// 00451680  ba01000000           mov edx, 1
// 00451685  f00fc110             lock xadd dword ptr [eax], edx
// 00451689  8bce                 mov ecx, esi
// 0045168b  e8e0feffff           call 0x451570
// 00451690  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00451694  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0045169c  85ff                 test edi, edi
// 0045169e  742a                 je 0x4516ca
// 004516a0  8d4704               lea eax, [edi + 4]
// 004516a3  83c9ff               or ecx, 0xffffffff
// 004516a6  f00fc108             lock xadd dword ptr [eax], ecx
// 004516aa  751e                 jne 0x4516ca
// 004516ac  8b17                 mov edx, dword ptr [edi]
// 004516ae  8b4204               mov eax, dword ptr [edx + 4]
// 004516b1  8bcf                 mov ecx, edi
// 004516b3  ffd0                 call eax
// 004516b5  8d4f08               lea ecx, [edi + 8]
// 004516b8  83caff               or edx, 0xffffffff
// 004516bb  f00fc111             lock xadd dword ptr [ecx], edx
// 004516bf  7509                 jne 0x4516ca
// 004516c1  8b07                 mov eax, dword ptr [edi]
// 004516c3  8b5008               mov edx, dword ptr [eax + 8]
// 004516c6  8bcf                 mov ecx, edi
// 004516c8  ffd2                 call edx
// 004516ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004516ce  5f                   pop edi
// 004516cf  8bc6                 mov eax, esi
// 004516d1  64890d00000000       mov dword ptr fs:[0], ecx
// 004516d8  5e                   pop esi
// 004516d9  83c410               add esp, 0x10
// 004516dc  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
