// roc 2007-08 0056e7f0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056e7f0
//
// 0056e7f0  51                   push ecx
// 0056e7f1  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e7f4  8b01                 mov eax, dword ptr [ecx]
// 0056e7f6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056e7fa  8b4004               mov eax, dword ptr [eax + 4]
// 0056e7fd  56                   push esi
// 0056e7fe  52                   push edx
// 0056e7ff  c744240800000000     mov dword ptr [esp + 8], 0
// 0056e807  ffd0                 call eax
// 0056e809  d95c2410             fstp dword ptr [esp + 0x10]
// 0056e80d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056e811  8d4c2410             lea ecx, [esp + 0x10]
// 0056e815  51                   push ecx
// 0056e816  56                   push esi
// 0056e817  e8e41d0100           call 0x580600
// 0056e81c  83c408               add esp, 8
// 0056e81f  8bc6                 mov eax, esi
// 0056e821  5e                   pop esi
// 0056e822  59                   pop ecx
// 0056e823  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@M@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
