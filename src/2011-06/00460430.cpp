// roc 2011-06 00460430  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00460430
//
// 00460430  6aff                 push -1
// 00460432  6858949e00           push 0x9e9458
// 00460437  64a100000000         mov eax, dword ptr fs:[0]
// 0046043d  50                   push eax
// 0046043e  64892500000000       mov dword ptr fs:[0], esp
// 00460445  51                   push ecx
// 00460446  56                   push esi
// 00460447  57                   push edi
// 00460448  8bf1                 mov esi, ecx
// 0046044a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046044e  83ec0c               sub esp, 0xc
// 00460451  8bc4                 mov eax, esp
// 00460453  c70600000000         mov dword ptr [esi], 0
// 00460459  8908                 mov dword ptr [eax], ecx
// 0046045b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046045f  895004               mov dword ptr [eax + 4], edx
// 00460462  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00460466  894808               mov dword ptr [eax + 8], ecx
// 00460469  8b442430             mov eax, dword ptr [esp + 0x30]
// 0046046d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00460475  89642414             mov dword ptr [esp + 0x14], esp
// 00460479  85c0                 test eax, eax
// 0046047b  740c                 je 0x460489
// 0046047d  83c004               add eax, 4
// 00460480  ba01000000           mov edx, 1
// 00460485  f00fc110             lock xadd dword ptr [eax], edx
// 00460489  8bce                 mov ecx, esi
// 0046048b  e860feffff           call 0x4602f0
// 00460490  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00460494  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0046049c  85ff                 test edi, edi
// 0046049e  742a                 je 0x4604ca
// 004604a0  8d4704               lea eax, [edi + 4]
// 004604a3  83c9ff               or ecx, 0xffffffff
// 004604a6  f00fc108             lock xadd dword ptr [eax], ecx
// 004604aa  751e                 jne 0x4604ca
// 004604ac  8b17                 mov edx, dword ptr [edi]
// 004604ae  8b4204               mov eax, dword ptr [edx + 4]
// 004604b1  8bcf                 mov ecx, edi
// 004604b3  ffd0                 call eax
// 004604b5  8d4f08               lea ecx, [edi + 8]
// 004604b8  83caff               or edx, 0xffffffff
// 004604bb  f00fc111             lock xadd dword ptr [ecx], edx
// 004604bf  7509                 jne 0x4604ca
// 004604c1  8b07                 mov eax, dword ptr [edi]
// 004604c3  8b5008               mov edx, dword ptr [eax + 8]
// 004604c6  8bcf                 mov ecx, edi
// 004604c8  ffd2                 call edx
// 004604ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004604ce  5f                   pop edi
// 004604cf  8bc6                 mov eax, esi
// 004604d1  64890d00000000       mov dword ptr fs:[0], ecx
// 004604d8  5e                   pop esi
// 004604d9  83c410               add esp, 0x10
// 004604dc  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
