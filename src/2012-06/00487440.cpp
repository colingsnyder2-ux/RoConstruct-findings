// roc 2012-06 00487440  unit: RBX::VSpecialShape::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00487440
//
// 00487440  6aff                 push -1
// 00487442  68f810ab00           push 0xab10f8
// 00487447  64a100000000         mov eax, dword ptr fs:[0]
// 0048744d  50                   push eax
// 0048744e  64892500000000       mov dword ptr fs:[0], esp
// 00487455  51                   push ecx
// 00487456  56                   push esi
// 00487457  57                   push edi
// 00487458  8bf1                 mov esi, ecx
// 0048745a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048745e  83ec0c               sub esp, 0xc
// 00487461  8bc4                 mov eax, esp
// 00487463  c70600000000         mov dword ptr [esi], 0
// 00487469  8908                 mov dword ptr [eax], ecx
// 0048746b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0048746f  895004               mov dword ptr [eax + 4], edx
// 00487472  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00487476  894808               mov dword ptr [eax + 8], ecx
// 00487479  8b442430             mov eax, dword ptr [esp + 0x30]
// 0048747d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00487485  89642414             mov dword ptr [esp + 0x14], esp
// 00487489  85c0                 test eax, eax
// 0048748b  740c                 je 0x487499
// 0048748d  83c004               add eax, 4
// 00487490  ba01000000           mov edx, 1
// 00487495  f00fc110             lock xadd dword ptr [eax], edx
// 00487499  8bce                 mov ecx, esi
// 0048749b  e8b0ebffff           call 0x486050
// 004874a0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004874a4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004874ac  85ff                 test edi, edi
// 004874ae  742a                 je 0x4874da
// 004874b0  8d4704               lea eax, [edi + 4]
// 004874b3  83c9ff               or ecx, 0xffffffff
// 004874b6  f00fc108             lock xadd dword ptr [eax], ecx
// 004874ba  751e                 jne 0x4874da
// 004874bc  8b17                 mov edx, dword ptr [edi]
// 004874be  8b4204               mov eax, dword ptr [edx + 4]
// 004874c1  8bcf                 mov ecx, edi
// 004874c3  ffd0                 call eax
// 004874c5  8d4f08               lea ecx, [edi + 8]
// 004874c8  83caff               or edx, 0xffffffff
// 004874cb  f00fc111             lock xadd dword ptr [ecx], edx
// 004874cf  7509                 jne 0x4874da
// 004874d1  8b07                 mov eax, dword ptr [edi]
// 004874d3  8b5008               mov edx, dword ptr [eax + 8]
// 004874d6  8bcf                 mov ecx, edi
// 004874d8  ffd2                 call edx
// 004874da  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004874de  5f                   pop edi
// 004874df  8bc6                 mov eax, esi
// 004874e1  64890d00000000       mov dword ptr fs:[0], ecx
// 004874e8  5e                   pop esi
// 004874e9  83c410               add esp, 0x10
// 004874ec  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
