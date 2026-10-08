// roc 2007-08 005d4d50  unit: RBX::PAVRunService::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d4d50
//
// 005d4d50  56                   push esi
// 005d4d51  8bf1                 mov esi, ecx
// 005d4d53  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d4d57  681c0f8800           push 0x880f1c
// 005d4d5c  ff1508e77700         call dword ptr [0x77e708]
// 005d4d62  84c0                 test al, al
// 005d4d64  7407                 je 0x5d4d6d
// 005d4d66  8d4610               lea eax, [esi + 0x10]
// 005d4d69  5e                   pop esi
// 005d4d6a  c20400               ret 4
// 005d4d6d  33c0                 xor eax, eax
// 005d4d6f  5e                   pop esi
// 005d4d70  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ?get_deleter@?$sp_counted_impl_pd@PAVWorkspace@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@2@@detail@boost@@UAEPAXABVtype_info@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
