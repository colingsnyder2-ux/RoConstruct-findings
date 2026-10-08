// from server: 100% by auto
// roc 2010-06 007246a0  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007246a0
//
// 007246a0  56                   push esi
// 007246a1  8b7108               mov esi, dword ptr [ecx + 8]
// 007246a4  85f6                 test esi, esi
// 007246a6  742b                 je 0x7246d3
// 007246a8  8d4604               lea eax, [esi + 4]
// 007246ab  83c9ff               or ecx, 0xffffffff
// 007246ae  f00fc108             lock xadd dword ptr [eax], ecx
// 007246b2  751f                 jne 0x7246d3
// 007246b4  8b16                 mov edx, dword ptr [esi]
// 007246b6  8b4204               mov eax, dword ptr [edx + 4]
// 007246b9  8bce                 mov ecx, esi
// 007246bb  ffd0                 call eax
// 007246bd  8d4e08               lea ecx, [esi + 8]
// 007246c0  83caff               or edx, 0xffffffff
// 007246c3  f00fc111             lock xadd dword ptr [ecx], edx
// 007246c7  750a                 jne 0x7246d3
// 007246c9  8b06                 mov eax, dword ptr [esi]
// 007246cb  8b5008               mov edx, dword ptr [eax + 8]
// 007246ce  8bce                 mov ecx, esi
// 007246d0  5e                   pop esi
// 007246d1  ffe2                 jmp edx
// 007246d3  5e                   pop esi
// 007246d4  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??1stored_group@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
