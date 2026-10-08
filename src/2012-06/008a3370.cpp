// roc 2012-06 008a3370  unit: RBX::VPhysicsSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a3370
//
// 008a3370  8a442404             mov al, byte ptr [esp + 4]
// 008a3374  3a0550b2e200         cmp al, byte ptr [0xe2b250]
// 008a337a  7412                 je 0x8a338e
// 008a337c  a250b2e200           mov byte ptr [0xe2b250], al
// 008a3381  c7442404a02ce500     mov dword ptr [esp + 4], 0xe52ca0
// 008a3389  e9121ab7ff           jmp 0x414da0
// 008a338e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
