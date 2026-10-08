// roc 2011-06 004c8a80  unit: RBX::Network::Players::W4PlayerChatType::?$holder  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c8a80
//
// 004c8a80  8b5108               mov edx, dword ptr [ecx + 8]
// 004c8a83  8b442404             mov eax, dword ptr [esp + 4]
// 004c8a87  85d2                 test edx, edx
// 004c8a89  7509                 jne 0x4c8a94
// 004c8a8b  894104               mov dword ptr [ecx + 4], eax
// 004c8a8e  894108               mov dword ptr [ecx + 8], eax
// 004c8a91  c20400               ret 4
// 004c8a94  8902                 mov dword ptr [edx], eax
// 004c8a96  894108               mov dword ptr [ecx + 8], eax
// 004c8a99  c20400               ret 4
// library rbxgs/v8tree\Instance.cpp (function ?addChild@XmlElement@@QAEPAV1@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
