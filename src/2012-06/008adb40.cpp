// roc 2012-06 008adb40  unit: RBX::VFlag::?$FactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008adb40
//
// 008adb40  6aff                 push -1
// 008adb42  68e852ad00           push 0xad52e8
// 008adb47  64a100000000         mov eax, dword ptr fs:[0]
// 008adb4d  50                   push eax
// 008adb4e  64892500000000       mov dword ptr fs:[0], esp
// 008adb55  51                   push ecx
// 008adb56  56                   push esi
// 008adb57  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008adb5b  83ec08               sub esp, 8
// 008adb5e  8bc4                 mov eax, esp
// 008adb60  8908                 mov dword ptr [eax], ecx
// 008adb62  8b542428             mov edx, dword ptr [esp + 0x28]
// 008adb66  895004               mov dword ptr [eax + 4], edx
// 008adb69  8b442428             mov eax, dword ptr [esp + 0x28]
// 008adb6d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008adb75  8964240c             mov dword ptr [esp + 0xc], esp
// 008adb79  85c0                 test eax, eax
// 008adb7b  740c                 je 0x8adb89
// 008adb7d  83c004               add eax, 4
// 008adb80  b901000000           mov ecx, 1
// 008adb85  f00fc108             lock xadd dword ptr [eax], ecx
// 008adb89  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008adb8d  8b5108               mov edx, dword ptr [ecx + 8]
// 008adb90  52                   push edx
// 008adb91  e85a58beff           call 0x4933f0
// 008adb96  8b742420             mov esi, dword ptr [esp + 0x20]
// 008adb9a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 008adba2  85f6                 test esi, esi
// 008adba4  742a                 je 0x8adbd0
// 008adba6  8d4604               lea eax, [esi + 4]
// 008adba9  83c9ff               or ecx, 0xffffffff
// 008adbac  f00fc108             lock xadd dword ptr [eax], ecx
// 008adbb0  751e                 jne 0x8adbd0
// 008adbb2  8b16                 mov edx, dword ptr [esi]
// 008adbb4  8b4204               mov eax, dword ptr [edx + 4]
// 008adbb7  8bce                 mov ecx, esi
// 008adbb9  ffd0                 call eax
// 008adbbb  8d4e08               lea ecx, [esi + 8]
// 008adbbe  83caff               or edx, 0xffffffff
// 008adbc1  f00fc111             lock xadd dword ptr [ecx], edx
// 008adbc5  7509                 jne 0x8adbd0
// 008adbc7  8b06                 mov eax, dword ptr [esi]
// 008adbc9  8b5008               mov edx, dword ptr [eax + 8]
// 008adbcc  8bce                 mov ecx, esi
// 008adbce  ffd2                 call edx
// 008adbd0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008adbd4  64890d00000000       mov dword ptr fs:[0], ecx
// 008adbdb  5e                   pop esi
// 008adbdc  83c410               add esp, 0x10
// 008adbdf  c3                   ret 
// library rbxgs-net/IdManager.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVIdManager@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
