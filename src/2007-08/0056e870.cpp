// roc 2007-08 0056e870  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056e870
//
// 0056e870  51                   push ecx
// 0056e871  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e874  8b01                 mov eax, dword ptr [ecx]
// 0056e876  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056e87a  8b4004               mov eax, dword ptr [eax + 4]
// 0056e87d  56                   push esi
// 0056e87e  52                   push edx
// 0056e87f  c744240800000000     mov dword ptr [esp + 8], 0
// 0056e887  ffd0                 call eax
// 0056e889  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056e88d  8d4c2410             lea ecx, [esp + 0x10]
// 0056e891  51                   push ecx
// 0056e892  56                   push esi
// 0056e893  89442418             mov dword ptr [esp + 0x18], eax
// 0056e897  e8141c0100           call 0x5804b0
// 0056e89c  83c408               add esp, 8
// 0056e89f  8bc6                 mov eax, esi
// 0056e8a1  5e                   pop esi
// 0056e8a2  59                   pop ecx
// 0056e8a3  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@H@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
