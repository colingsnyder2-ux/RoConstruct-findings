// roc 2007-03 004978c0  unit: seg_00490000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004978c0
//
// 004978c0  80791000             cmp byte ptr [ecx + 0x10], 0
// 004978c4  7413                 je 0x4978d9
// 004978c6  81790400080000       cmp dword ptr [ecx + 4], 0x800
// 004978cd  7e0a                 jle 0x4978d9
// 004978cf  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004978d2  50                   push eax
// 004978d3  e8c2751800           call 0x61ee9a
// 004978d8  59                   pop ecx
// 004978d9  c3                   ret 
// library rbxgs-raknet/BitStream.cpp (function ??1BitStream@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
