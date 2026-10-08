// roc 2009-06 0063d200  unit: RBX::VHat::?$FactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063d200
//
// 0063d200  6aff                 push -1
// 0063d202  6808b08600           push 0x86b008
// 0063d207  64a100000000         mov eax, dword ptr fs:[0]
// 0063d20d  50                   push eax
// 0063d20e  64892500000000       mov dword ptr fs:[0], esp
// 0063d215  51                   push ecx
// 0063d216  56                   push esi
// 0063d217  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0063d21b  83ec08               sub esp, 8
// 0063d21e  8bc4                 mov eax, esp
// 0063d220  8908                 mov dword ptr [eax], ecx
// 0063d222  8b542428             mov edx, dword ptr [esp + 0x28]
// 0063d226  895004               mov dword ptr [eax + 4], edx
// 0063d229  8b442428             mov eax, dword ptr [esp + 0x28]
// 0063d22d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0063d235  8964240c             mov dword ptr [esp + 0xc], esp
// 0063d239  85c0                 test eax, eax
// 0063d23b  740c                 je 0x63d249
// 0063d23d  83c004               add eax, 4
// 0063d240  b901000000           mov ecx, 1
// 0063d245  f00fc108             lock xadd dword ptr [eax], ecx
// 0063d249  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0063d24d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0063d250  52                   push edx
// 0063d251  e84af7ffff           call 0x63c9a0
// 0063d256  8b742420             mov esi, dword ptr [esp + 0x20]
// 0063d25a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0063d262  85f6                 test esi, esi
// 0063d264  742a                 je 0x63d290
// 0063d266  8d4604               lea eax, [esi + 4]
// 0063d269  83c9ff               or ecx, 0xffffffff
// 0063d26c  f00fc108             lock xadd dword ptr [eax], ecx
// 0063d270  751e                 jne 0x63d290
// 0063d272  8b16                 mov edx, dword ptr [esi]
// 0063d274  8b4204               mov eax, dword ptr [edx + 4]
// 0063d277  8bce                 mov ecx, esi
// 0063d279  ffd0                 call eax
// 0063d27b  8d4e08               lea ecx, [esi + 8]
// 0063d27e  83caff               or edx, 0xffffffff
// 0063d281  f00fc111             lock xadd dword ptr [ecx], edx
// 0063d285  7509                 jne 0x63d290
// 0063d287  8b06                 mov eax, dword ptr [esi]
// 0063d289  8b5008               mov edx, dword ptr [eax + 8]
// 0063d28c  8bce                 mov ecx, esi
// 0063d28e  ffd2                 call edx
// 0063d290  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063d294  64890d00000000       mov dword ptr fs:[0], ecx
// 0063d29b  5e                   pop esi
// 0063d29c  83c410               add esp, 0x10
// 0063d29f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
