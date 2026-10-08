// from server: 100% by auto
// roc 2010-06 009608e0  unit: RBX::SphereBuilder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009608e0
//
// 009608e0  8b4908               mov ecx, dword ptr [ecx + 8]
// 009608e3  85c9                 test ecx, ecx
// 009608e5  7413                 je 0x9608fa
// 009608e7  8d4108               lea eax, [ecx + 8]
// 009608ea  83caff               or edx, 0xffffffff
// 009608ed  f00fc110             lock xadd dword ptr [eax], edx
// 009608f1  7507                 jne 0x9608fa
// 009608f3  8b01                 mov eax, dword ptr [ecx]
// 009608f5  8b5008               mov edx, dword ptr [eax + 8]
// 009608f8  ffe2                 jmp edx
// 009608fa  c3                   ret 
// library templates-boost-1_34_1/map_int_wp.cpp (function ??1?$pair@$$CBHV?$weak_ptr@UT@@@boost@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_wp.cpp
