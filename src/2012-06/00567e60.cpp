// roc 2012-06 00567e60  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00567e60
//
// 00567e60  b801000000           mov eax, 1
// 00567e65  84058c45e200         test byte ptr [0xe2458c], al
// 00567e6b  7535                 jne 0x567ea2
// 00567e6d  09058c45e200         or dword ptr [0xe2458c], eax
// 00567e73  84058445e200         test byte ptr [0xe24584], al
// 00567e79  751d                 jne 0x567e98
// 00567e7b  09058445e200         or dword ptr [0xe24584], eax
// 00567e81  6839300000           push 0x3039
// 00567e86  ff15143eb200         call dword ptr [0xb23e14]
// 00567e8c  3d39300000           cmp eax, 0x3039
// 00567e91  0f94058145e200       sete byte ptr [0xe24581]
// 00567e98  a08145e200           mov al, byte ptr [0xe24581]
// 00567e9d  a28845e200           mov byte ptr [0xe24588], al
// 00567ea2  33c0                 xor eax, eax
// 00567ea4  38058845e200         cmp byte ptr [0xe24588], al
// 00567eaa  0f94c0               sete al
// 00567ead  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?DoEndianSwap@BitStream@RakNet@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
