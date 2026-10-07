// roc 2010-06 004a5c00  unit: RBX::VBrickColor::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a5c00
//
// 004a5c00  8d4424f8             lea eax, [esp - 8]
// 004a5c04  83ec08               sub esp, 8
// 004a5c07  3bc1                 cmp eax, ecx
// 004a5c09  7406                 je 0x4a5c11
// 004a5c0b  c70100000000         mov dword ptr [ecx], 0
// 004a5c11  56                   push esi
// 004a5c12  8b7104               mov esi, dword ptr [ecx + 4]
// 004a5c15  c7410400000000       mov dword ptr [ecx + 4], 0
// 004a5c1c  85f6                 test esi, esi
// 004a5c1e  742e                 je 0x4a5c4e
// 004a5c20  8d4e04               lea ecx, [esi + 4]
// 004a5c23  83caff               or edx, 0xffffffff
// 004a5c26  f00fc111             lock xadd dword ptr [ecx], edx
// 004a5c2a  7522                 jne 0x4a5c4e
// 004a5c2c  8b06                 mov eax, dword ptr [esi]
// 004a5c2e  8b5004               mov edx, dword ptr [eax + 4]
// 004a5c31  8bce                 mov ecx, esi
// 004a5c33  ffd2                 call edx
// 004a5c35  8d4608               lea eax, [esi + 8]
// 004a5c38  83c9ff               or ecx, 0xffffffff
// 004a5c3b  f00fc108             lock xadd dword ptr [eax], ecx
// 004a5c3f  750d                 jne 0x4a5c4e
// 004a5c41  8b16                 mov edx, dword ptr [esi]
// 004a5c43  8b4208               mov eax, dword ptr [edx + 8]
// 004a5c46  8bce                 mov ecx, esi
// 004a5c48  5e                   pop esi
// 004a5c49  83c408               add esp, 8
// 004a5c4c  ffe0                 jmp eax
// 004a5c4e  5e                   pop esi
// 004a5c4f  83c408               add esp, 8
// 004a5c52  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?reset@?$shared_ptr@V?$dir_itr_imp@V?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@@detail@filesystem@boost@@@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
