// roc 2011-06 005d9830  unit: RBX::PAVDebugSettings::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d9830
//
// 005d9830  56                   push esi
// 005d9831  8bf1                 mov esi, ecx
// 005d9833  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d9837  684863c000           push 0xc06348
// 005d983c  ff15500aa400         call dword ptr [0xa40a50]
// 005d9842  84c0                 test al, al
// 005d9844  7407                 je 0x5d984d
// 005d9846  8d4610               lea eax, [esi + 0x10]
// 005d9849  5e                   pop esi
// 005d984a  c20400               ret 4
// 005d984d  33c0                 xor eax, eax
// 005d984f  5e                   pop esi
// 005d9850  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ?get_deleter@?$sp_counted_impl_pd@PAVWorkspace@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@2@@detail@boost@@UAEPAXABVtype_info@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
