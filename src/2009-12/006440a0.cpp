// roc 2009-12 006440a0  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006440a0
//
// 006440a0  51                   push ecx
// 006440a1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006440a5  56                   push esi
// 006440a6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006440aa  50                   push eax
// 006440ab  56                   push esi
// 006440ac  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006440b4  e827e2dfff           call 0x4422e0
// 006440b9  8bc6                 mov eax, esi
// 006440bb  5e                   pop esi
// 006440bc  59                   pop ecx
// 006440bd  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
