// roc 2012-06 006c08e0  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006c08e0
//
// 006c08e0  51                   push ecx
// 006c08e1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c08e5  56                   push esi
// 006c08e6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c08ea  50                   push eax
// 006c08eb  56                   push esi
// 006c08ec  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006c08f4  e8970b0d00           call 0x791490
// 006c08f9  8bc6                 mov eax, esi
// 006c08fb  5e                   pop esi
// 006c08fc  59                   pop ecx
// 006c08fd  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
