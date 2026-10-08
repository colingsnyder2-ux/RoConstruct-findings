// roc 2012-06 0056fe40  unit: RBX::Network::IdSerializer  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056fe40
//
// 0056fe40  51                   push ecx
// 0056fe41  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056fe45  56                   push esi
// 0056fe46  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056fe4a  50                   push eax
// 0056fe4b  56                   push esi
// 0056fe4c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056fe54  e8f7b61b00           call 0x72b550
// 0056fe59  8bc6                 mov eax, esi
// 0056fe5b  5e                   pop esi
// 0056fe5c  59                   pop ecx
// 0056fe5d  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
