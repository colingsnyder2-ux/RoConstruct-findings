// roc 2007-03 00597700  unit: seg_00590000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00597700
//
// 00597700  8b4108               mov eax, dword ptr [ecx + 8]
// 00597703  83ec08               sub esp, 8
// 00597706  56                   push esi
// 00597707  8d7104               lea esi, [ecx + 4]
// 0059770a  8b08                 mov ecx, dword ptr [eax]
// 0059770c  50                   push eax
// 0059770d  56                   push esi
// 0059770e  51                   push ecx
// 0059770f  56                   push esi
// 00597710  8d442414             lea eax, [esp + 0x14]
// 00597714  50                   push eax
// 00597715  8bce                 mov ecx, esi
// 00597717  e8f4d5ffff           call 0x594d10
// 0059771c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0059771f  51                   push ecx
// 00597720  e8cb690800           call 0x61e0f0
// 00597725  83c404               add esp, 4
// 00597728  33c0                 xor eax, eax
// 0059772a  894604               mov dword ptr [esi + 4], eax
// 0059772d  894608               mov dword ptr [esi + 8], eax
// 00597730  5e                   pop esi
// 00597731  83c408               add esp, 8
// 00597734  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??1XmlWriter@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
