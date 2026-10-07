// roc 2009-06 004ddea0  unit: RBX::Network::IdSerializer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ddea0
//
// 004ddea0  8bc1                 mov eax, ecx
// 004ddea2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ddea6  8b11                 mov edx, dword ptr [ecx]
// 004ddea8  8910                 mov dword ptr [eax], edx
// 004ddeaa  8b5104               mov edx, dword ptr [ecx + 4]
// 004ddead  895004               mov dword ptr [eax + 4], edx
// 004ddeb0  8b4908               mov ecx, dword ptr [ecx + 8]
// 004ddeb3  894808               mov dword ptr [eax + 8], ecx
// 004ddeb6  85c9                 test ecx, ecx
// 004ddeb8  740c                 je 0x4ddec6
// 004ddeba  83c104               add ecx, 4
// 004ddebd  ba01000000           mov edx, 1
// 004ddec2  f00fc111             lock xadd dword ptr [ecx], edx
// 004ddec6  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0stored_group@detail@signals@boost@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
