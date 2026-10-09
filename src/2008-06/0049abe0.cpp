// roc 2008-06 0049abe0  unit: RBX::Network::VPlayers::?$SignalDesc  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049abe0
//
// 0049abe0  6aff                 push -1
// 0049abe2  6818047c00           push 0x7c0418
// 0049abe7  64a100000000         mov eax, dword ptr fs:[0]
// 0049abed  50                   push eax
// 0049abee  64892500000000       mov dword ptr fs:[0], esp
// 0049abf5  51                   push ecx
// 0049abf6  56                   push esi
// 0049abf7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049abfb  83ec08               sub esp, 8
// 0049abfe  8bc4                 mov eax, esp
// 0049ac00  8908                 mov dword ptr [eax], ecx
// 0049ac02  8b542428             mov edx, dword ptr [esp + 0x28]
// 0049ac06  895004               mov dword ptr [eax + 4], edx
// 0049ac09  8b442428             mov eax, dword ptr [esp + 0x28]
// 0049ac0d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049ac15  8964240c             mov dword ptr [esp + 0xc], esp
// 0049ac19  85c0                 test eax, eax
// 0049ac1b  740c                 je 0x49ac29
// 0049ac1d  83c004               add eax, 4
// 0049ac20  b901000000           mov ecx, 1
// 0049ac25  f00fc108             lock xadd dword ptr [eax], ecx
// 0049ac29  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049ac2d  e83efbffff           call 0x49a770
// 0049ac32  8b742420             mov esi, dword ptr [esp + 0x20]
// 0049ac36  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0049ac3e  85f6                 test esi, esi
// 0049ac40  742a                 je 0x49ac6c
// 0049ac42  8d5604               lea edx, [esi + 4]
// 0049ac45  83c8ff               or eax, 0xffffffff
// 0049ac48  f00fc102             lock xadd dword ptr [edx], eax
// 0049ac4c  751e                 jne 0x49ac6c
// 0049ac4e  8b16                 mov edx, dword ptr [esi]
// 0049ac50  8b4204               mov eax, dword ptr [edx + 4]
// 0049ac53  8bce                 mov ecx, esi
// 0049ac55  ffd0                 call eax
// 0049ac57  8d4e08               lea ecx, [esi + 8]
// 0049ac5a  83caff               or edx, 0xffffffff
// 0049ac5d  f00fc111             lock xadd dword ptr [ecx], edx
// 0049ac61  7509                 jne 0x49ac6c
// 0049ac63  8b06                 mov eax, dword ptr [esi]
// 0049ac65  8b5008               mov edx, dword ptr [eax + 8]
// 0049ac68  8bce                 mov ecx, esi
// 0049ac6a  ffd2                 call edx
// 0049ac6c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049ac70  64890d00000000       mov dword ptr fs:[0], ecx
// 0049ac77  5e                   pop esi
// 0049ac78  83c410               add esp, 0x10
// 0049ac7b  c3                   ret 
// library openrbx-client/App\v8tree\Instance.cpp (function ?invoke@?$void_function_obj_invoker1@VGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@RBX@@XV?$shared_ptr@VInstance@RBX@@@boost@@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
