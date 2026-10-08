// roc 2007-08 005d2900  unit: RBX::ScriptMouseCommand  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d2900
//
// 005d2900  6aff                 push -1
// 005d2902  68880a7500           push 0x750a88
// 005d2907  64a100000000         mov eax, dword ptr fs:[0]
// 005d290d  50                   push eax
// 005d290e  64892500000000       mov dword ptr fs:[0], esp
// 005d2915  51                   push ecx
// 005d2916  56                   push esi
// 005d2917  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d291b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d291f  83ec08               sub esp, 8
// 005d2922  85f6                 test esi, esi
// 005d2924  8bc4                 mov eax, esp
// 005d2926  8908                 mov dword ptr [eax], ecx
// 005d2928  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d2930  8964240c             mov dword ptr [esp + 0xc], esp
// 005d2934  897004               mov dword ptr [eax + 4], esi
// 005d2937  740c                 je 0x5d2945
// 005d2939  8d5604               lea edx, [esi + 4]
// 005d293c  b801000000           mov eax, 1
// 005d2941  f00fc102             lock xadd dword ptr [edx], eax
// 005d2945  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d2949  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005d294c  52                   push edx
// 005d294d  e86ef7ffff           call 0x5d20c0
// 005d2952  85f6                 test esi, esi
// 005d2954  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005d295c  742a                 je 0x5d2988
// 005d295e  8d4604               lea eax, [esi + 4]
// 005d2961  83c9ff               or ecx, 0xffffffff
// 005d2964  f00fc108             lock xadd dword ptr [eax], ecx
// 005d2968  751e                 jne 0x5d2988
// 005d296a  8b16                 mov edx, dword ptr [esi]
// 005d296c  8b4204               mov eax, dword ptr [edx + 4]
// 005d296f  8bce                 mov ecx, esi
// 005d2971  ffd0                 call eax
// 005d2973  8d4e08               lea ecx, [esi + 8]
// 005d2976  83caff               or edx, 0xffffffff
// 005d2979  f00fc111             lock xadd dword ptr [ecx], edx
// 005d297d  7509                 jne 0x5d2988
// 005d297f  8b06                 mov eax, dword ptr [esi]
// 005d2981  8b5008               mov edx, dword ptr [eax + 8]
// 005d2984  8bce                 mov ecx, esi
// 005d2986  ffd2                 call edx
// 005d2988  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d298c  64890d00000000       mov dword ptr fs:[0], ecx
// 005d2993  5e                   pop esi
// 005d2994  83c410               add esp, 0x10
// 005d2997  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVAccoutrement@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVAccoutrement@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
