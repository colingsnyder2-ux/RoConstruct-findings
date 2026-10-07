// roc 2008-06 0040a320  unit: VAuthoringSettings::?$FactoryProduct  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a320
//
// 0040a320  8b442404             mov eax, dword ptr [esp + 4]
// 0040a324  56                   push esi
// 0040a325  8bf1                 mov esi, ecx
// 0040a327  8b08                 mov ecx, dword ptr [eax]
// 0040a329  890e                 mov dword ptr [esi], ecx
// 0040a32b  8b4804               mov ecx, dword ptr [eax + 4]
// 0040a32e  85c9                 test ecx, ecx
// 0040a330  7410                 je 0x40a342
// 0040a332  8b11                 mov edx, dword ptr [ecx]
// 0040a334  8b4208               mov eax, dword ptr [edx + 8]
// 0040a337  ffd0                 call eax
// 0040a339  894604               mov dword ptr [esi + 4], eax
// 0040a33c  8bc6                 mov eax, esi
// 0040a33e  5e                   pop esi
// 0040a33f  c20400               ret 4
// 0040a342  33c0                 xor eax, eax
// 0040a344  894604               mov dword ptr [esi + 4], eax
// 0040a347  8bc6                 mov eax, esi
// 0040a349  5e                   pop esi
// 0040a34a  c20400               ret 4
// library rbxgs/reflection\type.cpp (function ??0Value@Reflection@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
