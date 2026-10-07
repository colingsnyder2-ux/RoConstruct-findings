// roc 2012-06 0056bf40  unit: RBX::Network::IdSerializer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056bf40
//
// 0056bf40  8bc1                 mov eax, ecx
// 0056bf42  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056bf46  8b11                 mov edx, dword ptr [ecx]
// 0056bf48  8910                 mov dword ptr [eax], edx
// 0056bf4a  8b5104               mov edx, dword ptr [ecx + 4]
// 0056bf4d  895004               mov dword ptr [eax + 4], edx
// 0056bf50  8b4908               mov ecx, dword ptr [ecx + 8]
// 0056bf53  894808               mov dword ptr [eax + 8], ecx
// 0056bf56  85c9                 test ecx, ecx
// 0056bf58  740c                 je 0x56bf66
// 0056bf5a  83c104               add ecx, 4
// 0056bf5d  ba01000000           mov edx, 1
// 0056bf62  f00fc111             lock xadd dword ptr [ecx], edx
// 0056bf66  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0stored_group@detail@signals@boost@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
