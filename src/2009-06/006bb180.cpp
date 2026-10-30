// from server: 100% by auto
// roc 2009-06 006bb180  unit: RBX::UniversalTool  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bb180
//
// 006bb180  8bc1                 mov eax, ecx
// 006bb182  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006bb186  8b11                 mov edx, dword ptr [ecx]
// 006bb188  8910                 mov dword ptr [eax], edx
// 006bb18a  8b5104               mov edx, dword ptr [ecx + 4]
// 006bb18d  895004               mov dword ptr [eax + 4], edx
// 006bb190  8b4908               mov ecx, dword ptr [ecx + 8]
// 006bb193  894808               mov dword ptr [eax + 8], ecx
// 006bb196  85c9                 test ecx, ecx
// 006bb198  740c                 je 0x6bb1a6
// 006bb19a  83c108               add ecx, 8
// 006bb19d  ba01000000           mov edx, 1
// 006bb1a2  f00fc111             lock xadd dword ptr [ecx], edx
// 006bb1a6  c20400               ret 4
// library templates-boost-1_34_1/map_int_wp.cpp (function ??0?$pair@$$CBHV?$weak_ptr@UT@@@boost@@@std@@QAE@ABU01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_wp.cpp
