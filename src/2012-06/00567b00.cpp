// roc 2012-06 00567b00  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00567b00
//
// 00567b00  b801000000           mov eax, 1
// 00567b05  84058445e200         test byte ptr [0xe24584], al
// 00567b0b  751f                 jne 0x567b2c
// 00567b0d  09058445e200         or dword ptr [0xe24584], eax
// 00567b13  6839300000           push 0x3039
// 00567b18  ff15143eb200         call dword ptr [0xb23e14]
// 00567b1e  3d39300000           cmp eax, 0x3039
// 00567b23  0f94c0               sete al
// 00567b26  a28145e200           mov byte ptr [0xe24581], al
// 00567b2b  c3                   ret 
// 00567b2c  a08145e200           mov al, byte ptr [0xe24581]
// 00567b31  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?IsNetworkOrderInternal@BitStream@RakNet@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
