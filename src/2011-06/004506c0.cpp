// roc 2011-06 004506c0  unit: RBXImage  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004506c0
//
// 004506c0  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 004506c3  85c9                 test ecx, ecx
// 004506c5  7413                 je 0x4506da
// 004506c7  8d4108               lea eax, [ecx + 8]
// 004506ca  83caff               or edx, 0xffffffff
// 004506cd  f00fc110             lock xadd dword ptr [eax], edx
// 004506d1  7507                 jne 0x4506da
// 004506d3  8b01                 mov eax, dword ptr [ecx]
// 004506d5  8b5008               mov edx, dword ptr [eax + 8]
// 004506d8  ffe2                 jmp edx
// 004506da  c3                   ret 
// library templates-boost-1_34_1/set_wp.cpp (function ??1_Node@?$_Tree_nod@V?$_Tset_traits@V?$weak_ptr@UT@@@boost@@U?$less@V?$weak_ptr@UT@@@boost@@@std@@V?$allocator@V?$weak_ptr@UT@@@boost@@@4@$0A@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_wp.cpp
