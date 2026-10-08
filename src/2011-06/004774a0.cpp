// roc 2011-06 004774a0  unit: RBX::VSpecialShape::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004774a0
//
// 004774a0  6aff                 push -1
// 004774a2  6858949e00           push 0x9e9458
// 004774a7  64a100000000         mov eax, dword ptr fs:[0]
// 004774ad  50                   push eax
// 004774ae  64892500000000       mov dword ptr fs:[0], esp
// 004774b5  51                   push ecx
// 004774b6  56                   push esi
// 004774b7  57                   push edi
// 004774b8  8bf1                 mov esi, ecx
// 004774ba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004774be  83ec0c               sub esp, 0xc
// 004774c1  8bc4                 mov eax, esp
// 004774c3  c70600000000         mov dword ptr [esi], 0
// 004774c9  8908                 mov dword ptr [eax], ecx
// 004774cb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004774cf  895004               mov dword ptr [eax + 4], edx
// 004774d2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004774d6  894808               mov dword ptr [eax + 8], ecx
// 004774d9  8b442430             mov eax, dword ptr [esp + 0x30]
// 004774dd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004774e5  89642414             mov dword ptr [esp + 0x14], esp
// 004774e9  85c0                 test eax, eax
// 004774eb  740c                 je 0x4774f9
// 004774ed  83c004               add eax, 4
// 004774f0  ba01000000           mov edx, 1
// 004774f5  f00fc110             lock xadd dword ptr [eax], edx
// 004774f9  8bce                 mov ecx, esi
// 004774fb  e860faffff           call 0x476f60
// 00477500  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00477504  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0047750c  85ff                 test edi, edi
// 0047750e  742a                 je 0x47753a
// 00477510  8d4704               lea eax, [edi + 4]
// 00477513  83c9ff               or ecx, 0xffffffff
// 00477516  f00fc108             lock xadd dword ptr [eax], ecx
// 0047751a  751e                 jne 0x47753a
// 0047751c  8b17                 mov edx, dword ptr [edi]
// 0047751e  8b4204               mov eax, dword ptr [edx + 4]
// 00477521  8bcf                 mov ecx, edi
// 00477523  ffd0                 call eax
// 00477525  8d4f08               lea ecx, [edi + 8]
// 00477528  83caff               or edx, 0xffffffff
// 0047752b  f00fc111             lock xadd dword ptr [ecx], edx
// 0047752f  7509                 jne 0x47753a
// 00477531  8b07                 mov eax, dword ptr [edi]
// 00477533  8b5008               mov edx, dword ptr [eax + 8]
// 00477536  8bcf                 mov ecx, edi
// 00477538  ffd2                 call edx
// 0047753a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047753e  5f                   pop edi
// 0047753f  8bc6                 mov eax, esi
// 00477541  64890d00000000       mov dword ptr fs:[0], ecx
// 00477548  5e                   pop esi
// 00477549  83c410               add esp, 0x10
// 0047754c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
