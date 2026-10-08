// roc 2007-03 004a9100  unit: seg_004a0000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a9100
//
// 004a9100  8b4108               mov eax, dword ptr [ecx + 8]
// 004a9103  83ec08               sub esp, 8
// 004a9106  56                   push esi
// 004a9107  8d7104               lea esi, [ecx + 4]
// 004a910a  8b08                 mov ecx, dword ptr [eax]
// 004a910c  50                   push eax
// 004a910d  56                   push esi
// 004a910e  51                   push ecx
// 004a910f  56                   push esi
// 004a9110  8d442414             lea eax, [esp + 0x14]
// 004a9114  50                   push eax
// 004a9115  8bce                 mov ecx, esi
// 004a9117  e824feffff           call 0x4a8f40
// 004a911c  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a911f  51                   push ecx
// 004a9120  e8cb4f1700           call 0x61e0f0
// 004a9125  83c404               add esp, 4
// 004a9128  33c0                 xor eax, eax
// 004a912a  894604               mov dword ptr [esi + 4], eax
// 004a912d  894608               mov dword ptr [esi + 8], eax
// 004a9130  5e                   pop esi
// 004a9131  83c408               add esp, 8
// 004a9134  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??1XmlWriter@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
