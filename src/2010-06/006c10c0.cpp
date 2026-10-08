// roc 2010-06 006c10c0  unit: RBX::VDebrisService::?$FactoryProduct  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c10c0
//
// 006c10c0  6aff                 push -1
// 006c10c2  6888df9a00           push 0x9adf88
// 006c10c7  64a100000000         mov eax, dword ptr fs:[0]
// 006c10cd  50                   push eax
// 006c10ce  64892500000000       mov dword ptr fs:[0], esp
// 006c10d5  51                   push ecx
// 006c10d6  56                   push esi
// 006c10d7  57                   push edi
// 006c10d8  8bf1                 mov esi, ecx
// 006c10da  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006c10de  83ec0c               sub esp, 0xc
// 006c10e1  8bc4                 mov eax, esp
// 006c10e3  c70600000000         mov dword ptr [esi], 0
// 006c10e9  8908                 mov dword ptr [eax], ecx
// 006c10eb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006c10ef  895004               mov dword ptr [eax + 4], edx
// 006c10f2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006c10f6  894808               mov dword ptr [eax + 8], ecx
// 006c10f9  8b442430             mov eax, dword ptr [esp + 0x30]
// 006c10fd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006c1105  89642414             mov dword ptr [esp + 0x14], esp
// 006c1109  85c0                 test eax, eax
// 006c110b  740c                 je 0x6c1119
// 006c110d  83c004               add eax, 4
// 006c1110  ba01000000           mov edx, 1
// 006c1115  f00fc110             lock xadd dword ptr [eax], edx
// 006c1119  8bce                 mov ecx, esi
// 006c111b  e8e0feffff           call 0x6c1000
// 006c1120  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006c1124  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006c112c  85ff                 test edi, edi
// 006c112e  742a                 je 0x6c115a
// 006c1130  8d4704               lea eax, [edi + 4]
// 006c1133  83c9ff               or ecx, 0xffffffff
// 006c1136  f00fc108             lock xadd dword ptr [eax], ecx
// 006c113a  751e                 jne 0x6c115a
// 006c113c  8b17                 mov edx, dword ptr [edi]
// 006c113e  8b4204               mov eax, dword ptr [edx + 4]
// 006c1141  8bcf                 mov ecx, edi
// 006c1143  ffd0                 call eax
// 006c1145  8d4f08               lea ecx, [edi + 8]
// 006c1148  83caff               or edx, 0xffffffff
// 006c114b  f00fc111             lock xadd dword ptr [ecx], edx
// 006c114f  7509                 jne 0x6c115a
// 006c1151  8b07                 mov eax, dword ptr [edi]
// 006c1153  8b5008               mov edx, dword ptr [eax + 8]
// 006c1156  8bcf                 mov ecx, edi
// 006c1158  ffd2                 call edx
// 006c115a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c115e  5f                   pop edi
// 006c115f  8bc6                 mov eax, esi
// 006c1161  64890d00000000       mov dword ptr fs:[0], ecx
// 006c1168  5e                   pop esi
// 006c1169  83c410               add esp, 0x10
// 006c116c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
