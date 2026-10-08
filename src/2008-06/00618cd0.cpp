// roc 2008-06 00618cd0  unit: RBX::VTool::?$FactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618cd0
//
// 00618cd0  6aff                 push -1
// 00618cd2  6818047c00           push 0x7c0418
// 00618cd7  64a100000000         mov eax, dword ptr fs:[0]
// 00618cdd  50                   push eax
// 00618cde  64892500000000       mov dword ptr fs:[0], esp
// 00618ce5  51                   push ecx
// 00618ce6  56                   push esi
// 00618ce7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00618ceb  83ec08               sub esp, 8
// 00618cee  8bc4                 mov eax, esp
// 00618cf0  8908                 mov dword ptr [eax], ecx
// 00618cf2  8b542428             mov edx, dword ptr [esp + 0x28]
// 00618cf6  895004               mov dword ptr [eax + 4], edx
// 00618cf9  8b442428             mov eax, dword ptr [esp + 0x28]
// 00618cfd  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00618d05  8964240c             mov dword ptr [esp + 0xc], esp
// 00618d09  85c0                 test eax, eax
// 00618d0b  740c                 je 0x618d19
// 00618d0d  83c004               add eax, 4
// 00618d10  b901000000           mov ecx, 1
// 00618d15  f00fc108             lock xadd dword ptr [eax], ecx
// 00618d19  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00618d1d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00618d20  52                   push edx
// 00618d21  e80a4dfeff           call 0x5fda30
// 00618d26  8b742420             mov esi, dword ptr [esp + 0x20]
// 00618d2a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00618d32  85f6                 test esi, esi
// 00618d34  742a                 je 0x618d60
// 00618d36  8d4604               lea eax, [esi + 4]
// 00618d39  83c9ff               or ecx, 0xffffffff
// 00618d3c  f00fc108             lock xadd dword ptr [eax], ecx
// 00618d40  751e                 jne 0x618d60
// 00618d42  8b16                 mov edx, dword ptr [esi]
// 00618d44  8b4204               mov eax, dword ptr [edx + 4]
// 00618d47  8bce                 mov ecx, esi
// 00618d49  ffd0                 call eax
// 00618d4b  8d4e08               lea ecx, [esi + 8]
// 00618d4e  83caff               or edx, 0xffffffff
// 00618d51  f00fc111             lock xadd dword ptr [ecx], edx
// 00618d55  7509                 jne 0x618d60
// 00618d57  8b06                 mov eax, dword ptr [esi]
// 00618d59  8b5008               mov edx, dword ptr [eax + 8]
// 00618d5c  8bce                 mov ecx, esi
// 00618d5e  ffd2                 call edx
// 00618d60  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00618d64  64890d00000000       mov dword ptr fs:[0], ecx
// 00618d6b  5e                   pop esi
// 00618d6c  83c410               add esp, 0x10
// 00618d6f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
