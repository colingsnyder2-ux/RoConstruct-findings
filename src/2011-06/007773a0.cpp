// roc 2011-06 007773a0  unit: RBX::LibraryService::VLibraryStateObject::?$sp_counted_impl_p  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007773a0
//
// 007773a0  6aff                 push -1
// 007773a2  6858949e00           push 0x9e9458
// 007773a7  64a100000000         mov eax, dword ptr fs:[0]
// 007773ad  50                   push eax
// 007773ae  64892500000000       mov dword ptr fs:[0], esp
// 007773b5  51                   push ecx
// 007773b6  56                   push esi
// 007773b7  57                   push edi
// 007773b8  8bf1                 mov esi, ecx
// 007773ba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007773be  83ec0c               sub esp, 0xc
// 007773c1  8bc4                 mov eax, esp
// 007773c3  c70600000000         mov dword ptr [esi], 0
// 007773c9  8908                 mov dword ptr [eax], ecx
// 007773cb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007773cf  895004               mov dword ptr [eax + 4], edx
// 007773d2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007773d6  894808               mov dword ptr [eax + 8], ecx
// 007773d9  8b442430             mov eax, dword ptr [esp + 0x30]
// 007773dd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 007773e5  89642414             mov dword ptr [esp + 0x14], esp
// 007773e9  85c0                 test eax, eax
// 007773eb  740c                 je 0x7773f9
// 007773ed  83c004               add eax, 4
// 007773f0  ba01000000           mov edx, 1
// 007773f5  f00fc110             lock xadd dword ptr [eax], edx
// 007773f9  8bce                 mov ecx, esi
// 007773fb  e800fcffff           call 0x777000
// 00777400  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00777404  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0077740c  85ff                 test edi, edi
// 0077740e  742a                 je 0x77743a
// 00777410  8d4704               lea eax, [edi + 4]
// 00777413  83c9ff               or ecx, 0xffffffff
// 00777416  f00fc108             lock xadd dword ptr [eax], ecx
// 0077741a  751e                 jne 0x77743a
// 0077741c  8b17                 mov edx, dword ptr [edi]
// 0077741e  8b4204               mov eax, dword ptr [edx + 4]
// 00777421  8bcf                 mov ecx, edi
// 00777423  ffd0                 call eax
// 00777425  8d4f08               lea ecx, [edi + 8]
// 00777428  83caff               or edx, 0xffffffff
// 0077742b  f00fc111             lock xadd dword ptr [ecx], edx
// 0077742f  7509                 jne 0x77743a
// 00777431  8b07                 mov eax, dword ptr [edi]
// 00777433  8b5008               mov edx, dword ptr [eax + 8]
// 00777436  8bcf                 mov ecx, edi
// 00777438  ffd2                 call edx
// 0077743a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077743e  5f                   pop edi
// 0077743f  8bc6                 mov eax, esi
// 00777441  64890d00000000       mov dword ptr fs:[0], ecx
// 00777448  5e                   pop esi
// 00777449  83c410               add esp, 0x10
// 0077744c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
