// roc 2011-06 005f2ce0  unit: $$A6A_NXZ$0A::?$CallbackDescImpl  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005f2ce0
//
// 005f2ce0  6aff                 push -1
// 005f2ce2  6858949e00           push 0x9e9458
// 005f2ce7  64a100000000         mov eax, dword ptr fs:[0]
// 005f2ced  50                   push eax
// 005f2cee  64892500000000       mov dword ptr fs:[0], esp
// 005f2cf5  51                   push ecx
// 005f2cf6  56                   push esi
// 005f2cf7  57                   push edi
// 005f2cf8  8bf1                 mov esi, ecx
// 005f2cfa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f2cfe  83ec0c               sub esp, 0xc
// 005f2d01  8bc4                 mov eax, esp
// 005f2d03  c70600000000         mov dword ptr [esi], 0
// 005f2d09  8908                 mov dword ptr [eax], ecx
// 005f2d0b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005f2d0f  895004               mov dword ptr [eax + 4], edx
// 005f2d12  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f2d16  894808               mov dword ptr [eax + 8], ecx
// 005f2d19  8b442430             mov eax, dword ptr [esp + 0x30]
// 005f2d1d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f2d25  89642414             mov dword ptr [esp + 0x14], esp
// 005f2d29  85c0                 test eax, eax
// 005f2d2b  740c                 je 0x5f2d39
// 005f2d2d  83c004               add eax, 4
// 005f2d30  ba01000000           mov edx, 1
// 005f2d35  f00fc110             lock xadd dword ptr [eax], edx
// 005f2d39  8bce                 mov ecx, esi
// 005f2d3b  e830e7ffff           call 0x5f1470
// 005f2d40  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005f2d44  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005f2d4c  85ff                 test edi, edi
// 005f2d4e  742a                 je 0x5f2d7a
// 005f2d50  8d4704               lea eax, [edi + 4]
// 005f2d53  83c9ff               or ecx, 0xffffffff
// 005f2d56  f00fc108             lock xadd dword ptr [eax], ecx
// 005f2d5a  751e                 jne 0x5f2d7a
// 005f2d5c  8b17                 mov edx, dword ptr [edi]
// 005f2d5e  8b4204               mov eax, dword ptr [edx + 4]
// 005f2d61  8bcf                 mov ecx, edi
// 005f2d63  ffd0                 call eax
// 005f2d65  8d4f08               lea ecx, [edi + 8]
// 005f2d68  83caff               or edx, 0xffffffff
// 005f2d6b  f00fc111             lock xadd dword ptr [ecx], edx
// 005f2d6f  7509                 jne 0x5f2d7a
// 005f2d71  8b07                 mov eax, dword ptr [edi]
// 005f2d73  8b5008               mov edx, dword ptr [eax + 8]
// 005f2d76  8bcf                 mov ecx, edi
// 005f2d78  ffd2                 call edx
// 005f2d7a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f2d7e  5f                   pop edi
// 005f2d7f  8bc6                 mov eax, esi
// 005f2d81  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2d88  5e                   pop esi
// 005f2d89  83c410               add esp, 0x10
// 005f2d8c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
