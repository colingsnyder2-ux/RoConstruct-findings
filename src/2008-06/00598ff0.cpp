// from server: 100% by auto
// roc 2008-06 00598ff0  unit: RBX::PartInstance  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598ff0
//
// 00598ff0  8bc1                 mov eax, ecx
// 00598ff2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00598ff6  8b11                 mov edx, dword ptr [ecx]
// 00598ff8  8910                 mov dword ptr [eax], edx
// 00598ffa  8b4904               mov ecx, dword ptr [ecx + 4]
// 00598ffd  894804               mov dword ptr [eax + 4], ecx
// 00599000  85c9                 test ecx, ecx
// 00599002  740c                 je 0x599010
// 00599004  83c108               add ecx, 8
// 00599007  ba01000000           mov edx, 1
// 0059900c  f00fc111             lock xadd dword ptr [ecx], edx
// 00599010  c20400               ret 4
// library templates-boost-1_34_1/deque_wp.cpp (function ??0?$weak_ptr@UT@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
