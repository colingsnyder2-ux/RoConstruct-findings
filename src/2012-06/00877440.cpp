// roc 2012-06 00877440  unit: DummyJob  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00877440
//
// 00877440  8b4904               mov ecx, dword ptr [ecx + 4]
// 00877443  85c9                 test ecx, ecx
// 00877445  7413                 je 0x87745a
// 00877447  8d4108               lea eax, [ecx + 8]
// 0087744a  83caff               or edx, 0xffffffff
// 0087744d  f00fc110             lock xadd dword ptr [eax], edx
// 00877451  7507                 jne 0x87745a
// 00877453  8b01                 mov eax, dword ptr [ecx]
// 00877455  8b5008               mov edx, dword ptr [eax + 8]
// 00877458  ffe2                 jmp edx
// 0087745a  c3                   ret 
// library templates-boost-1_34_1/deque_wp.cpp (function ??1?$weak_ptr@UT@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
