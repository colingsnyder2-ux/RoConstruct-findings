// roc 2007-03 0056f100  unit: seg_00560000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056f100
//
// 0056f100  8b542404             mov edx, dword ptr [esp + 4]
// 0056f104  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056f107  8b01                 mov eax, dword ptr [ecx]
// 0056f109  8b4004               mov eax, dword ptr [eax + 4]
// 0056f10c  83ec0c               sub esp, 0xc
// 0056f10f  56                   push esi
// 0056f110  57                   push edi
// 0056f111  52                   push edx
// 0056f112  8d54240c             lea edx, [esp + 0xc]
// 0056f116  52                   push edx
// 0056f117  ffd0                 call eax
// 0056f119  8d4c2408             lea ecx, [esp + 8]
// 0056f11d  51                   push ecx
// 0056f11e  8d4c241c             lea ecx, [esp + 0x1c]
// 0056f122  e879c8f8ff           call 0x4fb9a0
// 0056f127  0fb6742418           movzx esi, byte ptr [esp + 0x18]
// 0056f12c  0fb6542419           movzx edx, byte ptr [esp + 0x19]
// 0056f131  0fb644241a           movzx eax, byte ptr [esp + 0x1a]
// 0056f136  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0056f13a  81c600ff0000         add esi, 0xff00
// 0056f140  c1e608               shl esi, 8
// 0056f143  03f2                 add esi, edx
// 0056f145  83c70c               add edi, 0xc
// 0056f148  c1e608               shl esi, 8
// 0056f14b  8bcf                 mov ecx, edi
// 0056f14d  03f0                 add esi, eax
// 0056f14f  e86cfdfeff           call 0x55eec0
// 0056f154  897708               mov dword ptr [edi + 8], esi
// 0056f157  c7470406000000       mov dword ptr [edi + 4], 6
// 0056f15e  5f                   pop edi
// 0056f15f  5e                   pop esi
// 0056f160  83c40c               add esp, 0xc
// 0056f163  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?writeValue@?$TypedPropertyDescriptor@VColor3@G3D@@@Reflection@RBX@@EBEXPBVDescribedBase@23@PAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
