// roc 2012-06 008a3310  unit: RBX::VPhysicsSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a3310
//
// 008a3310  8a442404             mov al, byte ptr [esp + 4]
// 008a3314  3a05645ce300         cmp al, byte ptr [0xe35c64]
// 008a331a  7412                 je 0x8a332e
// 008a331c  a2645ce300           mov byte ptr [0xe35c64], al
// 008a3321  c7442404a82de500     mov dword ptr [esp + 4], 0xe52da8
// 008a3329  e9721ab7ff           jmp 0x414da0
// 008a332e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
