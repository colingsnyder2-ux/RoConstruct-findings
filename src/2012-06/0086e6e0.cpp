// roc 2012-06 0086e6e0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086e6e0
//
// 0086e6e0  8b4908               mov ecx, dword ptr [ecx + 8]
// 0086e6e3  85c9                 test ecx, ecx
// 0086e6e5  7413                 je 0x86e6fa
// 0086e6e7  8d4108               lea eax, [ecx + 8]
// 0086e6ea  83caff               or edx, 0xffffffff
// 0086e6ed  f00fc110             lock xadd dword ptr [eax], edx
// 0086e6f1  7507                 jne 0x86e6fa
// 0086e6f3  8b01                 mov eax, dword ptr [ecx]
// 0086e6f5  8b5008               mov edx, dword ptr [eax + 8]
// 0086e6f8  ffe2                 jmp edx
// 0086e6fa  c3                   ret 
// library templates-boost-1_34_1/map_int_wp.cpp (function ??1?$pair@$$CBHV?$weak_ptr@UT@@@boost@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_wp.cpp
