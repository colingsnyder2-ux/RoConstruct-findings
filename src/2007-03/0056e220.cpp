// roc 2007-03 0056e220  unit: seg_00560000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056e220
//
// 0056e220  51                   push ecx
// 0056e221  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e224  8b01                 mov eax, dword ptr [ecx]
// 0056e226  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056e22a  8b4004               mov eax, dword ptr [eax + 4]
// 0056e22d  56                   push esi
// 0056e22e  52                   push edx
// 0056e22f  c744240800000000     mov dword ptr [esp + 8], 0
// 0056e237  ffd0                 call eax
// 0056e239  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056e23d  8d4c2410             lea ecx, [esp + 0x10]
// 0056e241  51                   push ecx
// 0056e242  56                   push esi
// 0056e243  89442418             mov dword ptr [esp + 0x18], eax
// 0056e247  e884130100           call 0x57f5d0
// 0056e24c  83c408               add esp, 8
// 0056e24f  8bc6                 mov eax, esi
// 0056e251  5e                   pop esi
// 0056e252  59                   pop ecx
// 0056e253  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@H@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
