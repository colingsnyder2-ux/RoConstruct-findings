// roc 2008-06 00570c50  unit: RBX::Reflection::ClassDescriptor  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00570c50
//
// 00570c50  6aff                 push -1
// 00570c52  6878017d00           push 0x7d0178
// 00570c57  64a100000000         mov eax, dword ptr fs:[0]
// 00570c5d  50                   push eax
// 00570c5e  64892500000000       mov dword ptr fs:[0], esp
// 00570c65  51                   push ecx
// 00570c66  8b442414             mov eax, dword ptr [esp + 0x14]
// 00570c6a  56                   push esi
// 00570c6b  8bf1                 mov esi, ecx
// 00570c6d  50                   push eax
// 00570c6e  89742408             mov dword ptr [esp + 8], esi
// 00570c72  e879440200           call 0x5950f0
// 00570c77  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00570c7b  8b09                 mov ecx, dword ptr [ecx]
// 00570c7d  33c0                 xor eax, eax
// 00570c7f  89442410             mov dword ptr [esp + 0x10], eax
// 00570c83  3bc8                 cmp ecx, eax
// 00570c85  7407                 je 0x570c8e
// 00570c87  8b11                 mov edx, dword ptr [ecx]
// 00570c89  8b4208               mov eax, dword ptr [edx + 8]
// 00570c8c  ffd0                 call eax
// 00570c8e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00570c92  894610               mov dword ptr [esi + 0x10], eax
// 00570c95  8bc6                 mov eax, esi
// 00570c97  5e                   pop esi
// 00570c98  64890d00000000       mov dword ptr fs:[0], ecx
// 00570c9f  83c410               add esp, 0x10
// 00570ca2  c20800               ret 8
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0connection_slot_pair@detail@signals@boost@@QAE@ABVconnection@23@ABVany@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
