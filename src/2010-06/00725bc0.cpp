// roc 2010-06 00725bc0  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00725bc0
//
// 00725bc0  6aff                 push -1
// 00725bc2  6888df9a00           push 0x9adf88
// 00725bc7  64a100000000         mov eax, dword ptr fs:[0]
// 00725bcd  50                   push eax
// 00725bce  64892500000000       mov dword ptr fs:[0], esp
// 00725bd5  51                   push ecx
// 00725bd6  56                   push esi
// 00725bd7  57                   push edi
// 00725bd8  8bf1                 mov esi, ecx
// 00725bda  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00725bde  83ec0c               sub esp, 0xc
// 00725be1  8bc4                 mov eax, esp
// 00725be3  c70600000000         mov dword ptr [esi], 0
// 00725be9  8908                 mov dword ptr [eax], ecx
// 00725beb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00725bef  895004               mov dword ptr [eax + 4], edx
// 00725bf2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00725bf6  894808               mov dword ptr [eax + 8], ecx
// 00725bf9  8b442430             mov eax, dword ptr [esp + 0x30]
// 00725bfd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00725c05  89642414             mov dword ptr [esp + 0x14], esp
// 00725c09  85c0                 test eax, eax
// 00725c0b  740c                 je 0x725c19
// 00725c0d  83c004               add eax, 4
// 00725c10  ba01000000           mov edx, 1
// 00725c15  f00fc110             lock xadd dword ptr [eax], edx
// 00725c19  8bce                 mov ecx, esi
// 00725c1b  e8e0fbffff           call 0x725800
// 00725c20  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00725c24  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00725c2c  85ff                 test edi, edi
// 00725c2e  742a                 je 0x725c5a
// 00725c30  8d4704               lea eax, [edi + 4]
// 00725c33  83c9ff               or ecx, 0xffffffff
// 00725c36  f00fc108             lock xadd dword ptr [eax], ecx
// 00725c3a  751e                 jne 0x725c5a
// 00725c3c  8b17                 mov edx, dword ptr [edi]
// 00725c3e  8b4204               mov eax, dword ptr [edx + 4]
// 00725c41  8bcf                 mov ecx, edi
// 00725c43  ffd0                 call eax
// 00725c45  8d4f08               lea ecx, [edi + 8]
// 00725c48  83caff               or edx, 0xffffffff
// 00725c4b  f00fc111             lock xadd dword ptr [ecx], edx
// 00725c4f  7509                 jne 0x725c5a
// 00725c51  8b07                 mov eax, dword ptr [edi]
// 00725c53  8b5008               mov edx, dword ptr [eax + 8]
// 00725c56  8bcf                 mov ecx, edi
// 00725c58  ffd2                 call edx
// 00725c5a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00725c5e  5f                   pop edi
// 00725c5f  8bc6                 mov eax, esi
// 00725c61  64890d00000000       mov dword ptr fs:[0], ecx
// 00725c68  5e                   pop esi
// 00725c69  83c410               add esp, 0x10
// 00725c6c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
