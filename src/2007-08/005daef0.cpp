// roc 2007-08 005daef0  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005daef0
//
// 005daef0  64a100000000         mov eax, dword ptr fs:[0]
// 005daef6  6aff                 push -1
// 005daef8  68880a7500           push 0x750a88
// 005daefd  50                   push eax
// 005daefe  64892500000000       mov dword ptr fs:[0], esp
// 005daf05  56                   push esi
// 005daf06  8b442414             mov eax, dword ptr [esp + 0x14]
// 005daf0a  8b5008               mov edx, dword ptr [eax + 8]
// 005daf0d  8b4804               mov ecx, dword ptr [eax + 4]
// 005daf10  8b00                 mov eax, dword ptr [eax]
// 005daf12  03ca                 add ecx, edx
// 005daf14  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005daf1c  ffd0                 call eax
// 005daf1e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005daf22  85f6                 test esi, esi
// 005daf24  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005daf2c  742a                 je 0x5daf58
// 005daf2e  8d4e04               lea ecx, [esi + 4]
// 005daf31  83caff               or edx, 0xffffffff
// 005daf34  f00fc111             lock xadd dword ptr [ecx], edx
// 005daf38  751e                 jne 0x5daf58
// 005daf3a  8b06                 mov eax, dword ptr [esi]
// 005daf3c  8b5004               mov edx, dword ptr [eax + 4]
// 005daf3f  8bce                 mov ecx, esi
// 005daf41  ffd2                 call edx
// 005daf43  8d4608               lea eax, [esi + 8]
// 005daf46  83c9ff               or ecx, 0xffffffff
// 005daf49  f00fc108             lock xadd dword ptr [eax], ecx
// 005daf4d  7509                 jne 0x5daf58
// 005daf4f  8b16                 mov edx, dword ptr [esi]
// 005daf51  8b4208               mov eax, dword ptr [edx + 8]
// 005daf54  8bce                 mov ecx, esi
// 005daf56  ffd0                 call eax
// 005daf58  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005daf5c  64890d00000000       mov dword ptr fs:[0], ecx
// 005daf63  5e                   pop esi
// 005daf64  83c40c               add esp, 0xc
// 005daf67  c3                   ret 
// library rbxgs/v8datamodel\Feature.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf0@XVVelocityMotor@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVVelocityMotor@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Feature.cpp
