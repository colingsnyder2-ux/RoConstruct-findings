// roc 2011-06 007683a0  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007683a0
//
// 007683a0  6aff                 push -1
// 007683a2  6858949e00           push 0x9e9458
// 007683a7  64a100000000         mov eax, dword ptr fs:[0]
// 007683ad  50                   push eax
// 007683ae  64892500000000       mov dword ptr fs:[0], esp
// 007683b5  51                   push ecx
// 007683b6  56                   push esi
// 007683b7  57                   push edi
// 007683b8  8bf1                 mov esi, ecx
// 007683ba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007683be  83ec0c               sub esp, 0xc
// 007683c1  8bc4                 mov eax, esp
// 007683c3  c70600000000         mov dword ptr [esi], 0
// 007683c9  8908                 mov dword ptr [eax], ecx
// 007683cb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007683cf  895004               mov dword ptr [eax + 4], edx
// 007683d2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007683d6  894808               mov dword ptr [eax + 8], ecx
// 007683d9  8b442430             mov eax, dword ptr [esp + 0x30]
// 007683dd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 007683e5  89642414             mov dword ptr [esp + 0x14], esp
// 007683e9  85c0                 test eax, eax
// 007683eb  740c                 je 0x7683f9
// 007683ed  83c004               add eax, 4
// 007683f0  ba01000000           mov edx, 1
// 007683f5  f00fc110             lock xadd dword ptr [eax], edx
// 007683f9  8bce                 mov ecx, esi
// 007683fb  e830f6ffff           call 0x767a30
// 00768400  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00768404  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0076840c  85ff                 test edi, edi
// 0076840e  742a                 je 0x76843a
// 00768410  8d4704               lea eax, [edi + 4]
// 00768413  83c9ff               or ecx, 0xffffffff
// 00768416  f00fc108             lock xadd dword ptr [eax], ecx
// 0076841a  751e                 jne 0x76843a
// 0076841c  8b17                 mov edx, dword ptr [edi]
// 0076841e  8b4204               mov eax, dword ptr [edx + 4]
// 00768421  8bcf                 mov ecx, edi
// 00768423  ffd0                 call eax
// 00768425  8d4f08               lea ecx, [edi + 8]
// 00768428  83caff               or edx, 0xffffffff
// 0076842b  f00fc111             lock xadd dword ptr [ecx], edx
// 0076842f  7509                 jne 0x76843a
// 00768431  8b07                 mov eax, dword ptr [edi]
// 00768433  8b5008               mov edx, dword ptr [eax + 8]
// 00768436  8bcf                 mov ecx, edi
// 00768438  ffd2                 call edx
// 0076843a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076843e  5f                   pop edi
// 0076843f  8bc6                 mov eax, esi
// 00768441  64890d00000000       mov dword ptr fs:[0], ecx
// 00768448  5e                   pop esi
// 00768449  83c410               add esp, 0x10
// 0076844c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
