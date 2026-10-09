// roc 2009-12 0052c4d0  unit: RBX::Network::Server  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052c4d0
//
// 0052c4d0  6aff                 push -1
// 0052c4d2  6828799400           push 0x947928
// 0052c4d7  64a100000000         mov eax, dword ptr fs:[0]
// 0052c4dd  50                   push eax
// 0052c4de  64892500000000       mov dword ptr fs:[0], esp
// 0052c4e5  51                   push ecx
// 0052c4e6  56                   push esi
// 0052c4e7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052c4eb  83ec08               sub esp, 8
// 0052c4ee  8bc4                 mov eax, esp
// 0052c4f0  8908                 mov dword ptr [eax], ecx
// 0052c4f2  8b542428             mov edx, dword ptr [esp + 0x28]
// 0052c4f6  895004               mov dword ptr [eax + 4], edx
// 0052c4f9  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052c4fd  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0052c505  8964240c             mov dword ptr [esp + 0xc], esp
// 0052c509  85c0                 test eax, eax
// 0052c50b  740c                 je 0x52c519
// 0052c50d  83c004               add eax, 4
// 0052c510  b901000000           mov ecx, 1
// 0052c515  f00fc108             lock xadd dword ptr [eax], ecx
// 0052c519  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052c51d  8b5108               mov edx, dword ptr [ecx + 8]
// 0052c520  52                   push edx
// 0052c521  e85aa31300           call 0x666880
// 0052c526  8b742420             mov esi, dword ptr [esp + 0x20]
// 0052c52a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0052c532  85f6                 test esi, esi
// 0052c534  742a                 je 0x52c560
// 0052c536  8d4604               lea eax, [esi + 4]
// 0052c539  83c9ff               or ecx, 0xffffffff
// 0052c53c  f00fc108             lock xadd dword ptr [eax], ecx
// 0052c540  751e                 jne 0x52c560
// 0052c542  8b16                 mov edx, dword ptr [esi]
// 0052c544  8b4204               mov eax, dword ptr [edx + 4]
// 0052c547  8bce                 mov ecx, esi
// 0052c549  ffd0                 call eax
// 0052c54b  8d4e08               lea ecx, [esi + 8]
// 0052c54e  83caff               or edx, 0xffffffff
// 0052c551  f00fc111             lock xadd dword ptr [ecx], edx
// 0052c555  7509                 jne 0x52c560
// 0052c557  8b06                 mov eax, dword ptr [esi]
// 0052c559  8b5008               mov edx, dword ptr [eax + 8]
// 0052c55c  8bce                 mov ecx, esi
// 0052c55e  ffd2                 call edx
// 0052c560  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052c564  64890d00000000       mov dword ptr fs:[0], ecx
// 0052c56b  5e                   pop esi
// 0052c56c  83c410               add esp, 0x10
// 0052c56f  c3                   ret 
// library rbxgs-net/IdManager.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVIdManager@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
