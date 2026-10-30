// from server: 100% by auto
// roc 2010-06 004a32a0  unit: seg_004a0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a32a0
//
// 004a32a0  8bc1                 mov eax, ecx
// 004a32a2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a32a6  8b11                 mov edx, dword ptr [ecx]
// 004a32a8  8910                 mov dword ptr [eax], edx
// 004a32aa  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a32ad  894804               mov dword ptr [eax + 4], ecx
// 004a32b0  85c9                 test ecx, ecx
// 004a32b2  740c                 je 0x4a32c0
// 004a32b4  83c108               add ecx, 8
// 004a32b7  ba01000000           mov edx, 1
// 004a32bc  f00fc111             lock xadd dword ptr [ecx], edx
// 004a32c0  c20400               ret 4
// library templates-boost-1_34_1/deque_wp.cpp (function ??0?$weak_ptr@UT@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
