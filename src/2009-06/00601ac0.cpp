// roc 2009-06 00601ac0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::slot  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00601ac0
//
// 00601ac0  6aff                 push -1
// 00601ac2  68883e8700           push 0x873e88
// 00601ac7  64a100000000         mov eax, dword ptr fs:[0]
// 00601acd  50                   push eax
// 00601ace  64892500000000       mov dword ptr fs:[0], esp
// 00601ad5  51                   push ecx
// 00601ad6  56                   push esi
// 00601ad7  57                   push edi
// 00601ad8  8bf1                 mov esi, ecx
// 00601ada  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00601ade  83ec0c               sub esp, 0xc
// 00601ae1  8bc4                 mov eax, esp
// 00601ae3  c70600000000         mov dword ptr [esi], 0
// 00601ae9  8908                 mov dword ptr [eax], ecx
// 00601aeb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00601aef  895004               mov dword ptr [eax + 4], edx
// 00601af2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00601af6  894808               mov dword ptr [eax + 8], ecx
// 00601af9  8b442430             mov eax, dword ptr [esp + 0x30]
// 00601afd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00601b05  89642414             mov dword ptr [esp + 0x14], esp
// 00601b09  85c0                 test eax, eax
// 00601b0b  740c                 je 0x601b19
// 00601b0d  83c004               add eax, 4
// 00601b10  ba01000000           mov edx, 1
// 00601b15  f00fc110             lock xadd dword ptr [eax], edx
// 00601b19  8bce                 mov ecx, esi
// 00601b1b  e820e2ffff           call 0x5ffd40
// 00601b20  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00601b24  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00601b2c  85ff                 test edi, edi
// 00601b2e  742a                 je 0x601b5a
// 00601b30  8d4704               lea eax, [edi + 4]
// 00601b33  83c9ff               or ecx, 0xffffffff
// 00601b36  f00fc108             lock xadd dword ptr [eax], ecx
// 00601b3a  751e                 jne 0x601b5a
// 00601b3c  8b17                 mov edx, dword ptr [edi]
// 00601b3e  8b4204               mov eax, dword ptr [edx + 4]
// 00601b41  8bcf                 mov ecx, edi
// 00601b43  ffd0                 call eax
// 00601b45  8d4f08               lea ecx, [edi + 8]
// 00601b48  83caff               or edx, 0xffffffff
// 00601b4b  f00fc111             lock xadd dword ptr [ecx], edx
// 00601b4f  7509                 jne 0x601b5a
// 00601b51  8b07                 mov eax, dword ptr [edi]
// 00601b53  8b5008               mov edx, dword ptr [eax + 8]
// 00601b56  8bcf                 mov ecx, edi
// 00601b58  ffd2                 call edx
// 00601b5a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00601b5e  5f                   pop edi
// 00601b5f  8bc6                 mov eax, esi
// 00601b61  64890d00000000       mov dword ptr fs:[0], ecx
// 00601b68  5e                   pop esi
// 00601b69  83c410               add esp, 0x10
// 00601b6c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
