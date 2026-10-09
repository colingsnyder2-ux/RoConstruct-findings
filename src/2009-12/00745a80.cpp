// roc 2009-12 00745a80  unit: RBX::FlagStandService  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00745a80
//
// 00745a80  8b442404             mov eax, dword ptr [esp + 4]
// 00745a84  688827b900           push 0xb92788
// 00745a89  8981a4020000         mov dword ptr [ecx + 0x2a4], eax
// 00745a8f  e8ec65ccff           call 0x40c080
// 00745a94  c20400               ret 4
// library openrbx-client/App\v8datamodel\FlagStand.cpp (function ?setTeamColor@FlagStand@RBX@@QAEXVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/FlagStand.cpp
