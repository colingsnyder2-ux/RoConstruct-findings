// roc 2009-12 007413f0  unit: RBX::VDebrisService::?$FactoryProduct  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007413f0
//
// 007413f0  6aff                 push -1
// 007413f2  6888459400           push 0x944588
// 007413f7  64a100000000         mov eax, dword ptr fs:[0]
// 007413fd  50                   push eax
// 007413fe  64892500000000       mov dword ptr fs:[0], esp
// 00741405  51                   push ecx
// 00741406  56                   push esi
// 00741407  57                   push edi
// 00741408  8bf1                 mov esi, ecx
// 0074140a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0074140e  83ec0c               sub esp, 0xc
// 00741411  8bc4                 mov eax, esp
// 00741413  c70600000000         mov dword ptr [esi], 0
// 00741419  8908                 mov dword ptr [eax], ecx
// 0074141b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0074141f  895004               mov dword ptr [eax + 4], edx
// 00741422  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00741426  894808               mov dword ptr [eax + 8], ecx
// 00741429  8b442430             mov eax, dword ptr [esp + 0x30]
// 0074142d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00741435  89642414             mov dword ptr [esp + 0x14], esp
// 00741439  85c0                 test eax, eax
// 0074143b  740c                 je 0x741449
// 0074143d  83c004               add eax, 4
// 00741440  ba01000000           mov edx, 1
// 00741445  f00fc110             lock xadd dword ptr [eax], edx
// 00741449  8bce                 mov ecx, esi
// 0074144b  e8e0feffff           call 0x741330
// 00741450  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00741454  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0074145c  85ff                 test edi, edi
// 0074145e  742a                 je 0x74148a
// 00741460  8d4704               lea eax, [edi + 4]
// 00741463  83c9ff               or ecx, 0xffffffff
// 00741466  f00fc108             lock xadd dword ptr [eax], ecx
// 0074146a  751e                 jne 0x74148a
// 0074146c  8b17                 mov edx, dword ptr [edi]
// 0074146e  8b4204               mov eax, dword ptr [edx + 4]
// 00741471  8bcf                 mov ecx, edi
// 00741473  ffd0                 call eax
// 00741475  8d4f08               lea ecx, [edi + 8]
// 00741478  83caff               or edx, 0xffffffff
// 0074147b  f00fc111             lock xadd dword ptr [ecx], edx
// 0074147f  7509                 jne 0x74148a
// 00741481  8b07                 mov eax, dword ptr [edi]
// 00741483  8b5008               mov edx, dword ptr [eax + 8]
// 00741486  8bcf                 mov ecx, edi
// 00741488  ffd2                 call edx
// 0074148a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0074148e  5f                   pop edi
// 0074148f  8bc6                 mov eax, esi
// 00741491  64890d00000000       mov dword ptr fs:[0], ecx
// 00741498  5e                   pop esi
// 00741499  83c410               add esp, 0x10
// 0074149c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
