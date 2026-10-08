// roc 2009-06 0047de30  unit: Ogre::RbxPart  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0047de30
//
// 0047de30  6aff                 push -1
// 0047de32  6808b08600           push 0x86b008
// 0047de37  64a100000000         mov eax, dword ptr fs:[0]
// 0047de3d  50                   push eax
// 0047de3e  64892500000000       mov dword ptr fs:[0], esp
// 0047de45  51                   push ecx
// 0047de46  56                   push esi
// 0047de47  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047de4b  83ec08               sub esp, 8
// 0047de4e  8bc4                 mov eax, esp
// 0047de50  8908                 mov dword ptr [eax], ecx
// 0047de52  8b542428             mov edx, dword ptr [esp + 0x28]
// 0047de56  895004               mov dword ptr [eax + 4], edx
// 0047de59  8b442428             mov eax, dword ptr [esp + 0x28]
// 0047de5d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0047de65  8964240c             mov dword ptr [esp + 0xc], esp
// 0047de69  85c0                 test eax, eax
// 0047de6b  740c                 je 0x47de79
// 0047de6d  83c004               add eax, 4
// 0047de70  b901000000           mov ecx, 1
// 0047de75  f00fc108             lock xadd dword ptr [eax], ecx
// 0047de79  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0047de7d  8b5108               mov edx, dword ptr [ecx + 8]
// 0047de80  52                   push edx
// 0047de81  e8ea9a0900           call 0x517970
// 0047de86  8b742420             mov esi, dword ptr [esp + 0x20]
// 0047de8a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0047de92  85f6                 test esi, esi
// 0047de94  742a                 je 0x47dec0
// 0047de96  8d4604               lea eax, [esi + 4]
// 0047de99  83c9ff               or ecx, 0xffffffff
// 0047de9c  f00fc108             lock xadd dword ptr [eax], ecx
// 0047dea0  751e                 jne 0x47dec0
// 0047dea2  8b16                 mov edx, dword ptr [esi]
// 0047dea4  8b4204               mov eax, dword ptr [edx + 4]
// 0047dea7  8bce                 mov ecx, esi
// 0047dea9  ffd0                 call eax
// 0047deab  8d4e08               lea ecx, [esi + 8]
// 0047deae  83caff               or edx, 0xffffffff
// 0047deb1  f00fc111             lock xadd dword ptr [ecx], edx
// 0047deb5  7509                 jne 0x47dec0
// 0047deb7  8b06                 mov eax, dword ptr [esi]
// 0047deb9  8b5008               mov edx, dword ptr [eax + 8]
// 0047debc  8bce                 mov ecx, esi
// 0047debe  ffd2                 call edx
// 0047dec0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047dec4  64890d00000000       mov dword ptr fs:[0], ecx
// 0047decb  5e                   pop esi
// 0047decc  83c410               add esp, 0x10
// 0047decf  c3                   ret 
// library rbxgs-net/IdManager.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVIdManager@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
