// roc 2010-06 004f2740  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004f2740
//
// 004f2740  6aff                 push -1
// 004f2742  6888df9a00           push 0x9adf88
// 004f2747  64a100000000         mov eax, dword ptr fs:[0]
// 004f274d  50                   push eax
// 004f274e  64892500000000       mov dword ptr fs:[0], esp
// 004f2755  51                   push ecx
// 004f2756  56                   push esi
// 004f2757  57                   push edi
// 004f2758  8bf1                 mov esi, ecx
// 004f275a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004f275e  83ec0c               sub esp, 0xc
// 004f2761  8bc4                 mov eax, esp
// 004f2763  c70600000000         mov dword ptr [esi], 0
// 004f2769  8908                 mov dword ptr [eax], ecx
// 004f276b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004f276f  895004               mov dword ptr [eax + 4], edx
// 004f2772  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004f2776  894808               mov dword ptr [eax + 8], ecx
// 004f2779  8b442430             mov eax, dword ptr [esp + 0x30]
// 004f277d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004f2785  89642414             mov dword ptr [esp + 0x14], esp
// 004f2789  85c0                 test eax, eax
// 004f278b  740c                 je 0x4f2799
// 004f278d  83c004               add eax, 4
// 004f2790  ba01000000           mov edx, 1
// 004f2795  f00fc110             lock xadd dword ptr [eax], edx
// 004f2799  8bce                 mov ecx, esi
// 004f279b  e8c0e7ffff           call 0x4f0f60
// 004f27a0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004f27a4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004f27ac  85ff                 test edi, edi
// 004f27ae  742a                 je 0x4f27da
// 004f27b0  8d4704               lea eax, [edi + 4]
// 004f27b3  83c9ff               or ecx, 0xffffffff
// 004f27b6  f00fc108             lock xadd dword ptr [eax], ecx
// 004f27ba  751e                 jne 0x4f27da
// 004f27bc  8b17                 mov edx, dword ptr [edi]
// 004f27be  8b4204               mov eax, dword ptr [edx + 4]
// 004f27c1  8bcf                 mov ecx, edi
// 004f27c3  ffd0                 call eax
// 004f27c5  8d4f08               lea ecx, [edi + 8]
// 004f27c8  83caff               or edx, 0xffffffff
// 004f27cb  f00fc111             lock xadd dword ptr [ecx], edx
// 004f27cf  7509                 jne 0x4f27da
// 004f27d1  8b07                 mov eax, dword ptr [edi]
// 004f27d3  8b5008               mov edx, dword ptr [eax + 8]
// 004f27d6  8bcf                 mov ecx, edi
// 004f27d8  ffd2                 call edx
// 004f27da  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f27de  5f                   pop edi
// 004f27df  8bc6                 mov eax, esi
// 004f27e1  64890d00000000       mov dword ptr fs:[0], ecx
// 004f27e8  5e                   pop esi
// 004f27e9  83c410               add esp, 0x10
// 004f27ec  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
