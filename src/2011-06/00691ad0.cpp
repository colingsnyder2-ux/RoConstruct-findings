// roc 2011-06 00691ad0  unit: RBX::VSpawnerService::?$FactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00691ad0
//
// 00691ad0  6aff                 push -1
// 00691ad2  68688d9d00           push 0x9d8d68
// 00691ad7  64a100000000         mov eax, dword ptr fs:[0]
// 00691add  50                   push eax
// 00691ade  64892500000000       mov dword ptr fs:[0], esp
// 00691ae5  51                   push ecx
// 00691ae6  56                   push esi
// 00691ae7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00691aeb  83ec08               sub esp, 8
// 00691aee  8bc4                 mov eax, esp
// 00691af0  8908                 mov dword ptr [eax], ecx
// 00691af2  8b542428             mov edx, dword ptr [esp + 0x28]
// 00691af6  895004               mov dword ptr [eax + 4], edx
// 00691af9  8b442428             mov eax, dword ptr [esp + 0x28]
// 00691afd  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00691b05  8964240c             mov dword ptr [esp + 0xc], esp
// 00691b09  85c0                 test eax, eax
// 00691b0b  740c                 je 0x691b19
// 00691b0d  83c004               add eax, 4
// 00691b10  b901000000           mov ecx, 1
// 00691b15  f00fc108             lock xadd dword ptr [eax], ecx
// 00691b19  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00691b1d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00691b20  52                   push edx
// 00691b21  e80ab40600           call 0x6fcf30
// 00691b26  8b742420             mov esi, dword ptr [esp + 0x20]
// 00691b2a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00691b32  85f6                 test esi, esi
// 00691b34  742a                 je 0x691b60
// 00691b36  8d4604               lea eax, [esi + 4]
// 00691b39  83c9ff               or ecx, 0xffffffff
// 00691b3c  f00fc108             lock xadd dword ptr [eax], ecx
// 00691b40  751e                 jne 0x691b60
// 00691b42  8b16                 mov edx, dword ptr [esi]
// 00691b44  8b4204               mov eax, dword ptr [edx + 4]
// 00691b47  8bce                 mov ecx, esi
// 00691b49  ffd0                 call eax
// 00691b4b  8d4e08               lea ecx, [esi + 8]
// 00691b4e  83caff               or edx, 0xffffffff
// 00691b51  f00fc111             lock xadd dword ptr [ecx], edx
// 00691b55  7509                 jne 0x691b60
// 00691b57  8b06                 mov eax, dword ptr [esi]
// 00691b59  8b5008               mov edx, dword ptr [eax + 8]
// 00691b5c  8bce                 mov ecx, esi
// 00691b5e  ffd2                 call edx
// 00691b60  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00691b64  64890d00000000       mov dword ptr fs:[0], ecx
// 00691b6b  5e                   pop esi
// 00691b6c  83c410               add esp, 0x10
// 00691b6f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
