// roc 2012-06 0041f4f0  unit: RBX::PAVDebugSettings::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041f4f0
//
// 0041f4f0  56                   push esi
// 0041f4f1  8bf1                 mov esi, ecx
// 0041f4f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041f4f7  6858f3d500           push 0xd5f358
// 0041f4fc  ff15ec29b200         call dword ptr [0xb229ec]
// 0041f502  84c0                 test al, al
// 0041f504  7407                 je 0x41f50d
// 0041f506  8d4610               lea eax, [esi + 0x10]
// 0041f509  5e                   pop esi
// 0041f50a  c20400               ret 4
// 0041f50d  33c0                 xor eax, eax
// 0041f50f  5e                   pop esi
// 0041f510  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ?get_deleter@?$sp_counted_impl_pd@PAVWorkspace@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@2@@detail@boost@@UAEPAXABVtype_info@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
