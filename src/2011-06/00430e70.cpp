// roc 2011-06 00430e70  unit: CMainFrame  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00430e70
//
// 00430e70  8bc1                 mov eax, ecx
// 00430e72  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00430e76  8b11                 mov edx, dword ptr [ecx]
// 00430e78  8910                 mov dword ptr [eax], edx
// 00430e7a  8b4904               mov ecx, dword ptr [ecx + 4]
// 00430e7d  894804               mov dword ptr [eax + 4], ecx
// 00430e80  85c9                 test ecx, ecx
// 00430e82  740c                 je 0x430e90
// 00430e84  83c108               add ecx, 8
// 00430e87  ba01000000           mov edx, 1
// 00430e8c  f00fc111             lock xadd dword ptr [ecx], edx
// 00430e90  c20400               ret 4
// library templates-boost-1_34_1/deque_wp.cpp (function ??0?$weak_ptr@UT@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
