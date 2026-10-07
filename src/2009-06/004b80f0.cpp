// roc 2009-06 004b80f0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b80f0
//
// 004b80f0  56                   push esi
// 004b80f1  8b7108               mov esi, dword ptr [ecx + 8]
// 004b80f4  85f6                 test esi, esi
// 004b80f6  742b                 je 0x4b8123
// 004b80f8  8d4604               lea eax, [esi + 4]
// 004b80fb  83c9ff               or ecx, 0xffffffff
// 004b80fe  f00fc108             lock xadd dword ptr [eax], ecx
// 004b8102  751f                 jne 0x4b8123
// 004b8104  8b16                 mov edx, dword ptr [esi]
// 004b8106  8b4204               mov eax, dword ptr [edx + 4]
// 004b8109  8bce                 mov ecx, esi
// 004b810b  ffd0                 call eax
// 004b810d  8d4e08               lea ecx, [esi + 8]
// 004b8110  83caff               or edx, 0xffffffff
// 004b8113  f00fc111             lock xadd dword ptr [ecx], edx
// 004b8117  750a                 jne 0x4b8123
// 004b8119  8b06                 mov eax, dword ptr [esi]
// 004b811b  8b5008               mov edx, dword ptr [eax + 8]
// 004b811e  8bce                 mov ecx, esi
// 004b8120  5e                   pop esi
// 004b8121  ffe2                 jmp edx
// 004b8123  5e                   pop esi
// 004b8124  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??1stored_group@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
