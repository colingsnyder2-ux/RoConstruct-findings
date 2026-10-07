// roc 2012-06 005727e0  unit: AsyncResult  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005727e0
//
// 005727e0  56                   push esi
// 005727e1  8b7114               mov esi, dword ptr [ecx + 0x14]
// 005727e4  85f6                 test esi, esi
// 005727e6  742b                 je 0x572813
// 005727e8  8d4604               lea eax, [esi + 4]
// 005727eb  83c9ff               or ecx, 0xffffffff
// 005727ee  f00fc108             lock xadd dword ptr [eax], ecx
// 005727f2  751f                 jne 0x572813
// 005727f4  8b16                 mov edx, dword ptr [esi]
// 005727f6  8b4204               mov eax, dword ptr [edx + 4]
// 005727f9  8bce                 mov ecx, esi
// 005727fb  ffd0                 call eax
// 005727fd  8d4e08               lea ecx, [esi + 8]
// 00572800  83caff               or edx, 0xffffffff
// 00572803  f00fc111             lock xadd dword ptr [ecx], edx
// 00572807  750a                 jne 0x572813
// 00572809  8b06                 mov eax, dword ptr [esi]
// 0057280b  8b5008               mov edx, dword ptr [eax + 8]
// 0057280e  8bce                 mov ecx, esi
// 00572810  5e                   pop esi
// 00572811  ffe2                 jmp edx
// 00572813  5e                   pop esi
// 00572814  c3                   ret 
// library templates-boost-1_34_1/map_int_sp.cpp (function ??1_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@$0A@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_sp.cpp
