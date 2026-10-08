// from server: 100% by auto
// roc 2012-06 0070fdc0  unit: RBX::Tool  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070fdc0
//
// 0070fdc0  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0070fdc3  85c9                 test ecx, ecx
// 0070fdc5  7413                 je 0x70fdda
// 0070fdc7  8d4108               lea eax, [ecx + 8]
// 0070fdca  83caff               or edx, 0xffffffff
// 0070fdcd  f00fc110             lock xadd dword ptr [eax], edx
// 0070fdd1  7507                 jne 0x70fdda
// 0070fdd3  8b01                 mov eax, dword ptr [ecx]
// 0070fdd5  8b5008               mov edx, dword ptr [eax + 8]
// 0070fdd8  ffe2                 jmp edx
// 0070fdda  c3                   ret 
// library templates-boost-1_34_1/set_wp.cpp (function ??1_Node@?$_Tree_nod@V?$_Tset_traits@V?$weak_ptr@UT@@@boost@@U?$less@V?$weak_ptr@UT@@@boost@@@std@@V?$allocator@V?$weak_ptr@UT@@@boost@@@4@$0A@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 set_wp.cpp
