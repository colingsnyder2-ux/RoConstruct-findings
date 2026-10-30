// from server: 100% by auto
// roc 2008-06 004aea80  unit: RBX::Network::Replicator::MarkerItem  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aea80
//
// 004aea80  56                   push esi
// 004aea81  8b7110               mov esi, dword ptr [ecx + 0x10]
// 004aea84  85f6                 test esi, esi
// 004aea86  742b                 je 0x4aeab3
// 004aea88  8d4604               lea eax, [esi + 4]
// 004aea8b  83c9ff               or ecx, 0xffffffff
// 004aea8e  f00fc108             lock xadd dword ptr [eax], ecx
// 004aea92  751f                 jne 0x4aeab3
// 004aea94  8b16                 mov edx, dword ptr [esi]
// 004aea96  8b4204               mov eax, dword ptr [edx + 4]
// 004aea99  8bce                 mov ecx, esi
// 004aea9b  ffd0                 call eax
// 004aea9d  8d4e08               lea ecx, [esi + 8]
// 004aeaa0  83caff               or edx, 0xffffffff
// 004aeaa3  f00fc111             lock xadd dword ptr [ecx], edx
// 004aeaa7  750a                 jne 0x4aeab3
// 004aeaa9  8b06                 mov eax, dword ptr [esi]
// 004aeaab  8b5008               mov edx, dword ptr [eax + 8]
// 004aeaae  8bce                 mov ecx, esi
// 004aeab0  5e                   pop esi
// 004aeab1  ffe2                 jmp edx
// 004aeab3  5e                   pop esi
// 004aeab4  c3                   ret 
// library templates-boost-1_34_1/set_sp.cpp (function ??1_Node@?$_Tree_nod@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_sp.cpp
