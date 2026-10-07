// roc 2007-08 00487c30  unit: P8CRenderSettings::?$GetSetImpl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00487c30
//
// 00487c30  c70100000000         mov dword ptr [ecx], 0
// 00487c36  56                   push esi
// 00487c37  8b7104               mov esi, dword ptr [ecx + 4]
// 00487c3a  85f6                 test esi, esi
// 00487c3c  c7410400000000       mov dword ptr [ecx + 4], 0
// 00487c43  742b                 je 0x487c70
// 00487c45  8d4604               lea eax, [esi + 4]
// 00487c48  83c9ff               or ecx, 0xffffffff
// 00487c4b  f00fc108             lock xadd dword ptr [eax], ecx
// 00487c4f  751f                 jne 0x487c70
// 00487c51  8b16                 mov edx, dword ptr [esi]
// 00487c53  8b4204               mov eax, dword ptr [edx + 4]
// 00487c56  8bce                 mov ecx, esi
// 00487c58  ffd0                 call eax
// 00487c5a  8d4e08               lea ecx, [esi + 8]
// 00487c5d  83caff               or edx, 0xffffffff
// 00487c60  f00fc111             lock xadd dword ptr [ecx], edx
// 00487c64  750a                 jne 0x487c70
// 00487c66  8b06                 mov eax, dword ptr [esi]
// 00487c68  8b5008               mov edx, dword ptr [eax + 8]
// 00487c6b  8bce                 mov ecx, esi
// 00487c6d  5e                   pop esi
// 00487c6e  ffe2                 jmp edx
// 00487c70  5e                   pop esi
// 00487c71  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?reset@?$shared_ptr@V?$dir_itr_imp@V?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@@detail@filesystem@boost@@@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
