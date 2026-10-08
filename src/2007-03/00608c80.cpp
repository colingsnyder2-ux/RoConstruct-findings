// roc 2007-03 00608c80  unit: seg_00600000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00608c80
//
// 00608c80  8b4108               mov eax, dword ptr [ecx + 8]
// 00608c83  83ec08               sub esp, 8
// 00608c86  56                   push esi
// 00608c87  8d7104               lea esi, [ecx + 4]
// 00608c8a  8b08                 mov ecx, dword ptr [eax]
// 00608c8c  50                   push eax
// 00608c8d  56                   push esi
// 00608c8e  51                   push ecx
// 00608c8f  56                   push esi
// 00608c90  8d442414             lea eax, [esp + 0x14]
// 00608c94  50                   push eax
// 00608c95  8bce                 mov ecx, esi
// 00608c97  e864fbffff           call 0x608800
// 00608c9c  8b4e04               mov ecx, dword ptr [esi + 4]
// 00608c9f  51                   push ecx
// 00608ca0  e84b540100           call 0x61e0f0
// 00608ca5  83c404               add esp, 4
// 00608ca8  33c0                 xor eax, eax
// 00608caa  894604               mov dword ptr [esi + 4], eax
// 00608cad  894608               mov dword ptr [esi + 8], eax
// 00608cb0  5e                   pop esi
// 00608cb1  83c408               add esp, 8
// 00608cb4  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??1XmlWriter@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
