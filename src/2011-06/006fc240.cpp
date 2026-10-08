// roc 2011-06 006fc240  unit: RBX::VFlag::?$FactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fc240
//
// 006fc240  6aff                 push -1
// 006fc242  68688d9d00           push 0x9d8d68
// 006fc247  64a100000000         mov eax, dword ptr fs:[0]
// 006fc24d  50                   push eax
// 006fc24e  64892500000000       mov dword ptr fs:[0], esp
// 006fc255  51                   push ecx
// 006fc256  56                   push esi
// 006fc257  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006fc25b  83ec08               sub esp, 8
// 006fc25e  8bc4                 mov eax, esp
// 006fc260  8908                 mov dword ptr [eax], ecx
// 006fc262  8b542428             mov edx, dword ptr [esp + 0x28]
// 006fc266  895004               mov dword ptr [eax + 4], edx
// 006fc269  8b442428             mov eax, dword ptr [esp + 0x28]
// 006fc26d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006fc275  8964240c             mov dword ptr [esp + 0xc], esp
// 006fc279  85c0                 test eax, eax
// 006fc27b  740c                 je 0x6fc289
// 006fc27d  83c004               add eax, 4
// 006fc280  b901000000           mov ecx, 1
// 006fc285  f00fc108             lock xadd dword ptr [eax], ecx
// 006fc289  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006fc28d  8b5108               mov edx, dword ptr [ecx + 8]
// 006fc290  52                   push edx
// 006fc291  e8ca6ad8ff           call 0x482d60
// 006fc296  8b742420             mov esi, dword ptr [esp + 0x20]
// 006fc29a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006fc2a2  85f6                 test esi, esi
// 006fc2a4  742a                 je 0x6fc2d0
// 006fc2a6  8d4604               lea eax, [esi + 4]
// 006fc2a9  83c9ff               or ecx, 0xffffffff
// 006fc2ac  f00fc108             lock xadd dword ptr [eax], ecx
// 006fc2b0  751e                 jne 0x6fc2d0
// 006fc2b2  8b16                 mov edx, dword ptr [esi]
// 006fc2b4  8b4204               mov eax, dword ptr [edx + 4]
// 006fc2b7  8bce                 mov ecx, esi
// 006fc2b9  ffd0                 call eax
// 006fc2bb  8d4e08               lea ecx, [esi + 8]
// 006fc2be  83caff               or edx, 0xffffffff
// 006fc2c1  f00fc111             lock xadd dword ptr [ecx], edx
// 006fc2c5  7509                 jne 0x6fc2d0
// 006fc2c7  8b06                 mov eax, dword ptr [esi]
// 006fc2c9  8b5008               mov edx, dword ptr [eax + 8]
// 006fc2cc  8bce                 mov ecx, esi
// 006fc2ce  ffd2                 call edx
// 006fc2d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006fc2d4  64890d00000000       mov dword ptr fs:[0], ecx
// 006fc2db  5e                   pop esi
// 006fc2dc  83c410               add esp, 0x10
// 006fc2df  c3                   ret 
// library rbxgs-net/IdManager.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVIdManager@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
