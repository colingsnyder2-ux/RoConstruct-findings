// roc 2012-06 008a34c0  unit: RBX::VPhysicsSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a34c0
//
// 008a34c0  8a442404             mov al, byte ptr [esp + 4]
// 008a34c4  3a05188de400         cmp al, byte ptr [0xe48d18]
// 008a34ca  7412                 je 0x8a34de
// 008a34cc  a2188de400           mov byte ptr [0xe48d18], al
// 008a34d1  c7442404482ce500     mov dword ptr [esp + 4], 0xe52c48
// 008a34d9  e9c218b7ff           jmp 0x414da0
// 008a34de  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
