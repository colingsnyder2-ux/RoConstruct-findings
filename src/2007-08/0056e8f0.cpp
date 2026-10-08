// roc 2007-08 0056e8f0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056e8f0
//
// 0056e8f0  83ec10               sub esp, 0x10
// 0056e8f3  8b542418             mov edx, dword ptr [esp + 0x18]
// 0056e8f7  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e8fa  8b01                 mov eax, dword ptr [ecx]
// 0056e8fc  8b4004               mov eax, dword ptr [eax + 4]
// 0056e8ff  56                   push esi
// 0056e900  52                   push edx
// 0056e901  8d54240c             lea edx, [esp + 0xc]
// 0056e905  52                   push edx
// 0056e906  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056e90e  ffd0                 call eax
// 0056e910  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056e914  8d4c2408             lea ecx, [esp + 8]
// 0056e918  51                   push ecx
// 0056e919  56                   push esi
// 0056e91a  e8d1e60100           call 0x58cff0
// 0056e91f  83c408               add esp, 8
// 0056e922  8bc6                 mov eax, esi
// 0056e924  5e                   pop esi
// 0056e925  83c410               add esp, 0x10
// 0056e928  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
