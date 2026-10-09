// roc 2009-12 007e9b90  unit: RBX::Tasks::Barrier  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e9b90
//
// 007e9b90  6aff                 push -1
// 007e9b92  68a13e9500           push 0x953ea1
// 007e9b97  64a100000000         mov eax, dword ptr fs:[0]
// 007e9b9d  50                   push eax
// 007e9b9e  64892500000000       mov dword ptr fs:[0], esp
// 007e9ba5  83ec0c               sub esp, 0xc
// 007e9ba8  56                   push esi
// 007e9ba9  57                   push edi
// 007e9baa  c744240800000000     mov dword ptr [esp + 8], 0
// 007e9bb2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007e9bb6  83ec08               sub esp, 8
// 007e9bb9  8bc4                 mov eax, esp
// 007e9bbb  89642414             mov dword ptr [esp + 0x14], esp
// 007e9bbf  8908                 mov dword ptr [eax], ecx
// 007e9bc1  8b542438             mov edx, dword ptr [esp + 0x38]
// 007e9bc5  895004               mov dword ptr [eax + 4], edx
// 007e9bc8  8b442438             mov eax, dword ptr [esp + 0x38]
// 007e9bcc  be01000000           mov esi, 1
// 007e9bd1  89742424             mov dword ptr [esp + 0x24], esi
// 007e9bd5  85c0                 test eax, eax
// 007e9bd7  7409                 je 0x7e9be2
// 007e9bd9  83c004               add eax, 4
// 007e9bdc  8bce                 mov ecx, esi
// 007e9bde  f00fc108             lock xadd dword ptr [eax], ecx
// 007e9be2  8d4c2414             lea ecx, [esp + 0x14]
// 007e9be6  e8c571f5ff           call 0x740db0
// 007e9beb  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007e9bef  8b542428             mov edx, dword ptr [esp + 0x28]
// 007e9bf3  8917                 mov dword ptr [edi], edx
// 007e9bf5  8b08                 mov ecx, dword ptr [eax]
// 007e9bf7  894f04               mov dword ptr [edi + 4], ecx
// 007e9bfa  8b4004               mov eax, dword ptr [eax + 4]
// 007e9bfd  894708               mov dword ptr [edi + 8], eax
// 007e9c00  85c0                 test eax, eax
// 007e9c02  7409                 je 0x7e9c0d
// 007e9c04  83c004               add eax, 4
// 007e9c07  8bd6                 mov edx, esi
// 007e9c09  f00fc110             lock xadd dword ptr [eax], edx
// 007e9c0d  89742408             mov dword ptr [esp + 8], esi
// 007e9c11  8b742410             mov esi, dword ptr [esp + 0x10]
// 007e9c15  85f6                 test esi, esi
// 007e9c17  742a                 je 0x7e9c43
// 007e9c19  8d4604               lea eax, [esi + 4]
// 007e9c1c  83c9ff               or ecx, 0xffffffff
// 007e9c1f  f00fc108             lock xadd dword ptr [eax], ecx
// 007e9c23  751e                 jne 0x7e9c43
// 007e9c25  8b16                 mov edx, dword ptr [esi]
// 007e9c27  8b4204               mov eax, dword ptr [edx + 4]
// 007e9c2a  8bce                 mov ecx, esi
// 007e9c2c  ffd0                 call eax
// 007e9c2e  8d4e08               lea ecx, [esi + 8]
// 007e9c31  83caff               or edx, 0xffffffff
// 007e9c34  f00fc111             lock xadd dword ptr [ecx], edx
// 007e9c38  7509                 jne 0x7e9c43
// 007e9c3a  8b06                 mov eax, dword ptr [esi]
// 007e9c3c  8b5008               mov edx, dword ptr [eax + 8]
// 007e9c3f  8bce                 mov ecx, esi
// 007e9c41  ffd2                 call edx
// 007e9c43  8b742430             mov esi, dword ptr [esp + 0x30]
// 007e9c47  c644241c00           mov byte ptr [esp + 0x1c], 0
// 007e9c4c  85f6                 test esi, esi
// 007e9c4e  742a                 je 0x7e9c7a
// 007e9c50  8d4604               lea eax, [esi + 4]
// 007e9c53  83c9ff               or ecx, 0xffffffff
// 007e9c56  f00fc108             lock xadd dword ptr [eax], ecx
// 007e9c5a  751e                 jne 0x7e9c7a
// 007e9c5c  8b16                 mov edx, dword ptr [esi]
// 007e9c5e  8b4204               mov eax, dword ptr [edx + 4]
// 007e9c61  8bce                 mov ecx, esi
// 007e9c63  ffd0                 call eax
// 007e9c65  8d4e08               lea ecx, [esi + 8]
// 007e9c68  83caff               or edx, 0xffffffff
// 007e9c6b  f00fc111             lock xadd dword ptr [ecx], edx
// 007e9c6f  7509                 jne 0x7e9c7a
// 007e9c71  8b06                 mov eax, dword ptr [esi]
// 007e9c73  8b5008               mov edx, dword ptr [eax + 8]
// 007e9c76  8bce                 mov ecx, esi
// 007e9c78  ffd2                 call edx
// 007e9c7a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e9c7e  8bc7                 mov eax, edi
// 007e9c80  5f                   pop edi
// 007e9c81  64890d00000000       mov dword ptr fs:[0], ecx
// 007e9c88  5e                   pop esi
// 007e9c89  83c418               add esp, 0x18
// 007e9c8c  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$bind@XV?$weak_ptr@VInstance@RBX@@@boost@@V?$shared_ptr@VInstance@RBX@@@2@@boost@@YA?AV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@0@P6AXV?$weak_ptr@VInstance@RBX@@@0@@ZV?$shared_ptr@VInstance@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
