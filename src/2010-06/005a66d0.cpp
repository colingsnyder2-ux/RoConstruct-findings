// roc 2010-06 005a66d0  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a66d0
//
// 005a66d0  51                   push ecx
// 005a66d1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a66d5  56                   push esi
// 005a66d6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a66da  50                   push eax
// 005a66db  56                   push esi
// 005a66dc  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a66e4  e867750500           call 0x5fdc50
// 005a66e9  8bc6                 mov eax, esi
// 005a66eb  5e                   pop esi
// 005a66ec  59                   pop ecx
// 005a66ed  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
