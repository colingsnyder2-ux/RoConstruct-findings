// roc 2009-12 00543ec0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00543ec0
//
// 00543ec0  6aff                 push -1
// 00543ec2  6888459400           push 0x944588
// 00543ec7  64a100000000         mov eax, dword ptr fs:[0]
// 00543ecd  50                   push eax
// 00543ece  64892500000000       mov dword ptr fs:[0], esp
// 00543ed5  51                   push ecx
// 00543ed6  56                   push esi
// 00543ed7  57                   push edi
// 00543ed8  8bf1                 mov esi, ecx
// 00543eda  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00543ede  83ec0c               sub esp, 0xc
// 00543ee1  8bc4                 mov eax, esp
// 00543ee3  c70600000000         mov dword ptr [esi], 0
// 00543ee9  8908                 mov dword ptr [eax], ecx
// 00543eeb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00543eef  895004               mov dword ptr [eax + 4], edx
// 00543ef2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00543ef6  894808               mov dword ptr [eax + 8], ecx
// 00543ef9  8b442430             mov eax, dword ptr [esp + 0x30]
// 00543efd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00543f05  89642414             mov dword ptr [esp + 0x14], esp
// 00543f09  85c0                 test eax, eax
// 00543f0b  740c                 je 0x543f19
// 00543f0d  83c004               add eax, 4
// 00543f10  ba01000000           mov edx, 1
// 00543f15  f00fc110             lock xadd dword ptr [eax], edx
// 00543f19  8bce                 mov ecx, esi
// 00543f1b  e8f0e7ffff           call 0x542710
// 00543f20  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00543f24  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00543f2c  85ff                 test edi, edi
// 00543f2e  742a                 je 0x543f5a
// 00543f30  8d4704               lea eax, [edi + 4]
// 00543f33  83c9ff               or ecx, 0xffffffff
// 00543f36  f00fc108             lock xadd dword ptr [eax], ecx
// 00543f3a  751e                 jne 0x543f5a
// 00543f3c  8b17                 mov edx, dword ptr [edi]
// 00543f3e  8b4204               mov eax, dword ptr [edx + 4]
// 00543f41  8bcf                 mov ecx, edi
// 00543f43  ffd0                 call eax
// 00543f45  8d4f08               lea ecx, [edi + 8]
// 00543f48  83caff               or edx, 0xffffffff
// 00543f4b  f00fc111             lock xadd dword ptr [ecx], edx
// 00543f4f  7509                 jne 0x543f5a
// 00543f51  8b07                 mov eax, dword ptr [edi]
// 00543f53  8b5008               mov edx, dword ptr [eax + 8]
// 00543f56  8bcf                 mov ecx, edi
// 00543f58  ffd2                 call edx
// 00543f5a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00543f5e  5f                   pop edi
// 00543f5f  8bc6                 mov eax, esi
// 00543f61  64890d00000000       mov dword ptr fs:[0], ecx
// 00543f68  5e                   pop esi
// 00543f69  83c410               add esp, 0x10
// 00543f6c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
