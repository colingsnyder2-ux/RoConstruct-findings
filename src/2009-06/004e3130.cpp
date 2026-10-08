// roc 2009-06 004e3130  unit: RBX::Network::VClient::?$FactoryProduct  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e3130
//
// 004e3130  51                   push ecx
// 004e3131  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e3135  56                   push esi
// 004e3136  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e313a  50                   push eax
// 004e313b  56                   push esi
// 004e313c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004e3144  e8b7fc1400           call 0x632e00
// 004e3149  8bc6                 mov eax, esi
// 004e314b  5e                   pop esi
// 004e314c  59                   pop ecx
// 004e314d  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
