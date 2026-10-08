// roc 2007-03 0056e630  unit: seg_00560000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056e630
//
// 0056e630  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e633  8b01                 mov eax, dword ptr [ecx]
// 0056e635  8b542404             mov edx, dword ptr [esp + 4]
// 0056e639  8b4004               mov eax, dword ptr [eax + 4]
// 0056e63c  56                   push esi
// 0056e63d  52                   push edx
// 0056e63e  ffd0                 call eax
// 0056e640  d95c2408             fstp dword ptr [esp + 8]
// 0056e644  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056e648  83c60c               add esi, 0xc
// 0056e64b  8bce                 mov ecx, esi
// 0056e64d  e86e08ffff           call 0x55eec0
// 0056e652  d9442408             fld dword ptr [esp + 8]
// 0056e656  d95e08               fstp dword ptr [esi + 8]
// 0056e659  c7460407000000       mov dword ptr [esi + 4], 7
// 0056e660  5e                   pop esi
// 0056e661  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?writeValue@?$TypedPropertyDescriptor@M@Reflection@RBX@@EBEXPBVDescribedBase@23@PAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
