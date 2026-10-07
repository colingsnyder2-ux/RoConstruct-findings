// roc 2008-06 00571380  unit: RBX::Reflection::ClassDescriptor  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00571380
//
// 00571380  8b4140               mov eax, dword ptr [ecx + 0x40]
// 00571383  8b09                 mov ecx, dword ptr [ecx]
// 00571385  8b10                 mov edx, dword ptr [eax]
// 00571387  56                   push esi
// 00571388  8b742408             mov esi, dword ptr [esp + 8]
// 0057138c  89460c               mov dword ptr [esi + 0xc], eax
// 0057138f  33c0                 xor eax, eax
// 00571391  890e                 mov dword ptr [esi], ecx
// 00571393  894e08               mov dword ptr [esi + 8], ecx
// 00571396  895604               mov dword ptr [esi + 4], edx
// 00571399  894610               mov dword ptr [esi + 0x10], eax
// 0057139c  894614               mov dword ptr [esi + 0x14], eax
// 0057139f  8bce                 mov ecx, esi
// 005713a1  884618               mov byte ptr [esi + 0x18], al
// 005713a4  e83795e9ff           call 0x40a8e0
// 005713a9  8bc6                 mov eax, esi
// 005713ab  5e                   pop esi
// 005713ac  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?begin@named_slot_map@detail@signals@boost@@QAE?AVnamed_slot_map_iterator@234@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
