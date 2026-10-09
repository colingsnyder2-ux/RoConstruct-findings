// roc 2009-12 0078d880  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078d880
//
// 0078d880  6aff                 push -1
// 0078d882  6888459400           push 0x944588
// 0078d887  64a100000000         mov eax, dword ptr fs:[0]
// 0078d88d  50                   push eax
// 0078d88e  64892500000000       mov dword ptr fs:[0], esp
// 0078d895  51                   push ecx
// 0078d896  56                   push esi
// 0078d897  57                   push edi
// 0078d898  8bf1                 mov esi, ecx
// 0078d89a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0078d89e  83ec0c               sub esp, 0xc
// 0078d8a1  8bc4                 mov eax, esp
// 0078d8a3  c70600000000         mov dword ptr [esi], 0
// 0078d8a9  8908                 mov dword ptr [eax], ecx
// 0078d8ab  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0078d8af  895004               mov dword ptr [eax + 4], edx
// 0078d8b2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0078d8b6  894808               mov dword ptr [eax + 8], ecx
// 0078d8b9  8b442430             mov eax, dword ptr [esp + 0x30]
// 0078d8bd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0078d8c5  89642414             mov dword ptr [esp + 0x14], esp
// 0078d8c9  85c0                 test eax, eax
// 0078d8cb  740c                 je 0x78d8d9
// 0078d8cd  83c004               add eax, 4
// 0078d8d0  ba01000000           mov edx, 1
// 0078d8d5  f00fc110             lock xadd dword ptr [eax], edx
// 0078d8d9  8bce                 mov ecx, esi
// 0078d8db  e8d0fbffff           call 0x78d4b0
// 0078d8e0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0078d8e4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0078d8ec  85ff                 test edi, edi
// 0078d8ee  742a                 je 0x78d91a
// 0078d8f0  8d4704               lea eax, [edi + 4]
// 0078d8f3  83c9ff               or ecx, 0xffffffff
// 0078d8f6  f00fc108             lock xadd dword ptr [eax], ecx
// 0078d8fa  751e                 jne 0x78d91a
// 0078d8fc  8b17                 mov edx, dword ptr [edi]
// 0078d8fe  8b4204               mov eax, dword ptr [edx + 4]
// 0078d901  8bcf                 mov ecx, edi
// 0078d903  ffd0                 call eax
// 0078d905  8d4f08               lea ecx, [edi + 8]
// 0078d908  83caff               or edx, 0xffffffff
// 0078d90b  f00fc111             lock xadd dword ptr [ecx], edx
// 0078d90f  7509                 jne 0x78d91a
// 0078d911  8b07                 mov eax, dword ptr [edi]
// 0078d913  8b5008               mov edx, dword ptr [eax + 8]
// 0078d916  8bcf                 mov ecx, edi
// 0078d918  ffd2                 call edx
// 0078d91a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0078d91e  5f                   pop edi
// 0078d91f  8bc6                 mov eax, esi
// 0078d921  64890d00000000       mov dword ptr fs:[0], ecx
// 0078d928  5e                   pop esi
// 0078d929  83c410               add esp, 0x10
// 0078d92c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
