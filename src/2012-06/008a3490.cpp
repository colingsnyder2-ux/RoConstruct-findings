// roc 2012-06 008a3490  unit: RBX::VPhysicsSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a3490
//
// 008a3490  8a442404             mov al, byte ptr [esp + 4]
// 008a3494  3a05949cdc00         cmp al, byte ptr [0xdc9c94]
// 008a349a  7412                 je 0x8a34ae
// 008a349c  a2949cdc00           mov byte ptr [0xdc9c94], al
// 008a34a1  c7442404742ce500     mov dword ptr [esp + 4], 0xe52c74
// 008a34a9  e9f218b7ff           jmp 0x414da0
// 008a34ae  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
