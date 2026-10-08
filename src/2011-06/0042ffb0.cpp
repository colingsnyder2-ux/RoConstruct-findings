// from server: 100% by auto
// roc 2011-06 0042ffb0  unit: MainLogManager  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0042ffb0
//
// 0042ffb0  8b09                 mov ecx, dword ptr [ecx]
// 0042ffb2  85c9                 test ecx, ecx
// 0042ffb4  7413                 je 0x42ffc9
// 0042ffb6  8d4108               lea eax, [ecx + 8]
// 0042ffb9  83caff               or edx, 0xffffffff
// 0042ffbc  f00fc110             lock xadd dword ptr [eax], edx
// 0042ffc0  7507                 jne 0x42ffc9
// 0042ffc2  8b01                 mov eax, dword ptr [ecx]
// 0042ffc4  8b5008               mov edx, dword ptr [eax + 8]
// 0042ffc7  ffe2                 jmp edx
// 0042ffc9  c3                   ret 
// library templates-boost-1_34_1/deque_wp.cpp (function ??1weak_count@detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
