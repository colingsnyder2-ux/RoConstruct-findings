// roc 2007-03 0056f1c0  unit: seg_00560000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056f1c0
//
// 0056f1c0  8b542404             mov edx, dword ptr [esp + 4]
// 0056f1c4  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056f1c7  8b01                 mov eax, dword ptr [ecx]
// 0056f1c9  8b4004               mov eax, dword ptr [eax + 4]
// 0056f1cc  56                   push esi
// 0056f1cd  57                   push edi
// 0056f1ce  52                   push edx
// 0056f1cf  8d542410             lea edx, [esp + 0x10]
// 0056f1d3  52                   push edx
// 0056f1d4  ffd0                 call eax
// 0056f1d6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056f1da  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0056f1de  83c60c               add esi, 0xc
// 0056f1e1  8bce                 mov ecx, esi
// 0056f1e3  e8d8fcfeff           call 0x55eec0
// 0056f1e8  897e08               mov dword ptr [esi + 8], edi
// 0056f1eb  5f                   pop edi
// 0056f1ec  c7460405000000       mov dword ptr [esi + 4], 5
// 0056f1f3  5e                   pop esi
// 0056f1f4  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?writeValue@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@EBEXPBVDescribedBase@23@PAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
