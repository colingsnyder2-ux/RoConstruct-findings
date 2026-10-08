// roc 2010-06 005ea000  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ea000
//
// 005ea000  6aff                 push -1
// 005ea002  68e8679900           push 0x9967e8
// 005ea007  64a100000000         mov eax, dword ptr fs:[0]
// 005ea00d  50                   push eax
// 005ea00e  64892500000000       mov dword ptr fs:[0], esp
// 005ea015  51                   push ecx
// 005ea016  56                   push esi
// 005ea017  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ea01b  83ec08               sub esp, 8
// 005ea01e  8bc4                 mov eax, esp
// 005ea020  8908                 mov dword ptr [eax], ecx
// 005ea022  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ea026  895004               mov dword ptr [eax + 4], edx
// 005ea029  8b442428             mov eax, dword ptr [esp + 0x28]
// 005ea02d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005ea035  8964240c             mov dword ptr [esp + 0xc], esp
// 005ea039  85c0                 test eax, eax
// 005ea03b  740c                 je 0x5ea049
// 005ea03d  83c004               add eax, 4
// 005ea040  b901000000           mov ecx, 1
// 005ea045  f00fc108             lock xadd dword ptr [eax], ecx
// 005ea049  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ea04d  8b5108               mov edx, dword ptr [ecx + 8]
// 005ea050  52                   push edx
// 005ea051  e8ead3efff           call 0x4e7440
// 005ea056  8b742420             mov esi, dword ptr [esp + 0x20]
// 005ea05a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005ea062  85f6                 test esi, esi
// 005ea064  742a                 je 0x5ea090
// 005ea066  8d4604               lea eax, [esi + 4]
// 005ea069  83c9ff               or ecx, 0xffffffff
// 005ea06c  f00fc108             lock xadd dword ptr [eax], ecx
// 005ea070  751e                 jne 0x5ea090
// 005ea072  8b16                 mov edx, dword ptr [esi]
// 005ea074  8b4204               mov eax, dword ptr [edx + 4]
// 005ea077  8bce                 mov ecx, esi
// 005ea079  ffd0                 call eax
// 005ea07b  8d4e08               lea ecx, [esi + 8]
// 005ea07e  83caff               or edx, 0xffffffff
// 005ea081  f00fc111             lock xadd dword ptr [ecx], edx
// 005ea085  7509                 jne 0x5ea090
// 005ea087  8b06                 mov eax, dword ptr [esi]
// 005ea089  8b5008               mov edx, dword ptr [eax + 8]
// 005ea08c  8bce                 mov ecx, esi
// 005ea08e  ffd2                 call edx
// 005ea090  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ea094  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea09b  5e                   pop esi
// 005ea09c  83c410               add esp, 0x10
// 005ea09f  c3                   ret 
// library rbxgs-net/IdManager.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVIdManager@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
