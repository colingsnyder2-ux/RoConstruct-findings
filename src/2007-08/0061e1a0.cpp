// roc 2007-08 0061e1a0  unit: RBX::ScoreHud  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061e1a0
//
// 0061e1a0  8b4108               mov eax, dword ptr [ecx + 8]
// 0061e1a3  83ec08               sub esp, 8
// 0061e1a6  56                   push esi
// 0061e1a7  8d7104               lea esi, [ecx + 4]
// 0061e1aa  8b08                 mov ecx, dword ptr [eax]
// 0061e1ac  50                   push eax
// 0061e1ad  56                   push esi
// 0061e1ae  51                   push ecx
// 0061e1af  56                   push esi
// 0061e1b0  8d442414             lea eax, [esp + 0x14]
// 0061e1b4  50                   push eax
// 0061e1b5  8bce                 mov ecx, esi
// 0061e1b7  e8a452f2ff           call 0x543460
// 0061e1bc  8b4e04               mov ecx, dword ptr [esi + 4]
// 0061e1bf  51                   push ecx
// 0061e1c0  e89d1a0100           call 0x62fc62
// 0061e1c5  83c404               add esp, 4
// 0061e1c8  33c0                 xor eax, eax
// 0061e1ca  894604               mov dword ptr [esi + 4], eax
// 0061e1cd  894608               mov dword ptr [esi + 8], eax
// 0061e1d0  5e                   pop esi
// 0061e1d1  83c408               add esp, 8
// 0061e1d4  c3                   ret 
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ??1?$w32_regex_traits_char_layer@G@re_detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
