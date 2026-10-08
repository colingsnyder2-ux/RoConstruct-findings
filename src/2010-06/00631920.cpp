// roc 2010-06 00631920  unit: std::D::DU?$char_traits::?$basic_ifstream  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631920
//
// 00631920  64a100000000         mov eax, dword ptr fs:[0]
// 00631926  6aff                 push -1
// 00631928  68a8859a00           push 0x9a85a8
// 0063192d  50                   push eax
// 0063192e  64892500000000       mov dword ptr fs:[0], esp
// 00631935  56                   push esi
// 00631936  8b442414             mov eax, dword ptr [esp + 0x14]
// 0063193a  8d542418             lea edx, [esp + 0x18]
// 0063193e  8901                 mov dword ptr [ecx], eax
// 00631940  52                   push edx
// 00631941  83c104               add ecx, 4
// 00631944  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063194c  e83f07ddff           call 0x402090
// 00631951  8b742418             mov esi, dword ptr [esp + 0x18]
// 00631955  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0063195d  85f6                 test esi, esi
// 0063195f  742a                 je 0x63198b
// 00631961  8d4604               lea eax, [esi + 4]
// 00631964  83c9ff               or ecx, 0xffffffff
// 00631967  f00fc108             lock xadd dword ptr [eax], ecx
// 0063196b  751e                 jne 0x63198b
// 0063196d  8b16                 mov edx, dword ptr [esi]
// 0063196f  8b4204               mov eax, dword ptr [edx + 4]
// 00631972  8bce                 mov ecx, esi
// 00631974  ffd0                 call eax
// 00631976  8d4e08               lea ecx, [esi + 8]
// 00631979  83caff               or edx, 0xffffffff
// 0063197c  f00fc111             lock xadd dword ptr [ecx], edx
// 00631980  7509                 jne 0x63198b
// 00631982  8b06                 mov eax, dword ptr [esi]
// 00631984  8b5008               mov edx, dword ptr [eax + 8]
// 00631987  8bce                 mov ecx, esi
// 00631989  ffd2                 call edx
// 0063198b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063198f  64890d00000000       mov dword ptr fs:[0], ecx
// 00631996  5e                   pop esi
// 00631997  83c40c               add esp, 0xc
// 0063199a  c20800               ret 8
// library rbxgs/util\Handle.cpp (function ?linkTo@InstanceHandle@RBX@@QAEXV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Handle.cpp
