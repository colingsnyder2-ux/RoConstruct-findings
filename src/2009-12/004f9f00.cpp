// roc 2009-12 004f9f00  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f9f00
//
// 004f9f00  56                   push esi
// 004f9f01  8b7108               mov esi, dword ptr [ecx + 8]
// 004f9f04  85f6                 test esi, esi
// 004f9f06  742b                 je 0x4f9f33
// 004f9f08  8d4604               lea eax, [esi + 4]
// 004f9f0b  83c9ff               or ecx, 0xffffffff
// 004f9f0e  f00fc108             lock xadd dword ptr [eax], ecx
// 004f9f12  751f                 jne 0x4f9f33
// 004f9f14  8b16                 mov edx, dword ptr [esi]
// 004f9f16  8b4204               mov eax, dword ptr [edx + 4]
// 004f9f19  8bce                 mov ecx, esi
// 004f9f1b  ffd0                 call eax
// 004f9f1d  8d4e08               lea ecx, [esi + 8]
// 004f9f20  83caff               or edx, 0xffffffff
// 004f9f23  f00fc111             lock xadd dword ptr [ecx], edx
// 004f9f27  750a                 jne 0x4f9f33
// 004f9f29  8b06                 mov eax, dword ptr [esi]
// 004f9f2b  8b5008               mov edx, dword ptr [eax + 8]
// 004f9f2e  8bce                 mov ecx, esi
// 004f9f30  5e                   pop esi
// 004f9f31  ffe2                 jmp edx
// 004f9f33  5e                   pop esi
// 004f9f34  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??1stored_group@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
