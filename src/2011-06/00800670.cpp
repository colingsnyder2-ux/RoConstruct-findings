// roc 2011-06 00800670  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00800670
//
// 00800670  6aff                 push -1
// 00800672  6858949e00           push 0x9e9458
// 00800677  64a100000000         mov eax, dword ptr fs:[0]
// 0080067d  50                   push eax
// 0080067e  64892500000000       mov dword ptr fs:[0], esp
// 00800685  51                   push ecx
// 00800686  56                   push esi
// 00800687  57                   push edi
// 00800688  8bf1                 mov esi, ecx
// 0080068a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0080068e  83ec0c               sub esp, 0xc
// 00800691  8bc4                 mov eax, esp
// 00800693  c70600000000         mov dword ptr [esi], 0
// 00800699  8908                 mov dword ptr [eax], ecx
// 0080069b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0080069f  895004               mov dword ptr [eax + 4], edx
// 008006a2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008006a6  894808               mov dword ptr [eax + 8], ecx
// 008006a9  8b442430             mov eax, dword ptr [esp + 0x30]
// 008006ad  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008006b5  89642414             mov dword ptr [esp + 0x14], esp
// 008006b9  85c0                 test eax, eax
// 008006bb  740c                 je 0x8006c9
// 008006bd  83c004               add eax, 4
// 008006c0  ba01000000           mov edx, 1
// 008006c5  f00fc110             lock xadd dword ptr [eax], edx
// 008006c9  8bce                 mov ecx, esi
// 008006cb  e8e0feffff           call 0x8005b0
// 008006d0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008006d4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008006dc  85ff                 test edi, edi
// 008006de  742a                 je 0x80070a
// 008006e0  8d4704               lea eax, [edi + 4]
// 008006e3  83c9ff               or ecx, 0xffffffff
// 008006e6  f00fc108             lock xadd dword ptr [eax], ecx
// 008006ea  751e                 jne 0x80070a
// 008006ec  8b17                 mov edx, dword ptr [edi]
// 008006ee  8b4204               mov eax, dword ptr [edx + 4]
// 008006f1  8bcf                 mov ecx, edi
// 008006f3  ffd0                 call eax
// 008006f5  8d4f08               lea ecx, [edi + 8]
// 008006f8  83caff               or edx, 0xffffffff
// 008006fb  f00fc111             lock xadd dword ptr [ecx], edx
// 008006ff  7509                 jne 0x80070a
// 00800701  8b07                 mov eax, dword ptr [edi]
// 00800703  8b5008               mov edx, dword ptr [eax + 8]
// 00800706  8bcf                 mov ecx, edi
// 00800708  ffd2                 call edx
// 0080070a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080070e  5f                   pop edi
// 0080070f  8bc6                 mov eax, esi
// 00800711  64890d00000000       mov dword ptr fs:[0], ecx
// 00800718  5e                   pop esi
// 00800719  83c410               add esp, 0x10
// 0080071c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
