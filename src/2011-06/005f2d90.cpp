// roc 2011-06 005f2d90  unit: $$A6A_NXZ$0A::?$CallbackDescImpl  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005f2d90
//
// 005f2d90  6aff                 push -1
// 005f2d92  6858949e00           push 0x9e9458
// 005f2d97  64a100000000         mov eax, dword ptr fs:[0]
// 005f2d9d  50                   push eax
// 005f2d9e  64892500000000       mov dword ptr fs:[0], esp
// 005f2da5  51                   push ecx
// 005f2da6  56                   push esi
// 005f2da7  57                   push edi
// 005f2da8  8bf1                 mov esi, ecx
// 005f2daa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f2dae  83ec0c               sub esp, 0xc
// 005f2db1  8bc4                 mov eax, esp
// 005f2db3  c70600000000         mov dword ptr [esi], 0
// 005f2db9  8908                 mov dword ptr [eax], ecx
// 005f2dbb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005f2dbf  895004               mov dword ptr [eax + 4], edx
// 005f2dc2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f2dc6  894808               mov dword ptr [eax + 8], ecx
// 005f2dc9  8b442430             mov eax, dword ptr [esp + 0x30]
// 005f2dcd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f2dd5  89642414             mov dword ptr [esp + 0x14], esp
// 005f2dd9  85c0                 test eax, eax
// 005f2ddb  740c                 je 0x5f2de9
// 005f2ddd  83c004               add eax, 4
// 005f2de0  ba01000000           mov edx, 1
// 005f2de5  f00fc110             lock xadd dword ptr [eax], edx
// 005f2de9  8bce                 mov ecx, esi
// 005f2deb  e840e7ffff           call 0x5f1530
// 005f2df0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005f2df4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005f2dfc  85ff                 test edi, edi
// 005f2dfe  742a                 je 0x5f2e2a
// 005f2e00  8d4704               lea eax, [edi + 4]
// 005f2e03  83c9ff               or ecx, 0xffffffff
// 005f2e06  f00fc108             lock xadd dword ptr [eax], ecx
// 005f2e0a  751e                 jne 0x5f2e2a
// 005f2e0c  8b17                 mov edx, dword ptr [edi]
// 005f2e0e  8b4204               mov eax, dword ptr [edx + 4]
// 005f2e11  8bcf                 mov ecx, edi
// 005f2e13  ffd0                 call eax
// 005f2e15  8d4f08               lea ecx, [edi + 8]
// 005f2e18  83caff               or edx, 0xffffffff
// 005f2e1b  f00fc111             lock xadd dword ptr [ecx], edx
// 005f2e1f  7509                 jne 0x5f2e2a
// 005f2e21  8b07                 mov eax, dword ptr [edi]
// 005f2e23  8b5008               mov edx, dword ptr [eax + 8]
// 005f2e26  8bcf                 mov ecx, edi
// 005f2e28  ffd2                 call edx
// 005f2e2a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f2e2e  5f                   pop edi
// 005f2e2f  8bc6                 mov eax, esi
// 005f2e31  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2e38  5e                   pop esi
// 005f2e39  83c410               add esp, 0x10
// 005f2e3c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
