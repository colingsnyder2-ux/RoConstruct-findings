// from server: 100% by auto
// roc 2007-08 004a86b0  unit: RBX::Network::VClient::?$FactoryProduct  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a86b0
//
// 004a86b0  56                   push esi
// 004a86b1  8b7110               mov esi, dword ptr [ecx + 0x10]
// 004a86b4  85f6                 test esi, esi
// 004a86b6  742b                 je 0x4a86e3
// 004a86b8  8d4604               lea eax, [esi + 4]
// 004a86bb  83c9ff               or ecx, 0xffffffff
// 004a86be  f00fc108             lock xadd dword ptr [eax], ecx
// 004a86c2  751f                 jne 0x4a86e3
// 004a86c4  8b16                 mov edx, dword ptr [esi]
// 004a86c6  8b4204               mov eax, dword ptr [edx + 4]
// 004a86c9  8bce                 mov ecx, esi
// 004a86cb  ffd0                 call eax
// 004a86cd  8d4e08               lea ecx, [esi + 8]
// 004a86d0  83caff               or edx, 0xffffffff
// 004a86d3  f00fc111             lock xadd dword ptr [ecx], edx
// 004a86d7  750a                 jne 0x4a86e3
// 004a86d9  8b06                 mov eax, dword ptr [esi]
// 004a86db  8b5008               mov edx, dword ptr [eax + 8]
// 004a86de  8bce                 mov ecx, esi
// 004a86e0  5e                   pop esi
// 004a86e1  ffe2                 jmp edx
// 004a86e3  5e                   pop esi
// 004a86e4  c3                   ret 
// library templates-boost-1_34_1/set_sp.cpp (function ??1_Node@?$_Tree_nod@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_sp.cpp
