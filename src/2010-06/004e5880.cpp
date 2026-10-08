// roc 2010-06 004e5880  unit: RBX::Network::IdSerializer  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e5880
//
// 004e5880  51                   push ecx
// 004e5881  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e5885  56                   push esi
// 004e5886  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e588a  50                   push eax
// 004e588b  56                   push esi
// 004e588c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004e5894  e8074d1200           call 0x60a5a0
// 004e5899  8bc6                 mov eax, esi
// 004e589b  5e                   pop esi
// 004e589c  59                   pop ecx
// 004e589d  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
