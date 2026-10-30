// from server: 100% by auto
// roc 2012-06 005b6a30  unit: RBX::Network::InterpolatingPhysicsReceiver::Nugget::UHistory::?$sp_counted_impl_p  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005b6a30
//
// 005b6a30  56                   push esi
// 005b6a31  8b7110               mov esi, dword ptr [ecx + 0x10]
// 005b6a34  85f6                 test esi, esi
// 005b6a36  742b                 je 0x5b6a63
// 005b6a38  8d4604               lea eax, [esi + 4]
// 005b6a3b  83c9ff               or ecx, 0xffffffff
// 005b6a3e  f00fc108             lock xadd dword ptr [eax], ecx
// 005b6a42  751f                 jne 0x5b6a63
// 005b6a44  8b16                 mov edx, dword ptr [esi]
// 005b6a46  8b4204               mov eax, dword ptr [edx + 4]
// 005b6a49  8bce                 mov ecx, esi
// 005b6a4b  ffd0                 call eax
// 005b6a4d  8d4e08               lea ecx, [esi + 8]
// 005b6a50  83caff               or edx, 0xffffffff
// 005b6a53  f00fc111             lock xadd dword ptr [ecx], edx
// 005b6a57  750a                 jne 0x5b6a63
// 005b6a59  8b06                 mov eax, dword ptr [esi]
// 005b6a5b  8b5008               mov edx, dword ptr [eax + 8]
// 005b6a5e  8bce                 mov ecx, esi
// 005b6a60  5e                   pop esi
// 005b6a61  ffe2                 jmp edx
// 005b6a63  5e                   pop esi
// 005b6a64  c3                   ret 
// library templates-boost-1_34_1/set_sp.cpp (function ??1_Node@?$_Tree_nod@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_sp.cpp
