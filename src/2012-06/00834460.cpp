// roc 2012-06 00834460  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00834460
//
// 00834460  8bc1                 mov eax, ecx
// 00834462  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00834466  8b11                 mov edx, dword ptr [ecx]
// 00834468  8910                 mov dword ptr [eax], edx
// 0083446a  8b5104               mov edx, dword ptr [ecx + 4]
// 0083446d  895004               mov dword ptr [eax + 4], edx
// 00834470  8b4908               mov ecx, dword ptr [ecx + 8]
// 00834473  894808               mov dword ptr [eax + 8], ecx
// 00834476  85c9                 test ecx, ecx
// 00834478  740c                 je 0x834486
// 0083447a  83c108               add ecx, 8
// 0083447d  ba01000000           mov edx, 1
// 00834482  f00fc111             lock xadd dword ptr [ecx], edx
// 00834486  c20400               ret 4
// library templates-boost-1_34_1/map_int_wp.cpp (function ??0?$pair@$$CBHV?$weak_ptr@UT@@@boost@@@std@@QAE@ABU01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_wp.cpp
