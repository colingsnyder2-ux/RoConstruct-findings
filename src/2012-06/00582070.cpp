// roc 2012-06 00582070  unit: RBX::Network::Replicator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00582070
//
// 00582070  6aff                 push -1
// 00582072  68f810ab00           push 0xab10f8
// 00582077  64a100000000         mov eax, dword ptr fs:[0]
// 0058207d  50                   push eax
// 0058207e  64892500000000       mov dword ptr fs:[0], esp
// 00582085  51                   push ecx
// 00582086  56                   push esi
// 00582087  57                   push edi
// 00582088  8bf1                 mov esi, ecx
// 0058208a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0058208e  83ec0c               sub esp, 0xc
// 00582091  8bc4                 mov eax, esp
// 00582093  c70600000000         mov dword ptr [esi], 0
// 00582099  8908                 mov dword ptr [eax], ecx
// 0058209b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0058209f  895004               mov dword ptr [eax + 4], edx
// 005820a2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005820a6  894808               mov dword ptr [eax + 8], ecx
// 005820a9  8b442430             mov eax, dword ptr [esp + 0x30]
// 005820ad  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005820b5  89642414             mov dword ptr [esp + 0x14], esp
// 005820b9  85c0                 test eax, eax
// 005820bb  740c                 je 0x5820c9
// 005820bd  83c004               add eax, 4
// 005820c0  ba01000000           mov edx, 1
// 005820c5  f00fc110             lock xadd dword ptr [eax], edx
// 005820c9  8bce                 mov ecx, esi
// 005820cb  e880e8ffff           call 0x580950
// 005820d0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005820d4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005820dc  85ff                 test edi, edi
// 005820de  742a                 je 0x58210a
// 005820e0  8d4704               lea eax, [edi + 4]
// 005820e3  83c9ff               or ecx, 0xffffffff
// 005820e6  f00fc108             lock xadd dword ptr [eax], ecx
// 005820ea  751e                 jne 0x58210a
// 005820ec  8b17                 mov edx, dword ptr [edi]
// 005820ee  8b4204               mov eax, dword ptr [edx + 4]
// 005820f1  8bcf                 mov ecx, edi
// 005820f3  ffd0                 call eax
// 005820f5  8d4f08               lea ecx, [edi + 8]
// 005820f8  83caff               or edx, 0xffffffff
// 005820fb  f00fc111             lock xadd dword ptr [ecx], edx
// 005820ff  7509                 jne 0x58210a
// 00582101  8b07                 mov eax, dword ptr [edi]
// 00582103  8b5008               mov edx, dword ptr [eax + 8]
// 00582106  8bcf                 mov ecx, edi
// 00582108  ffd2                 call edx
// 0058210a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058210e  5f                   pop edi
// 0058210f  8bc6                 mov eax, esi
// 00582111  64890d00000000       mov dword ptr fs:[0], ecx
// 00582118  5e                   pop esi
// 00582119  83c410               add esp, 0x10
// 0058211c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
