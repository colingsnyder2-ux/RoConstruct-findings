// roc 2007-08 0056f940  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056f940
//
// 0056f940  8b542404             mov edx, dword ptr [esp + 4]
// 0056f944  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056f947  8b01                 mov eax, dword ptr [ecx]
// 0056f949  8b4004               mov eax, dword ptr [eax + 4]
// 0056f94c  56                   push esi
// 0056f94d  57                   push edi
// 0056f94e  52                   push edx
// 0056f94f  8d542410             lea edx, [esp + 0x10]
// 0056f953  52                   push edx
// 0056f954  ffd0                 call eax
// 0056f956  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056f95a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0056f95e  83c60c               add esi, 0xc
// 0056f961  8bce                 mov ecx, esi
// 0056f963  e868dafeff           call 0x55d3d0
// 0056f968  897e08               mov dword ptr [esi + 8], edi
// 0056f96b  5f                   pop edi
// 0056f96c  c7460405000000       mov dword ptr [esi + 4], 5
// 0056f973  5e                   pop esi
// 0056f974  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?writeValue@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@EBEXPBVDescribedBase@23@PAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
