// roc 2008-06 00628f80  unit: seg_00620000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628f80
//
// 00628f80  56                   push esi
// 00628f81  8b7108               mov esi, dword ptr [ecx + 8]
// 00628f84  85f6                 test esi, esi
// 00628f86  742b                 je 0x628fb3
// 00628f88  8d4604               lea eax, [esi + 4]
// 00628f8b  83c9ff               or ecx, 0xffffffff
// 00628f8e  f00fc108             lock xadd dword ptr [eax], ecx
// 00628f92  751f                 jne 0x628fb3
// 00628f94  8b16                 mov edx, dword ptr [esi]
// 00628f96  8b4204               mov eax, dword ptr [edx + 4]
// 00628f99  8bce                 mov ecx, esi
// 00628f9b  ffd0                 call eax
// 00628f9d  8d4e08               lea ecx, [esi + 8]
// 00628fa0  83caff               or edx, 0xffffffff
// 00628fa3  f00fc111             lock xadd dword ptr [ecx], edx
// 00628fa7  750a                 jne 0x628fb3
// 00628fa9  8b06                 mov eax, dword ptr [esi]
// 00628fab  8b5008               mov edx, dword ptr [eax + 8]
// 00628fae  8bce                 mov ecx, esi
// 00628fb0  5e                   pop esi
// 00628fb1  ffe2                 jmp edx
// 00628fb3  5e                   pop esi
// 00628fb4  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??1stored_group@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
