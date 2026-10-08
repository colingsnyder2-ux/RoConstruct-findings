// roc 2008-06 005eecf0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eecf0
//
// 005eecf0  51                   push ecx
// 005eecf1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005eecf5  56                   push esi
// 005eecf6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005eecfa  50                   push eax
// 005eecfb  56                   push esi
// 005eecfc  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eed04  e87727eaff           call 0x491480
// 005eed09  8bc6                 mov eax, esi
// 005eed0b  5e                   pop esi
// 005eed0c  59                   pop ecx
// 005eed0d  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
