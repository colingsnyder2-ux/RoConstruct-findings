// roc 2009-06 004b38b0  unit: G3D::GWindow  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b38b0
//
// 004b38b0  8bc1                 mov eax, ecx
// 004b38b2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b38b6  8b11                 mov edx, dword ptr [ecx]
// 004b38b8  8910                 mov dword ptr [eax], edx
// 004b38ba  8b4904               mov ecx, dword ptr [ecx + 4]
// 004b38bd  894804               mov dword ptr [eax + 4], ecx
// 004b38c0  85c9                 test ecx, ecx
// 004b38c2  740c                 je 0x4b38d0
// 004b38c4  83c108               add ecx, 8
// 004b38c7  ba01000000           mov edx, 1
// 004b38cc  f00fc111             lock xadd dword ptr [ecx], edx
// 004b38d0  c20400               ret 4
// library templates-boost-1_34_1/deque_wp.cpp (function ??0?$weak_ptr@UT@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
