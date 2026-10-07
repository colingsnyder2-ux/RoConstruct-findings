// roc 2007-08 004b6320  unit: RBX::Network::Replicator  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b6320
//
// 004b6320  8b4108               mov eax, dword ptr [ecx + 8]
// 004b6323  83ec08               sub esp, 8
// 004b6326  56                   push esi
// 004b6327  8d7104               lea esi, [ecx + 4]
// 004b632a  8b08                 mov ecx, dword ptr [eax]
// 004b632c  50                   push eax
// 004b632d  56                   push esi
// 004b632e  51                   push ecx
// 004b632f  56                   push esi
// 004b6330  8d442414             lea eax, [esp + 0x14]
// 004b6334  50                   push eax
// 004b6335  8bce                 mov ecx, esi
// 004b6337  e8a4fcffff           call 0x4b5fe0
// 004b633c  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b633f  51                   push ecx
// 004b6340  e81d991700           call 0x62fc62
// 004b6345  83c404               add esp, 4
// 004b6348  33c0                 xor eax, eax
// 004b634a  894604               mov dword ptr [esi + 4], eax
// 004b634d  894608               mov dword ptr [esi + 8], eax
// 004b6350  5e                   pop esi
// 004b6351  83c408               add esp, 8
// 004b6354  c3                   ret 
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ??1?$w32_regex_traits_char_layer@G@re_detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
