// roc 2007-03 0056e1a0  unit: seg_00560000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056e1a0
//
// 0056e1a0  51                   push ecx
// 0056e1a1  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e1a4  8b01                 mov eax, dword ptr [ecx]
// 0056e1a6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056e1aa  8b4004               mov eax, dword ptr [eax + 4]
// 0056e1ad  56                   push esi
// 0056e1ae  52                   push edx
// 0056e1af  c744240800000000     mov dword ptr [esp + 8], 0
// 0056e1b7  ffd0                 call eax
// 0056e1b9  d95c2410             fstp dword ptr [esp + 0x10]
// 0056e1bd  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056e1c1  8d4c2410             lea ecx, [esp + 0x10]
// 0056e1c5  51                   push ecx
// 0056e1c6  56                   push esi
// 0056e1c7  e854150100           call 0x57f720
// 0056e1cc  83c408               add esp, 8
// 0056e1cf  8bc6                 mov eax, esi
// 0056e1d1  5e                   pop esi
// 0056e1d2  59                   pop ecx
// 0056e1d3  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@M@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
