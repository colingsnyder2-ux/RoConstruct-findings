// roc 2008-06 004ab530  unit: RBX::Network::Replicator  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ab530
//
// 004ab530  64a100000000         mov eax, dword ptr fs:[0]
// 004ab536  6aff                 push -1
// 004ab538  6868617c00           push 0x7c6168
// 004ab53d  50                   push eax
// 004ab53e  64892500000000       mov dword ptr fs:[0], esp
// 004ab545  56                   push esi
// 004ab546  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ab54a  50                   push eax
// 004ab54b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ab553  e898f30a00           call 0x55a8f0
// 004ab558  8b742418             mov esi, dword ptr [esp + 0x18]
// 004ab55c  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004ab564  85f6                 test esi, esi
// 004ab566  742a                 je 0x4ab592
// 004ab568  8d4e04               lea ecx, [esi + 4]
// 004ab56b  83caff               or edx, 0xffffffff
// 004ab56e  f00fc111             lock xadd dword ptr [ecx], edx
// 004ab572  751e                 jne 0x4ab592
// 004ab574  8b06                 mov eax, dword ptr [esi]
// 004ab576  8b5004               mov edx, dword ptr [eax + 4]
// 004ab579  8bce                 mov ecx, esi
// 004ab57b  ffd2                 call edx
// 004ab57d  8d4608               lea eax, [esi + 8]
// 004ab580  83c9ff               or ecx, 0xffffffff
// 004ab583  f00fc108             lock xadd dword ptr [eax], ecx
// 004ab587  7509                 jne 0x4ab592
// 004ab589  8b16                 mov edx, dword ptr [esi]
// 004ab58b  8b4208               mov eax, dword ptr [edx + 8]
// 004ab58e  8bce                 mov ecx, esi
// 004ab590  ffd0                 call eax
// 004ab592  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ab596  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab59d  5e                   pop esi
// 004ab59e  83c40c               add esp, 0xc
// 004ab5a1  c20800               ret 8
// library rbxgs/roc_lua_index_native_family_e38820bbe8166503.cpp (function ?setParent2@Instance@RBX@@QAEXV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_lua_index_native_family_e38820bbe8166503.cpp
