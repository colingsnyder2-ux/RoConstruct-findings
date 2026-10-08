// roc 2012-06 008a3340  unit: RBX::VPhysicsSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a3340
//
// 008a3340  8a442404             mov al, byte ptr [esp + 4]
// 008a3344  3a05655ce300         cmp al, byte ptr [0xe35c65]
// 008a334a  7412                 je 0x8a335e
// 008a334c  a2655ce300           mov byte ptr [0xe35c65], al
// 008a3351  c7442404502de500     mov dword ptr [esp + 4], 0xe52d50
// 008a3359  e9421ab7ff           jmp 0x414da0
// 008a335e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
