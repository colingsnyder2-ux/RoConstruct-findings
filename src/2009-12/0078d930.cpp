// roc 2009-12 0078d930  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078d930
//
// 0078d930  6aff                 push -1
// 0078d932  6888459400           push 0x944588
// 0078d937  64a100000000         mov eax, dword ptr fs:[0]
// 0078d93d  50                   push eax
// 0078d93e  64892500000000       mov dword ptr fs:[0], esp
// 0078d945  51                   push ecx
// 0078d946  56                   push esi
// 0078d947  57                   push edi
// 0078d948  8bf1                 mov esi, ecx
// 0078d94a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0078d94e  83ec0c               sub esp, 0xc
// 0078d951  8bc4                 mov eax, esp
// 0078d953  c70600000000         mov dword ptr [esi], 0
// 0078d959  8908                 mov dword ptr [eax], ecx
// 0078d95b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0078d95f  895004               mov dword ptr [eax + 4], edx
// 0078d962  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0078d966  894808               mov dword ptr [eax + 8], ecx
// 0078d969  8b442430             mov eax, dword ptr [esp + 0x30]
// 0078d96d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0078d975  89642414             mov dword ptr [esp + 0x14], esp
// 0078d979  85c0                 test eax, eax
// 0078d97b  740c                 je 0x78d989
// 0078d97d  83c004               add eax, 4
// 0078d980  ba01000000           mov edx, 1
// 0078d985  f00fc110             lock xadd dword ptr [eax], edx
// 0078d989  8bce                 mov ecx, esi
// 0078d98b  e8e0fbffff           call 0x78d570
// 0078d990  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0078d994  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0078d99c  85ff                 test edi, edi
// 0078d99e  742a                 je 0x78d9ca
// 0078d9a0  8d4704               lea eax, [edi + 4]
// 0078d9a3  83c9ff               or ecx, 0xffffffff
// 0078d9a6  f00fc108             lock xadd dword ptr [eax], ecx
// 0078d9aa  751e                 jne 0x78d9ca
// 0078d9ac  8b17                 mov edx, dword ptr [edi]
// 0078d9ae  8b4204               mov eax, dword ptr [edx + 4]
// 0078d9b1  8bcf                 mov ecx, edi
// 0078d9b3  ffd0                 call eax
// 0078d9b5  8d4f08               lea ecx, [edi + 8]
// 0078d9b8  83caff               or edx, 0xffffffff
// 0078d9bb  f00fc111             lock xadd dword ptr [ecx], edx
// 0078d9bf  7509                 jne 0x78d9ca
// 0078d9c1  8b07                 mov eax, dword ptr [edi]
// 0078d9c3  8b5008               mov edx, dword ptr [eax + 8]
// 0078d9c6  8bcf                 mov ecx, edi
// 0078d9c8  ffd2                 call edx
// 0078d9ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0078d9ce  5f                   pop edi
// 0078d9cf  8bc6                 mov eax, esi
// 0078d9d1  64890d00000000       mov dword ptr fs:[0], ecx
// 0078d9d8  5e                   pop esi
// 0078d9d9  83c410               add esp, 0x10
// 0078d9dc  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
