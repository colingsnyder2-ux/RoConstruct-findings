// roc 2007-08 005fa560  unit: RBX::VSeat::?$FactoryProduct  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fa560
//
// 005fa560  6aff                 push -1
// 005fa562  68880a7500           push 0x750a88
// 005fa567  64a100000000         mov eax, dword ptr fs:[0]
// 005fa56d  50                   push eax
// 005fa56e  64892500000000       mov dword ptr fs:[0], esp
// 005fa575  51                   push ecx
// 005fa576  56                   push esi
// 005fa577  8b742420             mov esi, dword ptr [esp + 0x20]
// 005fa57b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005fa57f  83ec08               sub esp, 8
// 005fa582  85f6                 test esi, esi
// 005fa584  8bc4                 mov eax, esp
// 005fa586  8908                 mov dword ptr [eax], ecx
// 005fa588  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005fa590  8964240c             mov dword ptr [esp + 0xc], esp
// 005fa594  897004               mov dword ptr [eax + 4], esi
// 005fa597  740c                 je 0x5fa5a5
// 005fa599  8d5604               lea edx, [esi + 4]
// 005fa59c  b801000000           mov eax, 1
// 005fa5a1  f00fc102             lock xadd dword ptr [edx], eax
// 005fa5a5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005fa5a9  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005fa5ac  52                   push edx
// 005fa5ad  e8aef6feff           call 0x5e9c60
// 005fa5b2  85f6                 test esi, esi
// 005fa5b4  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005fa5bc  742a                 je 0x5fa5e8
// 005fa5be  8d4604               lea eax, [esi + 4]
// 005fa5c1  83c9ff               or ecx, 0xffffffff
// 005fa5c4  f00fc108             lock xadd dword ptr [eax], ecx
// 005fa5c8  751e                 jne 0x5fa5e8
// 005fa5ca  8b16                 mov edx, dword ptr [esi]
// 005fa5cc  8b4204               mov eax, dword ptr [edx + 4]
// 005fa5cf  8bce                 mov ecx, esi
// 005fa5d1  ffd0                 call eax
// 005fa5d3  8d4e08               lea ecx, [esi + 8]
// 005fa5d6  83caff               or edx, 0xffffffff
// 005fa5d9  f00fc111             lock xadd dword ptr [ecx], edx
// 005fa5dd  7509                 jne 0x5fa5e8
// 005fa5df  8b06                 mov eax, dword ptr [esi]
// 005fa5e1  8b5008               mov edx, dword ptr [eax + 8]
// 005fa5e4  8bce                 mov ecx, esi
// 005fa5e6  ffd2                 call edx
// 005fa5e8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fa5ec  64890d00000000       mov dword ptr fs:[0], ecx
// 005fa5f3  5e                   pop esi
// 005fa5f4  83c410               add esp, 0x10
// 005fa5f7  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVAccoutrement@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVAccoutrement@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
