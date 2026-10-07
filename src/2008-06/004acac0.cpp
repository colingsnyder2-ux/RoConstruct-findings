// roc 2008-06 004acac0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004acac0
//
// 004acac0  56                   push esi
// 004acac1  57                   push edi
// 004acac2  8bf9                 mov edi, ecx
// 004acac4  8b7710               mov esi, dword ptr [edi + 0x10]
// 004acac7  85f6                 test esi, esi
// 004acac9  742a                 je 0x4acaf5
// 004acacb  8d4604               lea eax, [esi + 4]
// 004acace  83c9ff               or ecx, 0xffffffff
// 004acad1  f00fc108             lock xadd dword ptr [eax], ecx
// 004acad5  751e                 jne 0x4acaf5
// 004acad7  8b16                 mov edx, dword ptr [esi]
// 004acad9  8b4204               mov eax, dword ptr [edx + 4]
// 004acadc  8bce                 mov ecx, esi
// 004acade  ffd0                 call eax
// 004acae0  8d4e08               lea ecx, [esi + 8]
// 004acae3  83caff               or edx, 0xffffffff
// 004acae6  f00fc111             lock xadd dword ptr [ecx], edx
// 004acaea  7509                 jne 0x4acaf5
// 004acaec  8b06                 mov eax, dword ptr [esi]
// 004acaee  8b5008               mov edx, dword ptr [eax + 8]
// 004acaf1  8bce                 mov ecx, esi
// 004acaf3  ffd2                 call edx
// 004acaf5  f644240c01           test byte ptr [esp + 0xc], 1
// 004acafa  7409                 je 0x4acb05
// 004acafc  57                   push edi
// 004acafd  e8783b1f00           call 0x6a067a
// 004acb02  83c404               add esp, 4
// 004acb05  8bc7                 mov eax, edi
// 004acb07  5f                   pop edi
// 004acb08  5e                   pop esi
// 004acb09  c20400               ret 4
// library templates-boost-1_34_1/set_sp.cpp (function ??_G_Node@?$_Tree_nod@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@std@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_sp.cpp
