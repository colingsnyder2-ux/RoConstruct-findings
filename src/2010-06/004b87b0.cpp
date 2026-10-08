// roc 2010-06 004b87b0  unit: RBX::Network::VPlayer::?$EventDesc  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004b87b0
//
// 004b87b0  6aff                 push -1
// 004b87b2  6888df9a00           push 0x9adf88
// 004b87b7  64a100000000         mov eax, dword ptr fs:[0]
// 004b87bd  50                   push eax
// 004b87be  64892500000000       mov dword ptr fs:[0], esp
// 004b87c5  51                   push ecx
// 004b87c6  56                   push esi
// 004b87c7  57                   push edi
// 004b87c8  8bf1                 mov esi, ecx
// 004b87ca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b87ce  83ec0c               sub esp, 0xc
// 004b87d1  8bc4                 mov eax, esp
// 004b87d3  c70600000000         mov dword ptr [esi], 0
// 004b87d9  8908                 mov dword ptr [eax], ecx
// 004b87db  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004b87df  895004               mov dword ptr [eax + 4], edx
// 004b87e2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004b87e6  894808               mov dword ptr [eax + 8], ecx
// 004b87e9  8b442430             mov eax, dword ptr [esp + 0x30]
// 004b87ed  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004b87f5  89642414             mov dword ptr [esp + 0x14], esp
// 004b87f9  85c0                 test eax, eax
// 004b87fb  740c                 je 0x4b8809
// 004b87fd  83c004               add eax, 4
// 004b8800  ba01000000           mov edx, 1
// 004b8805  f00fc110             lock xadd dword ptr [eax], edx
// 004b8809  8bce                 mov ecx, esi
// 004b880b  e870dbffff           call 0x4b6380
// 004b8810  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004b8814  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004b881c  85ff                 test edi, edi
// 004b881e  742a                 je 0x4b884a
// 004b8820  8d4704               lea eax, [edi + 4]
// 004b8823  83c9ff               or ecx, 0xffffffff
// 004b8826  f00fc108             lock xadd dword ptr [eax], ecx
// 004b882a  751e                 jne 0x4b884a
// 004b882c  8b17                 mov edx, dword ptr [edi]
// 004b882e  8b4204               mov eax, dword ptr [edx + 4]
// 004b8831  8bcf                 mov ecx, edi
// 004b8833  ffd0                 call eax
// 004b8835  8d4f08               lea ecx, [edi + 8]
// 004b8838  83caff               or edx, 0xffffffff
// 004b883b  f00fc111             lock xadd dword ptr [ecx], edx
// 004b883f  7509                 jne 0x4b884a
// 004b8841  8b07                 mov eax, dword ptr [edi]
// 004b8843  8b5008               mov edx, dword ptr [eax + 8]
// 004b8846  8bcf                 mov ecx, edi
// 004b8848  ffd2                 call edx
// 004b884a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b884e  5f                   pop edi
// 004b884f  8bc6                 mov eax, esi
// 004b8851  64890d00000000       mov dword ptr fs:[0], ecx
// 004b8858  5e                   pop esi
// 004b8859  83c410               add esp, 0x10
// 004b885c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
