// from server: 100% by auto
// roc 2011-06 00795630  unit: RBX::VHttp::?$sp_counted_impl_p  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00795630
//
// 00795630  56                   push esi
// 00795631  8b7110               mov esi, dword ptr [ecx + 0x10]
// 00795634  85f6                 test esi, esi
// 00795636  742b                 je 0x795663
// 00795638  8d4604               lea eax, [esi + 4]
// 0079563b  83c9ff               or ecx, 0xffffffff
// 0079563e  f00fc108             lock xadd dword ptr [eax], ecx
// 00795642  751f                 jne 0x795663
// 00795644  8b16                 mov edx, dword ptr [esi]
// 00795646  8b4204               mov eax, dword ptr [edx + 4]
// 00795649  8bce                 mov ecx, esi
// 0079564b  ffd0                 call eax
// 0079564d  8d4e08               lea ecx, [esi + 8]
// 00795650  83caff               or edx, 0xffffffff
// 00795653  f00fc111             lock xadd dword ptr [ecx], edx
// 00795657  750a                 jne 0x795663
// 00795659  8b06                 mov eax, dword ptr [esi]
// 0079565b  8b5008               mov edx, dword ptr [eax + 8]
// 0079565e  8bce                 mov ecx, esi
// 00795660  5e                   pop esi
// 00795661  ffe2                 jmp edx
// 00795663  5e                   pop esi
// 00795664  c3                   ret 
// library templates-boost-1_34_1/set_sp.cpp (function ??1_Node@?$_Tree_nod@V?$_Tset_traits@V?$shared_ptr@UT@@@boost@@U?$less@V?$shared_ptr@UT@@@boost@@@std@@V?$allocator@V?$shared_ptr@UT@@@boost@@@4@$0A@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_sp.cpp
