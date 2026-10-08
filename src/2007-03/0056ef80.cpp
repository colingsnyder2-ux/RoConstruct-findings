// roc 2007-03 0056ef80  unit: seg_00560000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056ef80
//
// 0056ef80  83ec10               sub esp, 0x10
// 0056ef83  8b542418             mov edx, dword ptr [esp + 0x18]
// 0056ef87  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056ef8a  8b01                 mov eax, dword ptr [ecx]
// 0056ef8c  8b4004               mov eax, dword ptr [eax + 4]
// 0056ef8f  56                   push esi
// 0056ef90  52                   push edx
// 0056ef91  8d54240c             lea edx, [esp + 0xc]
// 0056ef95  52                   push edx
// 0056ef96  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056ef9e  ffd0                 call eax
// 0056efa0  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056efa4  8d4c2408             lea ecx, [esp + 8]
// 0056efa8  51                   push ecx
// 0056efa9  56                   push esi
// 0056efaa  e8f18b0100           call 0x587ba0
// 0056efaf  83c408               add esp, 8
// 0056efb2  8bc6                 mov eax, esi
// 0056efb4  5e                   pop esi
// 0056efb5  83c410               add esp, 0x10
// 0056efb8  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
