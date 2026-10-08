// roc 2007-03 00411ab0  unit: seg_00410000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00411ab0
//
// 00411ab0  8b4108               mov eax, dword ptr [ecx + 8]
// 00411ab3  83ec08               sub esp, 8
// 00411ab6  56                   push esi
// 00411ab7  8d7104               lea esi, [ecx + 4]
// 00411aba  8b08                 mov ecx, dword ptr [eax]
// 00411abc  50                   push eax
// 00411abd  56                   push esi
// 00411abe  51                   push ecx
// 00411abf  56                   push esi
// 00411ac0  8d442414             lea eax, [esp + 0x14]
// 00411ac4  50                   push eax
// 00411ac5  8bce                 mov ecx, esi
// 00411ac7  e8c4f6ffff           call 0x411190
// 00411acc  8b4e04               mov ecx, dword ptr [esi + 4]
// 00411acf  51                   push ecx
// 00411ad0  e81bc62000           call 0x61e0f0
// 00411ad5  83c404               add esp, 4
// 00411ad8  33c0                 xor eax, eax
// 00411ada  894604               mov dword ptr [esi + 4], eax
// 00411add  894608               mov dword ptr [esi + 8], eax
// 00411ae0  5e                   pop esi
// 00411ae1  83c408               add esp, 8
// 00411ae4  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??1XmlWriter@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
