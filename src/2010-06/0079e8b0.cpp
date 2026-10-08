// roc 2010-06 0079e8b0  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079e8b0
//
// 0079e8b0  6aff                 push -1
// 0079e8b2  6888df9a00           push 0x9adf88
// 0079e8b7  64a100000000         mov eax, dword ptr fs:[0]
// 0079e8bd  50                   push eax
// 0079e8be  64892500000000       mov dword ptr fs:[0], esp
// 0079e8c5  51                   push ecx
// 0079e8c6  56                   push esi
// 0079e8c7  57                   push edi
// 0079e8c8  8bf1                 mov esi, ecx
// 0079e8ca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079e8ce  83ec0c               sub esp, 0xc
// 0079e8d1  8bc4                 mov eax, esp
// 0079e8d3  c70600000000         mov dword ptr [esi], 0
// 0079e8d9  8908                 mov dword ptr [eax], ecx
// 0079e8db  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0079e8df  895004               mov dword ptr [eax + 4], edx
// 0079e8e2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0079e8e6  894808               mov dword ptr [eax + 8], ecx
// 0079e8e9  8b442430             mov eax, dword ptr [esp + 0x30]
// 0079e8ed  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0079e8f5  89642414             mov dword ptr [esp + 0x14], esp
// 0079e8f9  85c0                 test eax, eax
// 0079e8fb  740c                 je 0x79e909
// 0079e8fd  83c004               add eax, 4
// 0079e900  ba01000000           mov edx, 1
// 0079e905  f00fc110             lock xadd dword ptr [eax], edx
// 0079e909  8bce                 mov ecx, esi
// 0079e90b  e8e0feffff           call 0x79e7f0
// 0079e910  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0079e914  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0079e91c  85ff                 test edi, edi
// 0079e91e  742a                 je 0x79e94a
// 0079e920  8d4704               lea eax, [edi + 4]
// 0079e923  83c9ff               or ecx, 0xffffffff
// 0079e926  f00fc108             lock xadd dword ptr [eax], ecx
// 0079e92a  751e                 jne 0x79e94a
// 0079e92c  8b17                 mov edx, dword ptr [edi]
// 0079e92e  8b4204               mov eax, dword ptr [edx + 4]
// 0079e931  8bcf                 mov ecx, edi
// 0079e933  ffd0                 call eax
// 0079e935  8d4f08               lea ecx, [edi + 8]
// 0079e938  83caff               or edx, 0xffffffff
// 0079e93b  f00fc111             lock xadd dword ptr [ecx], edx
// 0079e93f  7509                 jne 0x79e94a
// 0079e941  8b07                 mov eax, dword ptr [edi]
// 0079e943  8b5008               mov edx, dword ptr [eax + 8]
// 0079e946  8bcf                 mov ecx, edi
// 0079e948  ffd2                 call edx
// 0079e94a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0079e94e  5f                   pop edi
// 0079e94f  8bc6                 mov eax, esi
// 0079e951  64890d00000000       mov dword ptr fs:[0], ecx
// 0079e958  5e                   pop esi
// 0079e959  83c410               add esp, 0x10
// 0079e95c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
