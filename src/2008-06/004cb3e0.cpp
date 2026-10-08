// roc 2008-06 004cb3e0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cb3e0
//
// 004cb3e0  6aff                 push -1
// 004cb3e2  6818047c00           push 0x7c0418
// 004cb3e7  64a100000000         mov eax, dword ptr fs:[0]
// 004cb3ed  50                   push eax
// 004cb3ee  64892500000000       mov dword ptr fs:[0], esp
// 004cb3f5  51                   push ecx
// 004cb3f6  56                   push esi
// 004cb3f7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004cb3fb  83ec08               sub esp, 8
// 004cb3fe  8bc4                 mov eax, esp
// 004cb400  8908                 mov dword ptr [eax], ecx
// 004cb402  8b542428             mov edx, dword ptr [esp + 0x28]
// 004cb406  895004               mov dword ptr [eax + 4], edx
// 004cb409  8b442428             mov eax, dword ptr [esp + 0x28]
// 004cb40d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004cb415  8964240c             mov dword ptr [esp + 0xc], esp
// 004cb419  85c0                 test eax, eax
// 004cb41b  740c                 je 0x4cb429
// 004cb41d  83c004               add eax, 4
// 004cb420  b901000000           mov ecx, 1
// 004cb425  f00fc108             lock xadd dword ptr [eax], ecx
// 004cb429  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004cb42d  8b5108               mov edx, dword ptr [ecx + 8]
// 004cb430  52                   push edx
// 004cb431  e8eabf0b00           call 0x587420
// 004cb436  8b742420             mov esi, dword ptr [esp + 0x20]
// 004cb43a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004cb442  85f6                 test esi, esi
// 004cb444  742a                 je 0x4cb470
// 004cb446  8d4604               lea eax, [esi + 4]
// 004cb449  83c9ff               or ecx, 0xffffffff
// 004cb44c  f00fc108             lock xadd dword ptr [eax], ecx
// 004cb450  751e                 jne 0x4cb470
// 004cb452  8b16                 mov edx, dword ptr [esi]
// 004cb454  8b4204               mov eax, dword ptr [edx + 4]
// 004cb457  8bce                 mov ecx, esi
// 004cb459  ffd0                 call eax
// 004cb45b  8d4e08               lea ecx, [esi + 8]
// 004cb45e  83caff               or edx, 0xffffffff
// 004cb461  f00fc111             lock xadd dword ptr [ecx], edx
// 004cb465  7509                 jne 0x4cb470
// 004cb467  8b06                 mov eax, dword ptr [esi]
// 004cb469  8b5008               mov edx, dword ptr [eax + 8]
// 004cb46c  8bce                 mov ecx, esi
// 004cb46e  ffd2                 call edx
// 004cb470  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cb474  64890d00000000       mov dword ptr fs:[0], ecx
// 004cb47b  5e                   pop esi
// 004cb47c  83c410               add esp, 0x10
// 004cb47f  c3                   ret 
// library rbxgs-net/IdManager.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVIdManager@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
