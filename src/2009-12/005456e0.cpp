// roc 2009-12 005456e0  unit: RBX::Network::VReplicator::?$BoundFuncDesc  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005456e0
//
// 005456e0  6aff                 push -1
// 005456e2  6888459400           push 0x944588
// 005456e7  64a100000000         mov eax, dword ptr fs:[0]
// 005456ed  50                   push eax
// 005456ee  64892500000000       mov dword ptr fs:[0], esp
// 005456f5  51                   push ecx
// 005456f6  56                   push esi
// 005456f7  57                   push edi
// 005456f8  8bf1                 mov esi, ecx
// 005456fa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005456fe  83ec0c               sub esp, 0xc
// 00545701  8bc4                 mov eax, esp
// 00545703  c70600000000         mov dword ptr [esi], 0
// 00545709  8908                 mov dword ptr [eax], ecx
// 0054570b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0054570f  895004               mov dword ptr [eax + 4], edx
// 00545712  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00545716  894808               mov dword ptr [eax + 8], ecx
// 00545719  8b442430             mov eax, dword ptr [esp + 0x30]
// 0054571d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00545725  89642414             mov dword ptr [esp + 0x14], esp
// 00545729  85c0                 test eax, eax
// 0054572b  740c                 je 0x545739
// 0054572d  83c004               add eax, 4
// 00545730  ba01000000           mov edx, 1
// 00545735  f00fc110             lock xadd dword ptr [eax], edx
// 00545739  8bce                 mov ecx, esi
// 0054573b  e870eaffff           call 0x5441b0
// 00545740  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00545744  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0054574c  85ff                 test edi, edi
// 0054574e  742a                 je 0x54577a
// 00545750  8d4704               lea eax, [edi + 4]
// 00545753  83c9ff               or ecx, 0xffffffff
// 00545756  f00fc108             lock xadd dword ptr [eax], ecx
// 0054575a  751e                 jne 0x54577a
// 0054575c  8b17                 mov edx, dword ptr [edi]
// 0054575e  8b4204               mov eax, dword ptr [edx + 4]
// 00545761  8bcf                 mov ecx, edi
// 00545763  ffd0                 call eax
// 00545765  8d4f08               lea ecx, [edi + 8]
// 00545768  83caff               or edx, 0xffffffff
// 0054576b  f00fc111             lock xadd dword ptr [ecx], edx
// 0054576f  7509                 jne 0x54577a
// 00545771  8b07                 mov eax, dword ptr [edi]
// 00545773  8b5008               mov edx, dword ptr [eax + 8]
// 00545776  8bcf                 mov ecx, edi
// 00545778  ffd2                 call edx
// 0054577a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054577e  5f                   pop edi
// 0054577f  8bc6                 mov eax, esi
// 00545781  64890d00000000       mov dword ptr fs:[0], ecx
// 00545788  5e                   pop esi
// 00545789  83c410               add esp, 0x10
// 0054578c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
