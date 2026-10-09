// roc 2009-12 00641b60  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00641b60
//
// 00641b60  51                   push ecx
// 00641b61  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00641b65  56                   push esi
// 00641b66  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00641b6a  50                   push eax
// 00641b6b  56                   push esi
// 00641b6c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00641b74  e847e2ebff           call 0x4ffdc0
// 00641b79  8bc6                 mov eax, esi
// 00641b7b  5e                   pop esi
// 00641b7c  59                   pop ecx
// 00641b7d  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
