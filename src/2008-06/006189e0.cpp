// from server: 100% by auto
// roc 2008-06 006189e0  unit: RBX::Flag  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006189e0
//
// 006189e0  56                   push esi
// 006189e1  8b7114               mov esi, dword ptr [ecx + 0x14]
// 006189e4  85f6                 test esi, esi
// 006189e6  742b                 je 0x618a13
// 006189e8  8d4604               lea eax, [esi + 4]
// 006189eb  83c9ff               or ecx, 0xffffffff
// 006189ee  f00fc108             lock xadd dword ptr [eax], ecx
// 006189f2  751f                 jne 0x618a13
// 006189f4  8b16                 mov edx, dword ptr [esi]
// 006189f6  8b4204               mov eax, dword ptr [edx + 4]
// 006189f9  8bce                 mov ecx, esi
// 006189fb  ffd0                 call eax
// 006189fd  8d4e08               lea ecx, [esi + 8]
// 00618a00  83caff               or edx, 0xffffffff
// 00618a03  f00fc111             lock xadd dword ptr [ecx], edx
// 00618a07  750a                 jne 0x618a13
// 00618a09  8b06                 mov eax, dword ptr [esi]
// 00618a0b  8b5008               mov edx, dword ptr [eax + 8]
// 00618a0e  8bce                 mov ecx, esi
// 00618a10  5e                   pop esi
// 00618a11  ffe2                 jmp edx
// 00618a13  5e                   pop esi
// 00618a14  c3                   ret 
// library templates-boost-1_34_1/map_int_sp.cpp (function ??1_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_sp.cpp
