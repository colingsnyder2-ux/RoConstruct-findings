// roc 2009-12 00542660  unit: RBX::VMotor::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00542660
//
// 00542660  6aff                 push -1
// 00542662  6888459400           push 0x944588
// 00542667  64a100000000         mov eax, dword ptr fs:[0]
// 0054266d  50                   push eax
// 0054266e  64892500000000       mov dword ptr fs:[0], esp
// 00542675  51                   push ecx
// 00542676  56                   push esi
// 00542677  57                   push edi
// 00542678  8bf1                 mov esi, ecx
// 0054267a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054267e  83ec0c               sub esp, 0xc
// 00542681  8bc4                 mov eax, esp
// 00542683  c70600000000         mov dword ptr [esi], 0
// 00542689  8908                 mov dword ptr [eax], ecx
// 0054268b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0054268f  895004               mov dword ptr [eax + 4], edx
// 00542692  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00542696  894808               mov dword ptr [eax + 8], ecx
// 00542699  8b442430             mov eax, dword ptr [esp + 0x30]
// 0054269d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005426a5  89642414             mov dword ptr [esp + 0x14], esp
// 005426a9  85c0                 test eax, eax
// 005426ab  740c                 je 0x5426b9
// 005426ad  83c004               add eax, 4
// 005426b0  ba01000000           mov edx, 1
// 005426b5  f00fc110             lock xadd dword ptr [eax], edx
// 005426b9  8bce                 mov ecx, esi
// 005426bb  e8a0e6ffff           call 0x540d60
// 005426c0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005426c4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005426cc  85ff                 test edi, edi
// 005426ce  742a                 je 0x5426fa
// 005426d0  8d4704               lea eax, [edi + 4]
// 005426d3  83c9ff               or ecx, 0xffffffff
// 005426d6  f00fc108             lock xadd dword ptr [eax], ecx
// 005426da  751e                 jne 0x5426fa
// 005426dc  8b17                 mov edx, dword ptr [edi]
// 005426de  8b4204               mov eax, dword ptr [edx + 4]
// 005426e1  8bcf                 mov ecx, edi
// 005426e3  ffd0                 call eax
// 005426e5  8d4f08               lea ecx, [edi + 8]
// 005426e8  83caff               or edx, 0xffffffff
// 005426eb  f00fc111             lock xadd dword ptr [ecx], edx
// 005426ef  7509                 jne 0x5426fa
// 005426f1  8b07                 mov eax, dword ptr [edi]
// 005426f3  8b5008               mov edx, dword ptr [eax + 8]
// 005426f6  8bcf                 mov ecx, edi
// 005426f8  ffd2                 call edx
// 005426fa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005426fe  5f                   pop edi
// 005426ff  8bc6                 mov eax, esi
// 00542701  64890d00000000       mov dword ptr fs:[0], ecx
// 00542708  5e                   pop esi
// 00542709  83c410               add esp, 0x10
// 0054270c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
