// roc 2009-06 00466fa0  unit: CSelectionCaption  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00466fa0
//
// 00466fa0  8d4424f8             lea eax, [esp - 8]
// 00466fa4  83ec08               sub esp, 8
// 00466fa7  3bc1                 cmp eax, ecx
// 00466fa9  7406                 je 0x466fb1
// 00466fab  c70100000000         mov dword ptr [ecx], 0
// 00466fb1  56                   push esi
// 00466fb2  8b7104               mov esi, dword ptr [ecx + 4]
// 00466fb5  c7410400000000       mov dword ptr [ecx + 4], 0
// 00466fbc  85f6                 test esi, esi
// 00466fbe  742e                 je 0x466fee
// 00466fc0  8d4e04               lea ecx, [esi + 4]
// 00466fc3  83caff               or edx, 0xffffffff
// 00466fc6  f00fc111             lock xadd dword ptr [ecx], edx
// 00466fca  7522                 jne 0x466fee
// 00466fcc  8b06                 mov eax, dword ptr [esi]
// 00466fce  8b5004               mov edx, dword ptr [eax + 4]
// 00466fd1  8bce                 mov ecx, esi
// 00466fd3  ffd2                 call edx
// 00466fd5  8d4608               lea eax, [esi + 8]
// 00466fd8  83c9ff               or ecx, 0xffffffff
// 00466fdb  f00fc108             lock xadd dword ptr [eax], ecx
// 00466fdf  750d                 jne 0x466fee
// 00466fe1  8b16                 mov edx, dword ptr [esi]
// 00466fe3  8b4208               mov eax, dword ptr [edx + 8]
// 00466fe6  8bce                 mov ecx, esi
// 00466fe8  5e                   pop esi
// 00466fe9  83c408               add esp, 8
// 00466fec  ffe0                 jmp eax
// 00466fee  5e                   pop esi
// 00466fef  83c408               add esp, 8
// 00466ff2  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?reset@?$shared_ptr@V?$dir_itr_imp@V?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@@detail@filesystem@boost@@@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
