// roc 2011-06 00647d50  unit: RBX::Accoutrement  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00647d50
//
// 00647d50  6aff                 push -1
// 00647d52  68688d9d00           push 0x9d8d68
// 00647d57  64a100000000         mov eax, dword ptr fs:[0]
// 00647d5d  50                   push eax
// 00647d5e  64892500000000       mov dword ptr fs:[0], esp
// 00647d65  51                   push ecx
// 00647d66  56                   push esi
// 00647d67  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00647d6b  83ec08               sub esp, 8
// 00647d6e  8bc4                 mov eax, esp
// 00647d70  8908                 mov dword ptr [eax], ecx
// 00647d72  8b542428             mov edx, dword ptr [esp + 0x28]
// 00647d76  895004               mov dword ptr [eax + 4], edx
// 00647d79  8b442428             mov eax, dword ptr [esp + 0x28]
// 00647d7d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00647d85  8964240c             mov dword ptr [esp + 0xc], esp
// 00647d89  85c0                 test eax, eax
// 00647d8b  740c                 je 0x647d99
// 00647d8d  83c004               add eax, 4
// 00647d90  b901000000           mov ecx, 1
// 00647d95  f00fc108             lock xadd dword ptr [eax], ecx
// 00647d99  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00647d9d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00647da0  52                   push edx
// 00647da1  e87af9ffff           call 0x647720
// 00647da6  8b742420             mov esi, dword ptr [esp + 0x20]
// 00647daa  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00647db2  85f6                 test esi, esi
// 00647db4  742a                 je 0x647de0
// 00647db6  8d4604               lea eax, [esi + 4]
// 00647db9  83c9ff               or ecx, 0xffffffff
// 00647dbc  f00fc108             lock xadd dword ptr [eax], ecx
// 00647dc0  751e                 jne 0x647de0
// 00647dc2  8b16                 mov edx, dword ptr [esi]
// 00647dc4  8b4204               mov eax, dword ptr [edx + 4]
// 00647dc7  8bce                 mov ecx, esi
// 00647dc9  ffd0                 call eax
// 00647dcb  8d4e08               lea ecx, [esi + 8]
// 00647dce  83caff               or edx, 0xffffffff
// 00647dd1  f00fc111             lock xadd dword ptr [ecx], edx
// 00647dd5  7509                 jne 0x647de0
// 00647dd7  8b06                 mov eax, dword ptr [esi]
// 00647dd9  8b5008               mov edx, dword ptr [eax + 8]
// 00647ddc  8bce                 mov ecx, esi
// 00647dde  ffd2                 call edx
// 00647de0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00647de4  64890d00000000       mov dword ptr fs:[0], ecx
// 00647deb  5e                   pop esi
// 00647dec  83c410               add esp, 0x10
// 00647def  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
