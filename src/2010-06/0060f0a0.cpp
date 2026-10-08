// roc 2010-06 0060f0a0  unit: RBX::Lua::VLiveThreadRef::?$sp_counted_impl_p  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060f0a0
//
// 0060f0a0  6aff                 push -1
// 0060f0a2  6878879a00           push 0x9a8778
// 0060f0a7  64a100000000         mov eax, dword ptr fs:[0]
// 0060f0ad  50                   push eax
// 0060f0ae  64892500000000       mov dword ptr fs:[0], esp
// 0060f0b5  51                   push ecx
// 0060f0b6  56                   push esi
// 0060f0b7  57                   push edi
// 0060f0b8  8bf9                 mov edi, ecx
// 0060f0ba  897c2408             mov dword ptr [esp + 8], edi
// 0060f0be  8b770c               mov esi, dword ptr [edi + 0xc]
// 0060f0c1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0060f0c9  85f6                 test esi, esi
// 0060f0cb  742a                 je 0x60f0f7
// 0060f0cd  8d4604               lea eax, [esi + 4]
// 0060f0d0  83c9ff               or ecx, 0xffffffff
// 0060f0d3  f00fc108             lock xadd dword ptr [eax], ecx
// 0060f0d7  751e                 jne 0x60f0f7
// 0060f0d9  8b16                 mov edx, dword ptr [esi]
// 0060f0db  8b4204               mov eax, dword ptr [edx + 4]
// 0060f0de  8bce                 mov ecx, esi
// 0060f0e0  ffd0                 call eax
// 0060f0e2  8d4e08               lea ecx, [esi + 8]
// 0060f0e5  83caff               or edx, 0xffffffff
// 0060f0e8  f00fc111             lock xadd dword ptr [ecx], edx
// 0060f0ec  7509                 jne 0x60f0f7
// 0060f0ee  8b06                 mov eax, dword ptr [esi]
// 0060f0f0  8b5008               mov edx, dword ptr [eax + 8]
// 0060f0f3  8bce                 mov ecx, esi
// 0060f0f5  ffd2                 call edx
// 0060f0f7  8b7704               mov esi, dword ptr [edi + 4]
// 0060f0fa  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0060f102  85f6                 test esi, esi
// 0060f104  742a                 je 0x60f130
// 0060f106  8d4604               lea eax, [esi + 4]
// 0060f109  83c9ff               or ecx, 0xffffffff
// 0060f10c  f00fc108             lock xadd dword ptr [eax], ecx
// 0060f110  751e                 jne 0x60f130
// 0060f112  8b16                 mov edx, dword ptr [esi]
// 0060f114  8b4204               mov eax, dword ptr [edx + 4]
// 0060f117  8bce                 mov ecx, esi
// 0060f119  ffd0                 call eax
// 0060f11b  8d4e08               lea ecx, [esi + 8]
// 0060f11e  83caff               or edx, 0xffffffff
// 0060f121  f00fc111             lock xadd dword ptr [ecx], edx
// 0060f125  7509                 jne 0x60f130
// 0060f127  8b06                 mov eax, dword ptr [esi]
// 0060f129  8b5008               mov edx, dword ptr [eax + 8]
// 0060f12c  8bce                 mov ecx, esi
// 0060f12e  ffd2                 call edx
// 0060f130  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060f134  5f                   pop edi
// 0060f135  5e                   pop esi
// 0060f136  64890d00000000       mov dword ptr fs:[0], ecx
// 0060f13d  83c410               add esp, 0x10
// 0060f140  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1?$storage2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
