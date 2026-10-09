// roc 2009-12 00462020  unit: RBX::PAVDebugSettings::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00462020
//
// 00462020  56                   push esi
// 00462021  8bf1                 mov esi, ecx
// 00462023  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00462027  6840f3af00           push 0xaff340
// 0046202c  ff1568b79800         call dword ptr [0x98b768]
// 00462032  84c0                 test al, al
// 00462034  7407                 je 0x46203d
// 00462036  8d4610               lea eax, [esi + 0x10]
// 00462039  5e                   pop esi
// 0046203a  c20400               ret 4
// 0046203d  33c0                 xor eax, eax
// 0046203f  5e                   pop esi
// 00462040  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ?get_deleter@?$sp_counted_impl_pd@PAVWorkspace@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@2@@detail@boost@@UAEPAXABVtype_info@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
