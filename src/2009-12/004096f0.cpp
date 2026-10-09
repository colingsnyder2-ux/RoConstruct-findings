// roc 2009-12 004096f0  unit: VAuthoringSettings::?$FactoryProduct  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004096f0
//
// 004096f0  8b442404             mov eax, dword ptr [esp + 4]
// 004096f4  56                   push esi
// 004096f5  8bf1                 mov esi, ecx
// 004096f7  8b08                 mov ecx, dword ptr [eax]
// 004096f9  890e                 mov dword ptr [esi], ecx
// 004096fb  8b4804               mov ecx, dword ptr [eax + 4]
// 004096fe  85c9                 test ecx, ecx
// 00409700  7410                 je 0x409712
// 00409702  8b11                 mov edx, dword ptr [ecx]
// 00409704  8b4208               mov eax, dword ptr [edx + 8]
// 00409707  ffd0                 call eax
// 00409709  894604               mov dword ptr [esi + 4], eax
// 0040970c  8bc6                 mov eax, esi
// 0040970e  5e                   pop esi
// 0040970f  c20400               ret 4
// 00409712  33c0                 xor eax, eax
// 00409714  894604               mov dword ptr [esi + 4], eax
// 00409717  8bc6                 mov eax, esi
// 00409719  5e                   pop esi
// 0040971a  c20400               ret 4
// library rbxgs/reflection\type.cpp (function ??0Value@Reflection@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
