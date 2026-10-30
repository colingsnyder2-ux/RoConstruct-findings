// from server: 100% by auto
// roc 2011-06 0063de40  unit: RBX::Workspace  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0063de40
//
// 0063de40  8b4904               mov ecx, dword ptr [ecx + 4]
// 0063de43  85c9                 test ecx, ecx
// 0063de45  7413                 je 0x63de5a
// 0063de47  8d4108               lea eax, [ecx + 8]
// 0063de4a  83caff               or edx, 0xffffffff
// 0063de4d  f00fc110             lock xadd dword ptr [eax], edx
// 0063de51  7507                 jne 0x63de5a
// 0063de53  8b01                 mov eax, dword ptr [ecx]
// 0063de55  8b5008               mov edx, dword ptr [eax + 8]
// 0063de58  ffe2                 jmp edx
// 0063de5a  c3                   ret 
// library templates-boost-1_34_1/deque_wp.cpp (function ??1?$weak_ptr@UT@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
