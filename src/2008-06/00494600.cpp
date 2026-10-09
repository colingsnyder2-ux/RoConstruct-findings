// roc 2008-06 00494600  unit: RBX::Network::Player  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00494600
//
// 00494600  8b442404             mov eax, dword ptr [esp + 4]
// 00494604  3b8178010000         cmp eax, dword ptr [ecx + 0x178]
// 0049460a  7410                 je 0x49461c
// 0049460c  6868fd9600           push 0x96fd68
// 00494611  898178010000         mov dword ptr [ecx + 0x178], eax
// 00494617  e8e494f7ff           call 0x40db00
// 0049461c  c20400               ret 4
// library openrbx-client/Network\Player.cpp (function ?setTeamColor@Player@Network@RBX@@QAEXVBrickColor@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Network/Player.cpp
