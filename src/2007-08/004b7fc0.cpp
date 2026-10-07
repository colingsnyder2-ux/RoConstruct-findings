// roc 2007-08 004b7fc0  unit: Exposer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7fc0
//
// 004b7fc0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004b7fc3  85c9                 test ecx, ecx
// 004b7fc5  7413                 je 0x4b7fda
// 004b7fc7  8d4108               lea eax, [ecx + 8]
// 004b7fca  83caff               or edx, 0xffffffff
// 004b7fcd  f00fc110             lock xadd dword ptr [eax], edx
// 004b7fd1  7507                 jne 0x4b7fda
// 004b7fd3  8b01                 mov eax, dword ptr [ecx]
// 004b7fd5  8b5008               mov edx, dword ptr [eax + 8]
// 004b7fd8  ffe2                 jmp edx
// 004b7fda  c3                   ret 
// library templates-boost-1_34_1/deque_wp.cpp (function ??1?$weak_ptr@UT@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
