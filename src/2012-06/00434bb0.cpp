// roc 2012-06 00434bb0  unit: MainLogManager  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00434bb0
//
// 00434bb0  8b09                 mov ecx, dword ptr [ecx]
// 00434bb2  85c9                 test ecx, ecx
// 00434bb4  7413                 je 0x434bc9
// 00434bb6  8d4108               lea eax, [ecx + 8]
// 00434bb9  83caff               or edx, 0xffffffff
// 00434bbc  f00fc110             lock xadd dword ptr [eax], edx
// 00434bc0  7507                 jne 0x434bc9
// 00434bc2  8b01                 mov eax, dword ptr [ecx]
// 00434bc4  8b5008               mov edx, dword ptr [eax + 8]
// 00434bc7  ffe2                 jmp edx
// 00434bc9  c3                   ret 
// library templates-boost-1_34_1/deque_wp.cpp (function ??1weak_count@detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
