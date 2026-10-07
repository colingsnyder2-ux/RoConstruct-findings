// roc 2012-06 00567bd0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00567bd0
//
// 00567bd0  b801000000           mov eax, 1
// 00567bd5  84058c45e200         test byte ptr [0xe2458c], al
// 00567bdb  7536                 jne 0x567c13
// 00567bdd  09058c45e200         or dword ptr [0xe2458c], eax
// 00567be3  84058445e200         test byte ptr [0xe24584], al
// 00567be9  751d                 jne 0x567c08
// 00567beb  09058445e200         or dword ptr [0xe24584], eax
// 00567bf1  6839300000           push 0x3039
// 00567bf6  ff15143eb200         call dword ptr [0xb23e14]
// 00567bfc  3d39300000           cmp eax, 0x3039
// 00567c01  0f94058145e200       sete byte ptr [0xe24581]
// 00567c08  a08145e200           mov al, byte ptr [0xe24581]
// 00567c0d  a28845e200           mov byte ptr [0xe24588], al
// 00567c12  c3                   ret 
// 00567c13  a08845e200           mov al, byte ptr [0xe24588]
// 00567c18  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?IsNetworkOrder@BitStream@RakNet@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
