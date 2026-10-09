// roc 2008-06 00449180  unit: CRenderSettings  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00449180
//
// 00449180  8b442404             mov eax, dword ptr [esp + 4]
// 00449184  3b8130010000         cmp eax, dword ptr [ecx + 0x130]
// 0044918a  7413                 je 0x44919f
// 0044918c  898130010000         mov dword ptr [ecx + 0x130], eax
// 00449192  c74424045cd39600     mov dword ptr [esp + 4], 0x96d35c
// 0044919a  e96149fcff           jmp 0x40db00
// 0044919f  c20400               ret 4
// library openrbx-client/Network\Player.cpp (function ?setTeamColor@Player@Network@RBX@@QAEXVBrickColor@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Network/Player.cpp
