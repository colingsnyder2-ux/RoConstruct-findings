// from server: 100% by auto
// roc 2010-06 00723490  unit: RBX::UniversalTool  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00723490
//
// 00723490  8bc1                 mov eax, ecx
// 00723492  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00723496  8b11                 mov edx, dword ptr [ecx]
// 00723498  8910                 mov dword ptr [eax], edx
// 0072349a  8b5104               mov edx, dword ptr [ecx + 4]
// 0072349d  895004               mov dword ptr [eax + 4], edx
// 007234a0  8b4908               mov ecx, dword ptr [ecx + 8]
// 007234a3  894808               mov dword ptr [eax + 8], ecx
// 007234a6  85c9                 test ecx, ecx
// 007234a8  740c                 je 0x7234b6
// 007234aa  83c108               add ecx, 8
// 007234ad  ba01000000           mov edx, 1
// 007234b2  f00fc111             lock xadd dword ptr [ecx], edx
// 007234b6  c20400               ret 4
// library templates-boost-1_34_1/map_int_wp.cpp (function ??0?$pair@$$CBHV?$weak_ptr@UT@@@boost@@@std@@QAE@ABU01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_wp.cpp
