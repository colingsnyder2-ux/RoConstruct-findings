// roc 2012-06 0041d770  unit: RBX::Reflection::$$CBUTuple::$$A6AXV?$shared_ptr::PAV?$function::?$sp_counted_impl_pd  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041d770
//
// 0041d770  6aff                 push -1
// 0041d772  68f810ab00           push 0xab10f8
// 0041d777  64a100000000         mov eax, dword ptr fs:[0]
// 0041d77d  50                   push eax
// 0041d77e  64892500000000       mov dword ptr fs:[0], esp
// 0041d785  51                   push ecx
// 0041d786  56                   push esi
// 0041d787  57                   push edi
// 0041d788  8bf1                 mov esi, ecx
// 0041d78a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041d78e  83ec0c               sub esp, 0xc
// 0041d791  8bc4                 mov eax, esp
// 0041d793  c70600000000         mov dword ptr [esi], 0
// 0041d799  8908                 mov dword ptr [eax], ecx
// 0041d79b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0041d79f  895004               mov dword ptr [eax + 4], edx
// 0041d7a2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0041d7a6  894808               mov dword ptr [eax + 8], ecx
// 0041d7a9  8b442430             mov eax, dword ptr [esp + 0x30]
// 0041d7ad  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0041d7b5  89642414             mov dword ptr [esp + 0x14], esp
// 0041d7b9  85c0                 test eax, eax
// 0041d7bb  740c                 je 0x41d7c9
// 0041d7bd  83c004               add eax, 4
// 0041d7c0  ba01000000           mov edx, 1
// 0041d7c5  f00fc110             lock xadd dword ptr [eax], edx
// 0041d7c9  8bce                 mov ecx, esi
// 0041d7cb  e8e0feffff           call 0x41d6b0
// 0041d7d0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0041d7d4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0041d7dc  85ff                 test edi, edi
// 0041d7de  742a                 je 0x41d80a
// 0041d7e0  8d4704               lea eax, [edi + 4]
// 0041d7e3  83c9ff               or ecx, 0xffffffff
// 0041d7e6  f00fc108             lock xadd dword ptr [eax], ecx
// 0041d7ea  751e                 jne 0x41d80a
// 0041d7ec  8b17                 mov edx, dword ptr [edi]
// 0041d7ee  8b4204               mov eax, dword ptr [edx + 4]
// 0041d7f1  8bcf                 mov ecx, edi
// 0041d7f3  ffd0                 call eax
// 0041d7f5  8d4f08               lea ecx, [edi + 8]
// 0041d7f8  83caff               or edx, 0xffffffff
// 0041d7fb  f00fc111             lock xadd dword ptr [ecx], edx
// 0041d7ff  7509                 jne 0x41d80a
// 0041d801  8b07                 mov eax, dword ptr [edi]
// 0041d803  8b5008               mov edx, dword ptr [eax + 8]
// 0041d806  8bcf                 mov ecx, edi
// 0041d808  ffd2                 call edx
// 0041d80a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041d80e  5f                   pop edi
// 0041d80f  8bc6                 mov eax, esi
// 0041d811  64890d00000000       mov dword ptr fs:[0], ecx
// 0041d818  5e                   pop esi
// 0041d819  83c410               add esp, 0x10
// 0041d81c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
