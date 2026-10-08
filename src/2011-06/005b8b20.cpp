// roc 2011-06 005b8b20  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b8b20
//
// 005b8b20  51                   push ecx
// 005b8b21  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b8b25  56                   push esi
// 005b8b26  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b8b2a  50                   push eax
// 005b8b2b  56                   push esi
// 005b8b2c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b8b34  e80750efff           call 0x4adb40
// 005b8b39  8bc6                 mov eax, esi
// 005b8b3b  5e                   pop esi
// 005b8b3c  59                   pop ecx
// 005b8b3d  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
