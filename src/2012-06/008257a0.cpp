// roc 2012-06 008257a0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008257a0
//
// 008257a0  51                   push ecx
// 008257a1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008257a5  56                   push esi
// 008257a6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008257aa  50                   push eax
// 008257ab  56                   push esi
// 008257ac  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008257b4  e80766d0ff           call 0x52bdc0
// 008257b9  8bc6                 mov eax, esi
// 008257bb  5e                   pop esi
// 008257bc  59                   pop ecx
// 008257bd  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
