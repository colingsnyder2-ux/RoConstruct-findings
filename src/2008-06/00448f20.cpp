// roc 2008-06 00448f20  unit: CRenderSettings  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448f20
//
// 00448f20  8b442404             mov eax, dword ptr [esp + 4]
// 00448f24  3b8178010000         cmp eax, dword ptr [ecx + 0x178]
// 00448f2a  7410                 je 0x448f3c
// 00448f2c  6810d49600           push 0x96d410
// 00448f31  898178010000         mov dword ptr [ecx + 0x178], eax
// 00448f37  e8c44bfcff           call 0x40db00
// 00448f3c  c20400               ret 4
// library openrbx-client/Network\Player.cpp (function ?setTeamColor@Player@Network@RBX@@QAEXVBrickColor@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Network/Player.cpp
