// roc 2007-08 0056e730  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056e730
//
// 0056e730  51                   push ecx
// 0056e731  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056e735  56                   push esi
// 0056e736  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056e73a  50                   push eax
// 0056e73b  56                   push esi
// 0056e73c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056e744  e837130500           call 0x5bfa80
// 0056e749  8bc6                 mov eax, esi
// 0056e74b  5e                   pop esi
// 0056e74c  59                   pop ecx
// 0056e74d  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
