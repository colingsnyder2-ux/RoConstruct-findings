// from server: 100% by auto
// roc 2010-06 004c4870  unit: RBX::VInstance::?$NonFactoryProduct  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c4870
//
// 004c4870  56                   push esi
// 004c4871  8b7110               mov esi, dword ptr [ecx + 0x10]
// 004c4874  85f6                 test esi, esi
// 004c4876  742b                 je 0x4c48a3
// 004c4878  8d4604               lea eax, [esi + 4]
// 004c487b  83c9ff               or ecx, 0xffffffff
// 004c487e  f00fc108             lock xadd dword ptr [eax], ecx
// 004c4882  751f                 jne 0x4c48a3
// 004c4884  8b16                 mov edx, dword ptr [esi]
// 004c4886  8b4204               mov eax, dword ptr [edx + 4]
// 004c4889  8bce                 mov ecx, esi
// 004c488b  ffd0                 call eax
// 004c488d  8d4e08               lea ecx, [esi + 8]
// 004c4890  83caff               or edx, 0xffffffff
// 004c4893  f00fc111             lock xadd dword ptr [ecx], edx
// 004c4897  750a                 jne 0x4c48a3
// 004c4899  8b06                 mov eax, dword ptr [esi]
// 004c489b  8b5008               mov edx, dword ptr [eax + 8]
// 004c489e  8bce                 mov ecx, esi
// 004c48a0  5e                   pop esi
// 004c48a1  ffe2                 jmp edx
// 004c48a3  5e                   pop esi
// 004c48a4  c3                   ret 
// library templates-boost-1_34_1/set_sp.cpp (function ??1_Node@?$_Tree_nod@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_sp.cpp
