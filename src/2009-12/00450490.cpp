// roc 2009-12 00450490  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00450490
//
// 00450490  6aff                 push -1
// 00450492  6888459400           push 0x944588
// 00450497  64a100000000         mov eax, dword ptr fs:[0]
// 0045049d  50                   push eax
// 0045049e  64892500000000       mov dword ptr fs:[0], esp
// 004504a5  51                   push ecx
// 004504a6  56                   push esi
// 004504a7  57                   push edi
// 004504a8  8bf1                 mov esi, ecx
// 004504aa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004504ae  83ec0c               sub esp, 0xc
// 004504b1  8bc4                 mov eax, esp
// 004504b3  c70600000000         mov dword ptr [esi], 0
// 004504b9  8908                 mov dword ptr [eax], ecx
// 004504bb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004504bf  895004               mov dword ptr [eax + 4], edx
// 004504c2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004504c6  894808               mov dword ptr [eax + 8], ecx
// 004504c9  8b442430             mov eax, dword ptr [esp + 0x30]
// 004504cd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004504d5  89642414             mov dword ptr [esp + 0x14], esp
// 004504d9  85c0                 test eax, eax
// 004504db  740c                 je 0x4504e9
// 004504dd  83c004               add eax, 4
// 004504e0  ba01000000           mov edx, 1
// 004504e5  f00fc110             lock xadd dword ptr [eax], edx
// 004504e9  8bce                 mov ecx, esi
// 004504eb  e800feffff           call 0x4502f0
// 004504f0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004504f4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004504fc  85ff                 test edi, edi
// 004504fe  742a                 je 0x45052a
// 00450500  8d4704               lea eax, [edi + 4]
// 00450503  83c9ff               or ecx, 0xffffffff
// 00450506  f00fc108             lock xadd dword ptr [eax], ecx
// 0045050a  751e                 jne 0x45052a
// 0045050c  8b17                 mov edx, dword ptr [edi]
// 0045050e  8b4204               mov eax, dword ptr [edx + 4]
// 00450511  8bcf                 mov ecx, edi
// 00450513  ffd0                 call eax
// 00450515  8d4f08               lea ecx, [edi + 8]
// 00450518  83caff               or edx, 0xffffffff
// 0045051b  f00fc111             lock xadd dword ptr [ecx], edx
// 0045051f  7509                 jne 0x45052a
// 00450521  8b07                 mov eax, dword ptr [edi]
// 00450523  8b5008               mov edx, dword ptr [eax + 8]
// 00450526  8bcf                 mov ecx, edi
// 00450528  ffd2                 call edx
// 0045052a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045052e  5f                   pop edi
// 0045052f  8bc6                 mov eax, esi
// 00450531  64890d00000000       mov dword ptr fs:[0], ecx
// 00450538  5e                   pop esi
// 00450539  83c410               add esp, 0x10
// 0045053c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
