// roc 2012-06 00849650  unit: RBX::LibraryService::VLibraryStateObject::?$sp_counted_impl_p  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00849650
//
// 00849650  6aff                 push -1
// 00849652  68f810ab00           push 0xab10f8
// 00849657  64a100000000         mov eax, dword ptr fs:[0]
// 0084965d  50                   push eax
// 0084965e  64892500000000       mov dword ptr fs:[0], esp
// 00849665  51                   push ecx
// 00849666  56                   push esi
// 00849667  57                   push edi
// 00849668  8bf1                 mov esi, ecx
// 0084966a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0084966e  83ec0c               sub esp, 0xc
// 00849671  8bc4                 mov eax, esp
// 00849673  c70600000000         mov dword ptr [esi], 0
// 00849679  8908                 mov dword ptr [eax], ecx
// 0084967b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0084967f  895004               mov dword ptr [eax + 4], edx
// 00849682  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00849686  894808               mov dword ptr [eax + 8], ecx
// 00849689  8b442430             mov eax, dword ptr [esp + 0x30]
// 0084968d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00849695  89642414             mov dword ptr [esp + 0x14], esp
// 00849699  85c0                 test eax, eax
// 0084969b  740c                 je 0x8496a9
// 0084969d  83c004               add eax, 4
// 008496a0  ba01000000           mov edx, 1
// 008496a5  f00fc110             lock xadd dword ptr [eax], edx
// 008496a9  8bce                 mov ecx, esi
// 008496ab  e800fcffff           call 0x8492b0
// 008496b0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008496b4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008496bc  85ff                 test edi, edi
// 008496be  742a                 je 0x8496ea
// 008496c0  8d4704               lea eax, [edi + 4]
// 008496c3  83c9ff               or ecx, 0xffffffff
// 008496c6  f00fc108             lock xadd dword ptr [eax], ecx
// 008496ca  751e                 jne 0x8496ea
// 008496cc  8b17                 mov edx, dword ptr [edi]
// 008496ce  8b4204               mov eax, dword ptr [edx + 4]
// 008496d1  8bcf                 mov ecx, edi
// 008496d3  ffd0                 call eax
// 008496d5  8d4f08               lea ecx, [edi + 8]
// 008496d8  83caff               or edx, 0xffffffff
// 008496db  f00fc111             lock xadd dword ptr [ecx], edx
// 008496df  7509                 jne 0x8496ea
// 008496e1  8b07                 mov eax, dword ptr [edi]
// 008496e3  8b5008               mov edx, dword ptr [eax + 8]
// 008496e6  8bcf                 mov ecx, edi
// 008496e8  ffd2                 call edx
// 008496ea  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008496ee  5f                   pop edi
// 008496ef  8bc6                 mov eax, esi
// 008496f1  64890d00000000       mov dword ptr fs:[0], ecx
// 008496f8  5e                   pop esi
// 008496f9  83c410               add esp, 0x10
// 008496fc  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
