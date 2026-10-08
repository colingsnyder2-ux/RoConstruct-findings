// from server: 100% by auto
// roc 2008-06 00570d10  unit: RBX::Reflection::ClassDescriptor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00570d10
//
// 00570d10  8bc1                 mov eax, ecx
// 00570d12  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00570d16  8b11                 mov edx, dword ptr [ecx]
// 00570d18  8910                 mov dword ptr [eax], edx
// 00570d1a  8b5104               mov edx, dword ptr [ecx + 4]
// 00570d1d  895004               mov dword ptr [eax + 4], edx
// 00570d20  8b4908               mov ecx, dword ptr [ecx + 8]
// 00570d23  894808               mov dword ptr [eax + 8], ecx
// 00570d26  85c9                 test ecx, ecx
// 00570d28  740c                 je 0x570d36
// 00570d2a  83c104               add ecx, 4
// 00570d2d  ba01000000           mov edx, 1
// 00570d32  f00fc111             lock xadd dword ptr [ecx], edx
// 00570d36  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0stored_group@detail@signals@boost@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
