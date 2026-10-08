// from server: 100% by auto
// roc 2011-06 004f5260  unit: RBX::Network::Replicator  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f5260
//
// 004f5260  56                   push esi
// 004f5261  8b7108               mov esi, dword ptr [ecx + 8]
// 004f5264  85f6                 test esi, esi
// 004f5266  742b                 je 0x4f5293
// 004f5268  8d4604               lea eax, [esi + 4]
// 004f526b  83c9ff               or ecx, 0xffffffff
// 004f526e  f00fc108             lock xadd dword ptr [eax], ecx
// 004f5272  751f                 jne 0x4f5293
// 004f5274  8b16                 mov edx, dword ptr [esi]
// 004f5276  8b4204               mov eax, dword ptr [edx + 4]
// 004f5279  8bce                 mov ecx, esi
// 004f527b  ffd0                 call eax
// 004f527d  8d4e08               lea ecx, [esi + 8]
// 004f5280  83caff               or edx, 0xffffffff
// 004f5283  f00fc111             lock xadd dword ptr [ecx], edx
// 004f5287  750a                 jne 0x4f5293
// 004f5289  8b06                 mov eax, dword ptr [esi]
// 004f528b  8b5008               mov edx, dword ptr [eax + 8]
// 004f528e  8bce                 mov ecx, esi
// 004f5290  5e                   pop esi
// 004f5291  ffe2                 jmp edx
// 004f5293  5e                   pop esi
// 004f5294  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??1stored_group@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
