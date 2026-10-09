// roc 2008-06 005b24e0  unit: RBX::VAccoutrement::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b24e0
//
// 005b24e0  8b442404             mov eax, dword ptr [esp + 4]
// 005b24e4  3b8154010000         cmp eax, dword ptr [ecx + 0x154]
// 005b24ea  7413                 je 0x5b24ff
// 005b24ec  898154010000         mov dword ptr [ecx + 0x154], eax
// 005b24f2  c7442404cc6c9700     mov dword ptr [esp + 4], 0x976ccc
// 005b24fa  e901b6e5ff           jmp 0x40db00
// 005b24ff  c20400               ret 4
// library openrbx-client/App\v8datamodel\Accoutrement.cpp (function ?setBackendAccoutrementState@Accoutrement@RBX@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Accoutrement.cpp
