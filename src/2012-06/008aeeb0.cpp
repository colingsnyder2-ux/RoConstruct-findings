// from server: 100% by auto
// roc 2012-06 008aeeb0  unit: RBX::Flag  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008aeeb0
//
// 008aeeb0  8bc1                 mov eax, ecx
// 008aeeb2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008aeeb6  8b11                 mov edx, dword ptr [ecx]
// 008aeeb8  8910                 mov dword ptr [eax], edx
// 008aeeba  8b4904               mov ecx, dword ptr [ecx + 4]
// 008aeebd  894804               mov dword ptr [eax + 4], ecx
// 008aeec0  85c9                 test ecx, ecx
// 008aeec2  740c                 je 0x8aeed0
// 008aeec4  83c108               add ecx, 8
// 008aeec7  ba01000000           mov edx, 1
// 008aeecc  f00fc111             lock xadd dword ptr [ecx], edx
// 008aeed0  c20400               ret 4
// library templates-boost-1_34_1/deque_wp.cpp (function ??0?$weak_ptr@UT@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
