// roc 2007-08 004a7af0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a7af0
//
// 004a7af0  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 004a7af3  8b542408             mov edx, dword ptr [esp + 8]
// 004a7af7  8b01                 mov eax, dword ptr [ecx]
// 004a7af9  8b4004               mov eax, dword ptr [eax + 4]
// 004a7afc  56                   push esi
// 004a7afd  8b742408             mov esi, dword ptr [esp + 8]
// 004a7b01  52                   push edx
// 004a7b02  56                   push esi
// 004a7b03  ffd0                 call eax
// 004a7b05  8bc6                 mov eax, esi
// 004a7b07  5e                   pop esi
// 004a7b08  c20800               ret 8
// library rbxgs/v8datamodel\FlagStand.cpp (function ?getValue@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@QBE?AVBrickColor@3@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
