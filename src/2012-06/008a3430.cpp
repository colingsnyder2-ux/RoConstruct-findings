// roc 2012-06 008a3430  unit: RBX::VPhysicsSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a3430
//
// 008a3430  8a442404             mov al, byte ptr [esp + 4]
// 008a3434  3a05625ce300         cmp al, byte ptr [0xe35c62]
// 008a343a  7412                 je 0x8a344e
// 008a343c  a2625ce300           mov byte ptr [0xe35c62], al
// 008a3441  c7442404e82be500     mov dword ptr [esp + 4], 0xe52be8
// 008a3449  e95219b7ff           jmp 0x414da0
// 008a344e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
