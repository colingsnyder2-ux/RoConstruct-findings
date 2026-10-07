// roc 2010-06 00409790  unit: VAuthoringSettings::?$FactoryProduct  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00409790
//
// 00409790  8b442404             mov eax, dword ptr [esp + 4]
// 00409794  56                   push esi
// 00409795  8bf1                 mov esi, ecx
// 00409797  8b08                 mov ecx, dword ptr [eax]
// 00409799  890e                 mov dword ptr [esi], ecx
// 0040979b  8b4804               mov ecx, dword ptr [eax + 4]
// 0040979e  85c9                 test ecx, ecx
// 004097a0  7410                 je 0x4097b2
// 004097a2  8b11                 mov edx, dword ptr [ecx]
// 004097a4  8b4208               mov eax, dword ptr [edx + 8]
// 004097a7  ffd0                 call eax
// 004097a9  894604               mov dword ptr [esi + 4], eax
// 004097ac  8bc6                 mov eax, esi
// 004097ae  5e                   pop esi
// 004097af  c20400               ret 4
// 004097b2  33c0                 xor eax, eax
// 004097b4  894604               mov dword ptr [esi + 4], eax
// 004097b7  8bc6                 mov eax, esi
// 004097b9  5e                   pop esi
// 004097ba  c20400               ret 4
// library rbxgs/reflection\type.cpp (function ??0Value@Reflection@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
