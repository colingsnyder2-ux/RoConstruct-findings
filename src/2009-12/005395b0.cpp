// roc 2009-12 005395b0  unit: G3D::VRay::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005395b0
//
// 005395b0  8d4424f8             lea eax, [esp - 8]
// 005395b4  83ec08               sub esp, 8
// 005395b7  3bc1                 cmp eax, ecx
// 005395b9  7406                 je 0x5395c1
// 005395bb  c70100000000         mov dword ptr [ecx], 0
// 005395c1  56                   push esi
// 005395c2  8b7104               mov esi, dword ptr [ecx + 4]
// 005395c5  c7410400000000       mov dword ptr [ecx + 4], 0
// 005395cc  85f6                 test esi, esi
// 005395ce  742e                 je 0x5395fe
// 005395d0  8d4e04               lea ecx, [esi + 4]
// 005395d3  83caff               or edx, 0xffffffff
// 005395d6  f00fc111             lock xadd dword ptr [ecx], edx
// 005395da  7522                 jne 0x5395fe
// 005395dc  8b06                 mov eax, dword ptr [esi]
// 005395de  8b5004               mov edx, dword ptr [eax + 4]
// 005395e1  8bce                 mov ecx, esi
// 005395e3  ffd2                 call edx
// 005395e5  8d4608               lea eax, [esi + 8]
// 005395e8  83c9ff               or ecx, 0xffffffff
// 005395eb  f00fc108             lock xadd dword ptr [eax], ecx
// 005395ef  750d                 jne 0x5395fe
// 005395f1  8b16                 mov edx, dword ptr [esi]
// 005395f3  8b4208               mov eax, dword ptr [edx + 8]
// 005395f6  8bce                 mov ecx, esi
// 005395f8  5e                   pop esi
// 005395f9  83c408               add esp, 8
// 005395fc  ffe0                 jmp eax
// 005395fe  5e                   pop esi
// 005395ff  83c408               add esp, 8
// 00539602  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?reset@?$shared_ptr@V?$dir_itr_imp@V?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@@detail@filesystem@boost@@@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
