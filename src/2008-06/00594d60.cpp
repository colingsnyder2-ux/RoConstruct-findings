// roc 2008-06 00594d60  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594d60
//
// 00594d60  64a100000000         mov eax, dword ptr fs:[0]
// 00594d66  6aff                 push -1
// 00594d68  6868617c00           push 0x7c6168
// 00594d6d  50                   push eax
// 00594d6e  64892500000000       mov dword ptr fs:[0], esp
// 00594d75  56                   push esi
// 00594d76  8b442414             mov eax, dword ptr [esp + 0x14]
// 00594d7a  8d542418             lea edx, [esp + 0x18]
// 00594d7e  8901                 mov dword ptr [ecx], eax
// 00594d80  52                   push edx
// 00594d81  83c104               add ecx, 4
// 00594d84  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00594d8c  e81fd8e6ff           call 0x4025b0
// 00594d91  8b742418             mov esi, dword ptr [esp + 0x18]
// 00594d95  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00594d9d  85f6                 test esi, esi
// 00594d9f  742a                 je 0x594dcb
// 00594da1  8d4604               lea eax, [esi + 4]
// 00594da4  83c9ff               or ecx, 0xffffffff
// 00594da7  f00fc108             lock xadd dword ptr [eax], ecx
// 00594dab  751e                 jne 0x594dcb
// 00594dad  8b16                 mov edx, dword ptr [esi]
// 00594daf  8b4204               mov eax, dword ptr [edx + 4]
// 00594db2  8bce                 mov ecx, esi
// 00594db4  ffd0                 call eax
// 00594db6  8d4e08               lea ecx, [esi + 8]
// 00594db9  83caff               or edx, 0xffffffff
// 00594dbc  f00fc111             lock xadd dword ptr [ecx], edx
// 00594dc0  7509                 jne 0x594dcb
// 00594dc2  8b06                 mov eax, dword ptr [esi]
// 00594dc4  8b5008               mov edx, dword ptr [eax + 8]
// 00594dc7  8bce                 mov ecx, esi
// 00594dc9  ffd2                 call edx
// 00594dcb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00594dcf  64890d00000000       mov dword ptr fs:[0], ecx
// 00594dd6  5e                   pop esi
// 00594dd7  83c40c               add esp, 0xc
// 00594dda  c20800               ret 8
// library rbxgs/util\Handle.cpp (function ?linkTo@InstanceHandle@RBX@@QAEXV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Handle.cpp
