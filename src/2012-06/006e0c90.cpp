// roc 2012-06 006e0c90  unit: RBX::DataModel  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006e0c90
//
// 006e0c90  6aff                 push -1
// 006e0c92  68f810ab00           push 0xab10f8
// 006e0c97  64a100000000         mov eax, dword ptr fs:[0]
// 006e0c9d  50                   push eax
// 006e0c9e  64892500000000       mov dword ptr fs:[0], esp
// 006e0ca5  51                   push ecx
// 006e0ca6  56                   push esi
// 006e0ca7  57                   push edi
// 006e0ca8  8bf1                 mov esi, ecx
// 006e0caa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e0cae  83ec0c               sub esp, 0xc
// 006e0cb1  8bc4                 mov eax, esp
// 006e0cb3  c70600000000         mov dword ptr [esi], 0
// 006e0cb9  8908                 mov dword ptr [eax], ecx
// 006e0cbb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006e0cbf  895004               mov dword ptr [eax + 4], edx
// 006e0cc2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006e0cc6  894808               mov dword ptr [eax + 8], ecx
// 006e0cc9  8b442430             mov eax, dword ptr [esp + 0x30]
// 006e0ccd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006e0cd5  89642414             mov dword ptr [esp + 0x14], esp
// 006e0cd9  85c0                 test eax, eax
// 006e0cdb  740c                 je 0x6e0ce9
// 006e0cdd  83c004               add eax, 4
// 006e0ce0  ba01000000           mov edx, 1
// 006e0ce5  f00fc110             lock xadd dword ptr [eax], edx
// 006e0ce9  8bce                 mov ecx, esi
// 006e0ceb  e860e7ffff           call 0x6df450
// 006e0cf0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006e0cf4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006e0cfc  85ff                 test edi, edi
// 006e0cfe  742a                 je 0x6e0d2a
// 006e0d00  8d4704               lea eax, [edi + 4]
// 006e0d03  83c9ff               or ecx, 0xffffffff
// 006e0d06  f00fc108             lock xadd dword ptr [eax], ecx
// 006e0d0a  751e                 jne 0x6e0d2a
// 006e0d0c  8b17                 mov edx, dword ptr [edi]
// 006e0d0e  8b4204               mov eax, dword ptr [edx + 4]
// 006e0d11  8bcf                 mov ecx, edi
// 006e0d13  ffd0                 call eax
// 006e0d15  8d4f08               lea ecx, [edi + 8]
// 006e0d18  83caff               or edx, 0xffffffff
// 006e0d1b  f00fc111             lock xadd dword ptr [ecx], edx
// 006e0d1f  7509                 jne 0x6e0d2a
// 006e0d21  8b07                 mov eax, dword ptr [edi]
// 006e0d23  8b5008               mov edx, dword ptr [eax + 8]
// 006e0d26  8bcf                 mov ecx, edi
// 006e0d28  ffd2                 call edx
// 006e0d2a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e0d2e  5f                   pop edi
// 006e0d2f  8bc6                 mov eax, esi
// 006e0d31  64890d00000000       mov dword ptr fs:[0], ecx
// 006e0d38  5e                   pop esi
// 006e0d39  83c410               add esp, 0x10
// 006e0d3c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
