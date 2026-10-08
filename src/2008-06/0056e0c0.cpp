// roc 2008-06 0056e0c0  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056e0c0
//
// 0056e0c0  51                   push ecx
// 0056e0c1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056e0c5  56                   push esi
// 0056e0c6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056e0ca  50                   push eax
// 0056e0cb  56                   push esi
// 0056e0cc  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056e0d4  e8d7c60a00           call 0x61a7b0
// 0056e0d9  8bc6                 mov eax, esi
// 0056e0db  5e                   pop esi
// 0056e0dc  59                   pop ecx
// 0056e0dd  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
