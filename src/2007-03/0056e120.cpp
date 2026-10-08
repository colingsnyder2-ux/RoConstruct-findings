// roc 2007-03 0056e120  unit: seg_00560000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056e120
//
// 0056e120  51                   push ecx
// 0056e121  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e124  8b01                 mov eax, dword ptr [ecx]
// 0056e126  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056e12a  8b4004               mov eax, dword ptr [eax + 4]
// 0056e12d  56                   push esi
// 0056e12e  52                   push edx
// 0056e12f  c744240800000000     mov dword ptr [esp + 8], 0
// 0056e137  ffd0                 call eax
// 0056e139  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056e13d  8d4c2410             lea ecx, [esp + 0x10]
// 0056e141  51                   push ecx
// 0056e142  56                   push esi
// 0056e143  88442418             mov byte ptr [esp + 0x18], al
// 0056e147  e8c4130100           call 0x57f510
// 0056e14c  83c408               add esp, 8
// 0056e14f  8bc6                 mov eax, esi
// 0056e151  5e                   pop esi
// 0056e152  59                   pop ecx
// 0056e153  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@_N@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
