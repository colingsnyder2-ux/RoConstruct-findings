// roc 2012-06 0072c320  unit: RBX::VHat::?$FactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0072c320
//
// 0072c320  6aff                 push -1
// 0072c322  68e852ad00           push 0xad52e8
// 0072c327  64a100000000         mov eax, dword ptr fs:[0]
// 0072c32d  50                   push eax
// 0072c32e  64892500000000       mov dword ptr fs:[0], esp
// 0072c335  51                   push ecx
// 0072c336  56                   push esi
// 0072c337  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072c33b  83ec08               sub esp, 8
// 0072c33e  8bc4                 mov eax, esp
// 0072c340  8908                 mov dword ptr [eax], ecx
// 0072c342  8b542428             mov edx, dword ptr [esp + 0x28]
// 0072c346  895004               mov dword ptr [eax + 4], edx
// 0072c349  8b442428             mov eax, dword ptr [esp + 0x28]
// 0072c34d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0072c355  8964240c             mov dword ptr [esp + 0xc], esp
// 0072c359  85c0                 test eax, eax
// 0072c35b  740c                 je 0x72c369
// 0072c35d  83c004               add eax, 4
// 0072c360  b901000000           mov ecx, 1
// 0072c365  f00fc108             lock xadd dword ptr [eax], ecx
// 0072c369  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0072c36d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0072c370  52                   push edx
// 0072c371  e86af7ffff           call 0x72bae0
// 0072c376  8b742420             mov esi, dword ptr [esp + 0x20]
// 0072c37a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0072c382  85f6                 test esi, esi
// 0072c384  742a                 je 0x72c3b0
// 0072c386  8d4604               lea eax, [esi + 4]
// 0072c389  83c9ff               or ecx, 0xffffffff
// 0072c38c  f00fc108             lock xadd dword ptr [eax], ecx
// 0072c390  751e                 jne 0x72c3b0
// 0072c392  8b16                 mov edx, dword ptr [esi]
// 0072c394  8b4204               mov eax, dword ptr [edx + 4]
// 0072c397  8bce                 mov ecx, esi
// 0072c399  ffd0                 call eax
// 0072c39b  8d4e08               lea ecx, [esi + 8]
// 0072c39e  83caff               or edx, 0xffffffff
// 0072c3a1  f00fc111             lock xadd dword ptr [ecx], edx
// 0072c3a5  7509                 jne 0x72c3b0
// 0072c3a7  8b06                 mov eax, dword ptr [esi]
// 0072c3a9  8b5008               mov edx, dword ptr [eax + 8]
// 0072c3ac  8bce                 mov ecx, esi
// 0072c3ae  ffd2                 call edx
// 0072c3b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0072c3b4  64890d00000000       mov dword ptr fs:[0], ecx
// 0072c3bb  5e                   pop esi
// 0072c3bc  83c410               add esp, 0x10
// 0072c3bf  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
