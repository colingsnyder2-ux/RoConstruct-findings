// roc 2011-06 00679e70  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00679e70
//
// 00679e70  8d4424f8             lea eax, [esp - 8]
// 00679e74  83ec08               sub esp, 8
// 00679e77  3bc1                 cmp eax, ecx
// 00679e79  7406                 je 0x679e81
// 00679e7b  c70100000000         mov dword ptr [ecx], 0
// 00679e81  56                   push esi
// 00679e82  8b7104               mov esi, dword ptr [ecx + 4]
// 00679e85  c7410400000000       mov dword ptr [ecx + 4], 0
// 00679e8c  85f6                 test esi, esi
// 00679e8e  742e                 je 0x679ebe
// 00679e90  8d4e04               lea ecx, [esi + 4]
// 00679e93  83caff               or edx, 0xffffffff
// 00679e96  f00fc111             lock xadd dword ptr [ecx], edx
// 00679e9a  7522                 jne 0x679ebe
// 00679e9c  8b06                 mov eax, dword ptr [esi]
// 00679e9e  8b5004               mov edx, dword ptr [eax + 4]
// 00679ea1  8bce                 mov ecx, esi
// 00679ea3  ffd2                 call edx
// 00679ea5  8d4608               lea eax, [esi + 8]
// 00679ea8  83c9ff               or ecx, 0xffffffff
// 00679eab  f00fc108             lock xadd dword ptr [eax], ecx
// 00679eaf  750d                 jne 0x679ebe
// 00679eb1  8b16                 mov edx, dword ptr [esi]
// 00679eb3  8b4208               mov eax, dword ptr [edx + 8]
// 00679eb6  8bce                 mov ecx, esi
// 00679eb8  5e                   pop esi
// 00679eb9  83c408               add esp, 8
// 00679ebc  ffe0                 jmp eax
// 00679ebe  5e                   pop esi
// 00679ebf  83c408               add esp, 8
// 00679ec2  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?reset@?$shared_ptr@V?$dir_itr_imp@V?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@@detail@filesystem@boost@@@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
