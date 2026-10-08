// roc 2007-08 0056ec80  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056ec80
//
// 0056ec80  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056ec83  8b01                 mov eax, dword ptr [ecx]
// 0056ec85  8b542404             mov edx, dword ptr [esp + 4]
// 0056ec89  8b4004               mov eax, dword ptr [eax + 4]
// 0056ec8c  56                   push esi
// 0056ec8d  52                   push edx
// 0056ec8e  ffd0                 call eax
// 0056ec90  d95c2408             fstp dword ptr [esp + 8]
// 0056ec94  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056ec98  83c60c               add esi, 0xc
// 0056ec9b  8bce                 mov ecx, esi
// 0056ec9d  e82ee7feff           call 0x55d3d0
// 0056eca2  d9442408             fld dword ptr [esp + 8]
// 0056eca6  d95e08               fstp dword ptr [esi + 8]
// 0056eca9  c7460407000000       mov dword ptr [esi + 4], 7
// 0056ecb0  5e                   pop esi
// 0056ecb1  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?writeValue@?$TypedPropertyDescriptor@M@Reflection@RBX@@EBEXPBVDescribedBase@23@PAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
