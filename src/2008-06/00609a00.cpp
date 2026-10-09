// roc 2008-06 00609a00  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00609a00
//
// 00609a00  8a442404             mov al, byte ptr [esp + 4]
// 00609a04  388198010000         cmp byte ptr [ecx + 0x198], al
// 00609a0a  7413                 je 0x609a1f
// 00609a0c  888198010000         mov byte ptr [ecx + 0x198], al
// 00609a12  c7442404d4b99700     mov dword ptr [esp + 4], 0x97b9d4
// 00609a1a  e9e140e0ff           jmp 0x40db00
// 00609a1f  c20400               ret 4
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?setShowControllerFlag@PVInstance@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
