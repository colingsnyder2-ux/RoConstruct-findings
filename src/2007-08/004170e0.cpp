// from server: 100% by auto
// roc 2007-08 004170e0  unit: RBX::Reflection::SignalInstance  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004170e0
//
// 004170e0  56                   push esi
// 004170e1  8b7108               mov esi, dword ptr [ecx + 8]
// 004170e4  85f6                 test esi, esi
// 004170e6  742b                 je 0x417113
// 004170e8  8d4604               lea eax, [esi + 4]
// 004170eb  83c9ff               or ecx, 0xffffffff
// 004170ee  f00fc108             lock xadd dword ptr [eax], ecx
// 004170f2  751f                 jne 0x417113
// 004170f4  8b16                 mov edx, dword ptr [esi]
// 004170f6  8b4204               mov eax, dword ptr [edx + 4]
// 004170f9  8bce                 mov ecx, esi
// 004170fb  ffd0                 call eax
// 004170fd  8d4e08               lea ecx, [esi + 8]
// 00417100  83caff               or edx, 0xffffffff
// 00417103  f00fc111             lock xadd dword ptr [ecx], edx
// 00417107  750a                 jne 0x417113
// 00417109  8b06                 mov eax, dword ptr [esi]
// 0041710b  8b5008               mov edx, dword ptr [eax + 8]
// 0041710e  8bce                 mov ecx, esi
// 00417110  5e                   pop esi
// 00417111  ffe2                 jmp edx
// 00417113  5e                   pop esi
// 00417114  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??1stored_group@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
