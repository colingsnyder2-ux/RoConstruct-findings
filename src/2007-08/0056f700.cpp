// roc 2007-08 0056f700  unit: G3D::VColor3::?$TypedPropertyDescriptor  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056f700
//
// 0056f700  83ec10               sub esp, 0x10
// 0056f703  8b542418             mov edx, dword ptr [esp + 0x18]
// 0056f707  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056f70a  8b01                 mov eax, dword ptr [ecx]
// 0056f70c  8b4004               mov eax, dword ptr [eax + 4]
// 0056f70f  56                   push esi
// 0056f710  52                   push edx
// 0056f711  8d54240c             lea edx, [esp + 0xc]
// 0056f715  52                   push edx
// 0056f716  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056f71e  ffd0                 call eax
// 0056f720  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056f724  8d4c2408             lea ecx, [esp + 8]
// 0056f728  51                   push ecx
// 0056f729  56                   push esi
// 0056f72a  e8a1db0100           call 0x58d2d0
// 0056f72f  83c408               add esp, 8
// 0056f732  8bc6                 mov eax, esi
// 0056f734  5e                   pop esi
// 0056f735  83c410               add esp, 0x10
// 0056f738  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
