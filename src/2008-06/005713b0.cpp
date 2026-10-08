// from server: 100% by auto
// roc 2008-06 005713b0  unit: RBX::Reflection::ClassDescriptor  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005713b0
//
// 005713b0  8b4140               mov eax, dword ptr [ecx + 0x40]
// 005713b3  8b09                 mov ecx, dword ptr [ecx]
// 005713b5  56                   push esi
// 005713b6  8b742408             mov esi, dword ptr [esp + 8]
// 005713ba  894604               mov dword ptr [esi + 4], eax
// 005713bd  89460c               mov dword ptr [esi + 0xc], eax
// 005713c0  33c0                 xor eax, eax
// 005713c2  890e                 mov dword ptr [esi], ecx
// 005713c4  894e08               mov dword ptr [esi + 8], ecx
// 005713c7  894610               mov dword ptr [esi + 0x10], eax
// 005713ca  894614               mov dword ptr [esi + 0x14], eax
// 005713cd  8bce                 mov ecx, esi
// 005713cf  884618               mov byte ptr [esi + 0x18], al
// 005713d2  e80995e9ff           call 0x40a8e0
// 005713d7  8bc6                 mov eax, esi
// 005713d9  5e                   pop esi
// 005713da  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?end@named_slot_map@detail@signals@boost@@QAE?AVnamed_slot_map_iterator@234@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
