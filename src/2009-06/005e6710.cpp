// roc 2009-06 005e6710  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e6710
//
// 005e6710  51                   push ecx
// 005e6711  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e6715  56                   push esi
// 005e6716  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e671a  50                   push eax
// 005e671b  56                   push esi
// 005e671c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005e6724  e8074e0d00           call 0x6bb530
// 005e6729  8bc6                 mov eax, esi
// 005e672b  5e                   pop esi
// 005e672c  59                   pop ecx
// 005e672d  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
