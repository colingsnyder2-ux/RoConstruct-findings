// from server: 100% by auto
// roc 2012-06 00470230  unit: CRobloxApp  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00470230
//
// 00470230  56                   push esi
// 00470231  8b7108               mov esi, dword ptr [ecx + 8]
// 00470234  85f6                 test esi, esi
// 00470236  742b                 je 0x470263
// 00470238  8d4604               lea eax, [esi + 4]
// 0047023b  83c9ff               or ecx, 0xffffffff
// 0047023e  f00fc108             lock xadd dword ptr [eax], ecx
// 00470242  751f                 jne 0x470263
// 00470244  8b16                 mov edx, dword ptr [esi]
// 00470246  8b4204               mov eax, dword ptr [edx + 4]
// 00470249  8bce                 mov ecx, esi
// 0047024b  ffd0                 call eax
// 0047024d  8d4e08               lea ecx, [esi + 8]
// 00470250  83caff               or edx, 0xffffffff
// 00470253  f00fc111             lock xadd dword ptr [ecx], edx
// 00470257  750a                 jne 0x470263
// 00470259  8b06                 mov eax, dword ptr [esi]
// 0047025b  8b5008               mov edx, dword ptr [eax + 8]
// 0047025e  8bce                 mov ecx, esi
// 00470260  5e                   pop esi
// 00470261  ffe2                 jmp edx
// 00470263  5e                   pop esi
// 00470264  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??1stored_group@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
