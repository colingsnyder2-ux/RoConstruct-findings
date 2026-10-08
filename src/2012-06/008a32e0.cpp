// roc 2012-06 008a32e0  unit: RBX::VPhysicsSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a32e0
//
// 008a32e0  8a442404             mov al, byte ptr [esp + 4]
// 008a32e4  3a05635ce300         cmp al, byte ptr [0xe35c63]
// 008a32ea  7412                 je 0x8a32fe
// 008a32ec  a2635ce300           mov byte ptr [0xe35c63], al
// 008a32f1  c7442404cc2ce500     mov dword ptr [esp + 4], 0xe52ccc
// 008a32f9  e9a21ab7ff           jmp 0x414da0
// 008a32fe  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
