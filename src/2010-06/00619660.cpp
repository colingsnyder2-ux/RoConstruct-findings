// roc 2010-06 00619660  unit: RBX::VHat::?$FactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00619660
//
// 00619660  6aff                 push -1
// 00619662  68e8679900           push 0x9967e8
// 00619667  64a100000000         mov eax, dword ptr fs:[0]
// 0061966d  50                   push eax
// 0061966e  64892500000000       mov dword ptr fs:[0], esp
// 00619675  51                   push ecx
// 00619676  56                   push esi
// 00619677  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061967b  83ec08               sub esp, 8
// 0061967e  8bc4                 mov eax, esp
// 00619680  8908                 mov dword ptr [eax], ecx
// 00619682  8b542428             mov edx, dword ptr [esp + 0x28]
// 00619686  895004               mov dword ptr [eax + 4], edx
// 00619689  8b442428             mov eax, dword ptr [esp + 0x28]
// 0061968d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00619695  8964240c             mov dword ptr [esp + 0xc], esp
// 00619699  85c0                 test eax, eax
// 0061969b  740c                 je 0x6196a9
// 0061969d  83c004               add eax, 4
// 006196a0  b901000000           mov ecx, 1
// 006196a5  f00fc108             lock xadd dword ptr [eax], ecx
// 006196a9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006196ad  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006196b0  52                   push edx
// 006196b1  e8baf6ffff           call 0x618d70
// 006196b6  8b742420             mov esi, dword ptr [esp + 0x20]
// 006196ba  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006196c2  85f6                 test esi, esi
// 006196c4  742a                 je 0x6196f0
// 006196c6  8d4604               lea eax, [esi + 4]
// 006196c9  83c9ff               or ecx, 0xffffffff
// 006196cc  f00fc108             lock xadd dword ptr [eax], ecx
// 006196d0  751e                 jne 0x6196f0
// 006196d2  8b16                 mov edx, dword ptr [esi]
// 006196d4  8b4204               mov eax, dword ptr [edx + 4]
// 006196d7  8bce                 mov ecx, esi
// 006196d9  ffd0                 call eax
// 006196db  8d4e08               lea ecx, [esi + 8]
// 006196de  83caff               or edx, 0xffffffff
// 006196e1  f00fc111             lock xadd dword ptr [ecx], edx
// 006196e5  7509                 jne 0x6196f0
// 006196e7  8b06                 mov eax, dword ptr [esi]
// 006196e9  8b5008               mov edx, dword ptr [eax + 8]
// 006196ec  8bce                 mov ecx, esi
// 006196ee  ffd2                 call edx
// 006196f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006196f4  64890d00000000       mov dword ptr fs:[0], ecx
// 006196fb  5e                   pop esi
// 006196fc  83c410               add esp, 0x10
// 006196ff  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
