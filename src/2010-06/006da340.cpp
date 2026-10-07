// roc 2010-06 006da340  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006da340
//
// 006da340  8b4904               mov ecx, dword ptr [ecx + 4]
// 006da343  85c9                 test ecx, ecx
// 006da345  7413                 je 0x6da35a
// 006da347  8d4108               lea eax, [ecx + 8]
// 006da34a  83caff               or edx, 0xffffffff
// 006da34d  f00fc110             lock xadd dword ptr [eax], edx
// 006da351  7507                 jne 0x6da35a
// 006da353  8b01                 mov eax, dword ptr [ecx]
// 006da355  8b5008               mov edx, dword ptr [eax + 8]
// 006da358  ffe2                 jmp edx
// 006da35a  c3                   ret 
// library templates-boost-1_34_1/deque_wp.cpp (function ??1?$weak_ptr@UT@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
