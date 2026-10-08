// from server: 100% by auto
// roc 2010-06 004e21f0  unit: RBX::Network::IdSerializer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e21f0
//
// 004e21f0  8bc1                 mov eax, ecx
// 004e21f2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e21f6  8b11                 mov edx, dword ptr [ecx]
// 004e21f8  8910                 mov dword ptr [eax], edx
// 004e21fa  8b5104               mov edx, dword ptr [ecx + 4]
// 004e21fd  895004               mov dword ptr [eax + 4], edx
// 004e2200  8b4908               mov ecx, dword ptr [ecx + 8]
// 004e2203  894808               mov dword ptr [eax + 8], ecx
// 004e2206  85c9                 test ecx, ecx
// 004e2208  740c                 je 0x4e2216
// 004e220a  83c104               add ecx, 4
// 004e220d  ba01000000           mov edx, 1
// 004e2212  f00fc111             lock xadd dword ptr [ecx], edx
// 004e2216  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0stored_group@detail@signals@boost@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
