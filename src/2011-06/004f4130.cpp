// roc 2011-06 004f4130  unit: RBX::Network::IdSerializer  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4130
//
// 004f4130  51                   push ecx
// 004f4131  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f4135  56                   push esi
// 004f4136  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f413a  50                   push eax
// 004f413b  56                   push esi
// 004f413c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004f4144  e8c7191500           call 0x645b10
// 004f4149  8bc6                 mov eax, esi
// 004f414b  5e                   pop esi
// 004f414c  59                   pop ecx
// 004f414d  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
