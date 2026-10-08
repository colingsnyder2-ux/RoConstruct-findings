// roc 2012-06 004751a0  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004751a0
//
// 004751a0  6aff                 push -1
// 004751a2  68f810ab00           push 0xab10f8
// 004751a7  64a100000000         mov eax, dword ptr fs:[0]
// 004751ad  50                   push eax
// 004751ae  64892500000000       mov dword ptr fs:[0], esp
// 004751b5  51                   push ecx
// 004751b6  56                   push esi
// 004751b7  57                   push edi
// 004751b8  8bf1                 mov esi, ecx
// 004751ba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004751be  83ec0c               sub esp, 0xc
// 004751c1  8bc4                 mov eax, esp
// 004751c3  c70600000000         mov dword ptr [esi], 0
// 004751c9  8908                 mov dword ptr [eax], ecx
// 004751cb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004751cf  895004               mov dword ptr [eax + 4], edx
// 004751d2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004751d6  894808               mov dword ptr [eax + 8], ecx
// 004751d9  8b442430             mov eax, dword ptr [esp + 0x30]
// 004751dd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004751e5  89642414             mov dword ptr [esp + 0x14], esp
// 004751e9  85c0                 test eax, eax
// 004751eb  740c                 je 0x4751f9
// 004751ed  83c004               add eax, 4
// 004751f0  ba01000000           mov edx, 1
// 004751f5  f00fc110             lock xadd dword ptr [eax], edx
// 004751f9  8bce                 mov ecx, esi
// 004751fb  e8d0f8ffff           call 0x474ad0
// 00475200  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00475204  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0047520c  85ff                 test edi, edi
// 0047520e  742a                 je 0x47523a
// 00475210  8d4704               lea eax, [edi + 4]
// 00475213  83c9ff               or ecx, 0xffffffff
// 00475216  f00fc108             lock xadd dword ptr [eax], ecx
// 0047521a  751e                 jne 0x47523a
// 0047521c  8b17                 mov edx, dword ptr [edi]
// 0047521e  8b4204               mov eax, dword ptr [edx + 4]
// 00475221  8bcf                 mov ecx, edi
// 00475223  ffd0                 call eax
// 00475225  8d4f08               lea ecx, [edi + 8]
// 00475228  83caff               or edx, 0xffffffff
// 0047522b  f00fc111             lock xadd dword ptr [ecx], edx
// 0047522f  7509                 jne 0x47523a
// 00475231  8b07                 mov eax, dword ptr [edi]
// 00475233  8b5008               mov edx, dword ptr [eax + 8]
// 00475236  8bcf                 mov ecx, edi
// 00475238  ffd2                 call edx
// 0047523a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047523e  5f                   pop edi
// 0047523f  8bc6                 mov eax, esi
// 00475241  64890d00000000       mov dword ptr fs:[0], ecx
// 00475248  5e                   pop esi
// 00475249  83c410               add esp, 0x10
// 0047524c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
