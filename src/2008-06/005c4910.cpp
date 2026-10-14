// roc 2008-06 005c4910  unit: RBX::VVisit::?$FactoryProduct  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c4910
//
// 005c4910  6aff                 push -1
// 005c4912  687a497d00           push 0x7d497a
// 005c4917  64a100000000         mov eax, dword ptr fs:[0]
// 005c491d  50                   push eax
// 005c491e  64892500000000       mov dword ptr fs:[0], esp
// 005c4925  83ec28               sub esp, 0x28
// 005c4928  55                   push ebp
// 005c4929  56                   push esi
// 005c492a  57                   push edi
// 005c492b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c4933  51                   push ecx
// 005c4934  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 005c4938  8bc4                 mov eax, esp
// 005c493a  89642414             mov dword ptr [esp + 0x14], esp
// 005c493e  83ec1c               sub esp, 0x1c
// 005c4941  8908                 mov dword ptr [eax], ecx
// 005c4943  8d54246c             lea edx, [esp + 0x6c]
// 005c4947  89a42488000000       mov dword ptr [esp + 0x88], esp
// 005c494e  8bcc                 mov ecx, esp
// 005c4950  52                   push edx
// 005c4951  c744246001000000     mov dword ptr [esp + 0x60], 1
// 005c4959  ff155c248000         call dword ptr [0x80245c]
// 005c495f  8d4c2434             lea ecx, [esp + 0x34]
// 005c4963  e8b8fdffff           call 0x5c4720
// 005c4968  8bf0                 mov esi, eax
// 005c496a  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 005c496e  8b442448             mov eax, dword ptr [esp + 0x48]
// 005c4972  8d6f04               lea ebp, [edi + 4]
// 005c4975  56                   push esi
// 005c4976  8bcd                 mov ecx, ebp
// 005c4978  c644244002           mov byte ptr [esp + 0x40], 2
// 005c497d  8907                 mov dword ptr [edi], eax
// 005c497f  ff155c248000         call dword ptr [0x80245c]
// 005c4985  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005c4988  894d1c               mov dword ptr [ebp + 0x1c], ecx
// 005c498b  8d4c2414             lea ecx, [esp + 0x14]
// 005c498f  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005c4997  c644243c01           mov byte ptr [esp + 0x3c], 1
// 005c499c  ff1568248000         call dword ptr [0x802468]
// 005c49a2  8d4c244c             lea ecx, [esp + 0x4c]
// 005c49a6  c644243c00           mov byte ptr [esp + 0x3c], 0
// 005c49ab  ff1568248000         call dword ptr [0x802468]
// 005c49b1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005c49b5  8bc7                 mov eax, edi
// 005c49b7  5f                   pop edi
// 005c49b8  5e                   pop esi
// 005c49b9  64890d00000000       mov dword ptr fs:[0], ecx
// 005c49c0  5d                   pop ebp
// 005c49c1  83c434               add esp, 0x34
// 005c49c4  c3                   ret 
// library rbxgs-dll/v8datamodel\Visit.cpp (function ??$bind@W4work_result@worker_thread@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV45@H@boost@@YA?AV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V?$value@H@23@@_bi@boost@@@_bi@0@P6A?AW4work_result@worker_thread@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z0H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll v8datamodel/Visit.cpp
