// from server: 100% by auto
// roc 2012-06 005728d0  unit: AsyncResult  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005728d0
//
// 005728d0  8d4424f8             lea eax, [esp - 8]
// 005728d4  83ec08               sub esp, 8
// 005728d7  3bc1                 cmp eax, ecx
// 005728d9  7406                 je 0x5728e1
// 005728db  c70100000000         mov dword ptr [ecx], 0
// 005728e1  56                   push esi
// 005728e2  8b7104               mov esi, dword ptr [ecx + 4]
// 005728e5  c7410400000000       mov dword ptr [ecx + 4], 0
// 005728ec  85f6                 test esi, esi
// 005728ee  742e                 je 0x57291e
// 005728f0  8d4e04               lea ecx, [esi + 4]
// 005728f3  83caff               or edx, 0xffffffff
// 005728f6  f00fc111             lock xadd dword ptr [ecx], edx
// 005728fa  7522                 jne 0x57291e
// 005728fc  8b06                 mov eax, dword ptr [esi]
// 005728fe  8b5004               mov edx, dword ptr [eax + 4]
// 00572901  8bce                 mov ecx, esi
// 00572903  ffd2                 call edx
// 00572905  8d4608               lea eax, [esi + 8]
// 00572908  83c9ff               or ecx, 0xffffffff
// 0057290b  f00fc108             lock xadd dword ptr [eax], ecx
// 0057290f  750d                 jne 0x57291e
// 00572911  8b16                 mov edx, dword ptr [esi]
// 00572913  8b4208               mov eax, dword ptr [edx + 8]
// 00572916  8bce                 mov ecx, esi
// 00572918  5e                   pop esi
// 00572919  83c408               add esp, 8
// 0057291c  ffe0                 jmp eax
// 0057291e  5e                   pop esi
// 0057291f  83c408               add esp, 8
// 00572922  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?reset@?$shared_ptr@V?$dir_itr_imp@V?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@@detail@filesystem@boost@@@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
