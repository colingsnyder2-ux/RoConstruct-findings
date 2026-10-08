// roc 2009-12 00533ea0  unit: RBX::Network::IdSerializer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00533ea0
//
// 00533ea0  8bc1                 mov eax, ecx
// 00533ea2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00533ea6  8b11                 mov edx, dword ptr [ecx]
// 00533ea8  8910                 mov dword ptr [eax], edx
// 00533eaa  8b5104               mov edx, dword ptr [ecx + 4]
// 00533ead  895004               mov dword ptr [eax + 4], edx
// 00533eb0  8b4908               mov ecx, dword ptr [ecx + 8]
// 00533eb3  894808               mov dword ptr [eax + 8], ecx
// 00533eb6  85c9                 test ecx, ecx
// 00533eb8  740c                 je 0x533ec6
// 00533eba  83c104               add ecx, 4
// 00533ebd  ba01000000           mov edx, 1
// 00533ec2  f00fc111             lock xadd dword ptr [ecx], edx
// 00533ec6  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0stored_group@detail@signals@boost@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
