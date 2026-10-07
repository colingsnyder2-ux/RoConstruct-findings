// roc 2009-06 004097e0  unit: VAuthoringSettings::?$FactoryProduct  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004097e0
//
// 004097e0  8b442404             mov eax, dword ptr [esp + 4]
// 004097e4  56                   push esi
// 004097e5  8bf1                 mov esi, ecx
// 004097e7  8b08                 mov ecx, dword ptr [eax]
// 004097e9  890e                 mov dword ptr [esi], ecx
// 004097eb  8b4804               mov ecx, dword ptr [eax + 4]
// 004097ee  85c9                 test ecx, ecx
// 004097f0  7410                 je 0x409802
// 004097f2  8b11                 mov edx, dword ptr [ecx]
// 004097f4  8b4208               mov eax, dword ptr [edx + 8]
// 004097f7  ffd0                 call eax
// 004097f9  894604               mov dword ptr [esi + 4], eax
// 004097fc  8bc6                 mov eax, esi
// 004097fe  5e                   pop esi
// 004097ff  c20400               ret 4
// 00409802  33c0                 xor eax, eax
// 00409804  894604               mov dword ptr [esi + 4], eax
// 00409807  8bc6                 mov eax, esi
// 00409809  5e                   pop esi
// 0040980a  c20400               ret 4
// library rbxgs/reflection\type.cpp (function ??0Value@Reflection@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
