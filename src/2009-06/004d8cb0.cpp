// roc 2009-06 004d8cb0  unit: RBX::Network::VGuidRegistryService::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d8cb0
//
// 004d8cb0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004d8cb3  85c9                 test ecx, ecx
// 004d8cb5  7413                 je 0x4d8cca
// 004d8cb7  8d4108               lea eax, [ecx + 8]
// 004d8cba  83caff               or edx, 0xffffffff
// 004d8cbd  f00fc110             lock xadd dword ptr [eax], edx
// 004d8cc1  7507                 jne 0x4d8cca
// 004d8cc3  8b01                 mov eax, dword ptr [ecx]
// 004d8cc5  8b5008               mov edx, dword ptr [eax + 8]
// 004d8cc8  ffe2                 jmp edx
// 004d8cca  c3                   ret 
// library templates-boost-1_34_1/deque_wp.cpp (function ??1?$weak_ptr@UT@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
