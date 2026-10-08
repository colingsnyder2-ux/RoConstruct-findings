// from server: 100% by auto
// roc 2007-08 005e65b0  unit: RBX::Flag  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e65b0
//
// 005e65b0  56                   push esi
// 005e65b1  8b7114               mov esi, dword ptr [ecx + 0x14]
// 005e65b4  85f6                 test esi, esi
// 005e65b6  742b                 je 0x5e65e3
// 005e65b8  8d4604               lea eax, [esi + 4]
// 005e65bb  83c9ff               or ecx, 0xffffffff
// 005e65be  f00fc108             lock xadd dword ptr [eax], ecx
// 005e65c2  751f                 jne 0x5e65e3
// 005e65c4  8b16                 mov edx, dword ptr [esi]
// 005e65c6  8b4204               mov eax, dword ptr [edx + 4]
// 005e65c9  8bce                 mov ecx, esi
// 005e65cb  ffd0                 call eax
// 005e65cd  8d4e08               lea ecx, [esi + 8]
// 005e65d0  83caff               or edx, 0xffffffff
// 005e65d3  f00fc111             lock xadd dword ptr [ecx], edx
// 005e65d7  750a                 jne 0x5e65e3
// 005e65d9  8b06                 mov eax, dword ptr [esi]
// 005e65db  8b5008               mov edx, dword ptr [eax + 8]
// 005e65de  8bce                 mov ecx, esi
// 005e65e0  5e                   pop esi
// 005e65e1  ffe2                 jmp edx
// 005e65e3  5e                   pop esi
// 005e65e4  c3                   ret 
// library templates-boost-1_34_1/map_int_sp.cpp (function ??1_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_sp.cpp
