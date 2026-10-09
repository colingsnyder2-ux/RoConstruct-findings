// roc 2009-12 007ea580  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ea580
//
// 007ea580  6aff                 push -1
// 007ea582  6888459400           push 0x944588
// 007ea587  64a100000000         mov eax, dword ptr fs:[0]
// 007ea58d  50                   push eax
// 007ea58e  64892500000000       mov dword ptr fs:[0], esp
// 007ea595  51                   push ecx
// 007ea596  56                   push esi
// 007ea597  57                   push edi
// 007ea598  8bf1                 mov esi, ecx
// 007ea59a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007ea59e  83ec0c               sub esp, 0xc
// 007ea5a1  8bc4                 mov eax, esp
// 007ea5a3  c70600000000         mov dword ptr [esi], 0
// 007ea5a9  8908                 mov dword ptr [eax], ecx
// 007ea5ab  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007ea5af  895004               mov dword ptr [eax + 4], edx
// 007ea5b2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007ea5b6  894808               mov dword ptr [eax + 8], ecx
// 007ea5b9  8b442430             mov eax, dword ptr [esp + 0x30]
// 007ea5bd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 007ea5c5  89642414             mov dword ptr [esp + 0x14], esp
// 007ea5c9  85c0                 test eax, eax
// 007ea5cb  740c                 je 0x7ea5d9
// 007ea5cd  83c004               add eax, 4
// 007ea5d0  ba01000000           mov edx, 1
// 007ea5d5  f00fc110             lock xadd dword ptr [eax], edx
// 007ea5d9  8bce                 mov ecx, esi
// 007ea5db  e860feffff           call 0x7ea440
// 007ea5e0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007ea5e4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007ea5ec  85ff                 test edi, edi
// 007ea5ee  742a                 je 0x7ea61a
// 007ea5f0  8d4704               lea eax, [edi + 4]
// 007ea5f3  83c9ff               or ecx, 0xffffffff
// 007ea5f6  f00fc108             lock xadd dword ptr [eax], ecx
// 007ea5fa  751e                 jne 0x7ea61a
// 007ea5fc  8b17                 mov edx, dword ptr [edi]
// 007ea5fe  8b4204               mov eax, dword ptr [edx + 4]
// 007ea601  8bcf                 mov ecx, edi
// 007ea603  ffd0                 call eax
// 007ea605  8d4f08               lea ecx, [edi + 8]
// 007ea608  83caff               or edx, 0xffffffff
// 007ea60b  f00fc111             lock xadd dword ptr [ecx], edx
// 007ea60f  7509                 jne 0x7ea61a
// 007ea611  8b07                 mov eax, dword ptr [edi]
// 007ea613  8b5008               mov edx, dword ptr [eax + 8]
// 007ea616  8bcf                 mov ecx, edi
// 007ea618  ffd2                 call edx
// 007ea61a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007ea61e  5f                   pop edi
// 007ea61f  8bc6                 mov eax, esi
// 007ea621  64890d00000000       mov dword ptr fs:[0], ecx
// 007ea628  5e                   pop esi
// 007ea629  83c410               add esp, 0x10
// 007ea62c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
