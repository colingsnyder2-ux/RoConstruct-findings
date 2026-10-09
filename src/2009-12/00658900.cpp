// roc 2009-12 00658900  unit: RBX::VSeat::?$FactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00658900
//
// 00658900  6aff                 push -1
// 00658902  6828799400           push 0x947928
// 00658907  64a100000000         mov eax, dword ptr fs:[0]
// 0065890d  50                   push eax
// 0065890e  64892500000000       mov dword ptr fs:[0], esp
// 00658915  51                   push ecx
// 00658916  56                   push esi
// 00658917  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065891b  83ec08               sub esp, 8
// 0065891e  8bc4                 mov eax, esp
// 00658920  8908                 mov dword ptr [eax], ecx
// 00658922  8b542428             mov edx, dword ptr [esp + 0x28]
// 00658926  895004               mov dword ptr [eax + 4], edx
// 00658929  8b442428             mov eax, dword ptr [esp + 0x28]
// 0065892d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00658935  8964240c             mov dword ptr [esp + 0xc], esp
// 00658939  85c0                 test eax, eax
// 0065893b  740c                 je 0x658949
// 0065893d  83c004               add eax, 4
// 00658940  b901000000           mov ecx, 1
// 00658945  f00fc108             lock xadd dword ptr [eax], ecx
// 00658949  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0065894d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00658950  52                   push edx
// 00658951  e89ac70e00           call 0x7450f0
// 00658956  8b742420             mov esi, dword ptr [esp + 0x20]
// 0065895a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00658962  85f6                 test esi, esi
// 00658964  742a                 je 0x658990
// 00658966  8d4604               lea eax, [esi + 4]
// 00658969  83c9ff               or ecx, 0xffffffff
// 0065896c  f00fc108             lock xadd dword ptr [eax], ecx
// 00658970  751e                 jne 0x658990
// 00658972  8b16                 mov edx, dword ptr [esi]
// 00658974  8b4204               mov eax, dword ptr [edx + 4]
// 00658977  8bce                 mov ecx, esi
// 00658979  ffd0                 call eax
// 0065897b  8d4e08               lea ecx, [esi + 8]
// 0065897e  83caff               or edx, 0xffffffff
// 00658981  f00fc111             lock xadd dword ptr [ecx], edx
// 00658985  7509                 jne 0x658990
// 00658987  8b06                 mov eax, dword ptr [esi]
// 00658989  8b5008               mov edx, dword ptr [eax + 8]
// 0065898c  8bce                 mov ecx, esi
// 0065898e  ffd2                 call edx
// 00658990  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00658994  64890d00000000       mov dword ptr fs:[0], ecx
// 0065899b  5e                   pop esi
// 0065899c  83c410               add esp, 0x10
// 0065899f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
