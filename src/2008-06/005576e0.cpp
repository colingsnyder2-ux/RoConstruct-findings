// from server: 100% by auto
// roc 2008-06 005576e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005576e0
//
// 005576e0  8b4904               mov ecx, dword ptr [ecx + 4]
// 005576e3  85c9                 test ecx, ecx
// 005576e5  7413                 je 0x5576fa
// 005576e7  8d4108               lea eax, [ecx + 8]
// 005576ea  83caff               or edx, 0xffffffff
// 005576ed  f00fc110             lock xadd dword ptr [eax], edx
// 005576f1  7507                 jne 0x5576fa
// 005576f3  8b01                 mov eax, dword ptr [ecx]
// 005576f5  8b5008               mov edx, dword ptr [eax + 8]
// 005576f8  ffe2                 jmp edx
// 005576fa  c3                   ret 
// library templates-boost-1_34_1/deque_wp.cpp (function ??1?$weak_ptr@UT@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
