// roc 2008-06 00456e80  unit: CRobloxReportView::CStatsItemRecord::CValueItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00456e80
//
// 00456e80  8d4424f8             lea eax, [esp - 8]
// 00456e84  83ec08               sub esp, 8
// 00456e87  3bc1                 cmp eax, ecx
// 00456e89  7406                 je 0x456e91
// 00456e8b  c70100000000         mov dword ptr [ecx], 0
// 00456e91  56                   push esi
// 00456e92  8b7104               mov esi, dword ptr [ecx + 4]
// 00456e95  c7410400000000       mov dword ptr [ecx + 4], 0
// 00456e9c  85f6                 test esi, esi
// 00456e9e  742e                 je 0x456ece
// 00456ea0  8d4e04               lea ecx, [esi + 4]
// 00456ea3  83caff               or edx, 0xffffffff
// 00456ea6  f00fc111             lock xadd dword ptr [ecx], edx
// 00456eaa  7522                 jne 0x456ece
// 00456eac  8b06                 mov eax, dword ptr [esi]
// 00456eae  8b5004               mov edx, dword ptr [eax + 4]
// 00456eb1  8bce                 mov ecx, esi
// 00456eb3  ffd2                 call edx
// 00456eb5  8d4608               lea eax, [esi + 8]
// 00456eb8  83c9ff               or ecx, 0xffffffff
// 00456ebb  f00fc108             lock xadd dword ptr [eax], ecx
// 00456ebf  750d                 jne 0x456ece
// 00456ec1  8b16                 mov edx, dword ptr [esi]
// 00456ec3  8b4208               mov eax, dword ptr [edx + 8]
// 00456ec6  8bce                 mov ecx, esi
// 00456ec8  5e                   pop esi
// 00456ec9  83c408               add esp, 8
// 00456ecc  ffe0                 jmp eax
// 00456ece  5e                   pop esi
// 00456ecf  83c408               add esp, 8
// 00456ed2  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?reset@?$shared_ptr@V?$dir_itr_imp@V?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@@detail@filesystem@boost@@@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
