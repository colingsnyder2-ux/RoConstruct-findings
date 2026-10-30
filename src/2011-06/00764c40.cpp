// from server: 100% by auto
// roc 2011-06 00764c40  unit: seg_00760000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00764c40
//
// 00764c40  8bc1                 mov eax, ecx
// 00764c42  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00764c46  8b11                 mov edx, dword ptr [ecx]
// 00764c48  8910                 mov dword ptr [eax], edx
// 00764c4a  8b5104               mov edx, dword ptr [ecx + 4]
// 00764c4d  895004               mov dword ptr [eax + 4], edx
// 00764c50  8b4908               mov ecx, dword ptr [ecx + 8]
// 00764c53  894808               mov dword ptr [eax + 8], ecx
// 00764c56  85c9                 test ecx, ecx
// 00764c58  740c                 je 0x764c66
// 00764c5a  83c108               add ecx, 8
// 00764c5d  ba01000000           mov edx, 1
// 00764c62  f00fc111             lock xadd dword ptr [ecx], edx
// 00764c66  c20400               ret 4
// library templates-boost-1_34_1/map_int_wp.cpp (function ??0?$pair@$$CBHV?$weak_ptr@UT@@@boost@@@std@@QAE@ABU01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_wp.cpp
