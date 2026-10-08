// roc 2007-03 0049d650  unit: seg_00490000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049d650
//
// 0049d650  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0049d653  8b542408             mov edx, dword ptr [esp + 8]
// 0049d657  8b01                 mov eax, dword ptr [ecx]
// 0049d659  8b4004               mov eax, dword ptr [eax + 4]
// 0049d65c  56                   push esi
// 0049d65d  8b742408             mov esi, dword ptr [esp + 8]
// 0049d661  52                   push edx
// 0049d662  56                   push esi
// 0049d663  ffd0                 call eax
// 0049d665  8bc6                 mov eax, esi
// 0049d667  5e                   pop esi
// 0049d668  c20800               ret 8
// library rbxgs/v8datamodel\FlagStand.cpp (function ?getValue@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@QBE?AVBrickColor@3@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
