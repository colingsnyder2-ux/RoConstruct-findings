// roc 2009-12 006c5b80  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c5b80
//
// 006c5b80  64a100000000         mov eax, dword ptr fs:[0]
// 006c5b86  6aff                 push -1
// 006c5b88  68089a9400           push 0x949a08
// 006c5b8d  50                   push eax
// 006c5b8e  64892500000000       mov dword ptr fs:[0], esp
// 006c5b95  56                   push esi
// 006c5b96  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c5b9a  8d542418             lea edx, [esp + 0x18]
// 006c5b9e  8901                 mov dword ptr [ecx], eax
// 006c5ba0  52                   push edx
// 006c5ba1  83c104               add ecx, 4
// 006c5ba4  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006c5bac  e8efc4d3ff           call 0x4020a0
// 006c5bb1  8b742418             mov esi, dword ptr [esp + 0x18]
// 006c5bb5  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 006c5bbd  85f6                 test esi, esi
// 006c5bbf  742a                 je 0x6c5beb
// 006c5bc1  8d4604               lea eax, [esi + 4]
// 006c5bc4  83c9ff               or ecx, 0xffffffff
// 006c5bc7  f00fc108             lock xadd dword ptr [eax], ecx
// 006c5bcb  751e                 jne 0x6c5beb
// 006c5bcd  8b16                 mov edx, dword ptr [esi]
// 006c5bcf  8b4204               mov eax, dword ptr [edx + 4]
// 006c5bd2  8bce                 mov ecx, esi
// 006c5bd4  ffd0                 call eax
// 006c5bd6  8d4e08               lea ecx, [esi + 8]
// 006c5bd9  83caff               or edx, 0xffffffff
// 006c5bdc  f00fc111             lock xadd dword ptr [ecx], edx
// 006c5be0  7509                 jne 0x6c5beb
// 006c5be2  8b06                 mov eax, dword ptr [esi]
// 006c5be4  8b5008               mov edx, dword ptr [eax + 8]
// 006c5be7  8bce                 mov ecx, esi
// 006c5be9  ffd2                 call edx
// 006c5beb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c5bef  64890d00000000       mov dword ptr fs:[0], ecx
// 006c5bf6  5e                   pop esi
// 006c5bf7  83c40c               add esp, 0xc
// 006c5bfa  c20800               ret 8
// library rbxgs/util\Handle.cpp (function ?linkTo@InstanceHandle@RBX@@QAEXV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Handle.cpp
