// roc 2008-06 0060abe0  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060abe0
//
// 0060abe0  64a100000000         mov eax, dword ptr fs:[0]
// 0060abe6  6aff                 push -1
// 0060abe8  6818047c00           push 0x7c0418
// 0060abed  50                   push eax
// 0060abee  64892500000000       mov dword ptr fs:[0], esp
// 0060abf5  56                   push esi
// 0060abf6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060abfa  8b5008               mov edx, dword ptr [eax + 8]
// 0060abfd  8b4804               mov ecx, dword ptr [eax + 4]
// 0060ac00  8b00                 mov eax, dword ptr [eax]
// 0060ac02  03ca                 add ecx, edx
// 0060ac04  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0060ac0c  ffd0                 call eax
// 0060ac0e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0060ac12  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0060ac1a  85f6                 test esi, esi
// 0060ac1c  742a                 je 0x60ac48
// 0060ac1e  8d4e04               lea ecx, [esi + 4]
// 0060ac21  83caff               or edx, 0xffffffff
// 0060ac24  f00fc111             lock xadd dword ptr [ecx], edx
// 0060ac28  751e                 jne 0x60ac48
// 0060ac2a  8b06                 mov eax, dword ptr [esi]
// 0060ac2c  8b5004               mov edx, dword ptr [eax + 4]
// 0060ac2f  8bce                 mov ecx, esi
// 0060ac31  ffd2                 call edx
// 0060ac33  8d4608               lea eax, [esi + 8]
// 0060ac36  83c9ff               or ecx, 0xffffffff
// 0060ac39  f00fc108             lock xadd dword ptr [eax], ecx
// 0060ac3d  7509                 jne 0x60ac48
// 0060ac3f  8b16                 mov edx, dword ptr [esi]
// 0060ac41  8b4208               mov eax, dword ptr [edx + 8]
// 0060ac44  8bce                 mov ecx, esi
// 0060ac46  ffd0                 call eax
// 0060ac48  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060ac4c  64890d00000000       mov dword ptr fs:[0], ecx
// 0060ac53  5e                   pop esi
// 0060ac54  83c40c               add esp, 0xc
// 0060ac57  c3                   ret 
// library rbxgs/roc_unit_04a4f43d7b9f24d1.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf0@XVVelocityMotor@RBX@@@_mfi@boost@@V?$list1@V?$value@PAVVelocityMotor@RBX@@@_bi@boost@@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_04a4f43d7b9f24d1.cpp
