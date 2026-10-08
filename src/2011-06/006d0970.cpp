// roc 2011-06 006d0970  unit: RBX::Lighting  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d0970
//
// 006d0970  8b442404             mov eax, dword ptr [esp + 4]
// 006d0974  6a00                 push 0
// 006d0976  6844a5c400           push 0xc4a544
// 006d097b  68f871c000           push 0xc071f8
// 006d0980  6a00                 push 0
// 006d0982  50                   push eax
// 006d0983  e862a91300           call 0x80b2ea
// 006d0988  83c414               add esp, 0x14
// 006d098b  f7d8                 neg eax
// 006d098d  1bc0                 sbb eax, eax
// 006d098f  f7d8                 neg eax
// 006d0991  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?askAddChild@Lighting@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
