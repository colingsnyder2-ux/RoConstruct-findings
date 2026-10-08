// roc 2012-06 008a33d0  unit: RBX::VPhysicsSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a33d0
//
// 008a33d0  8a442404             mov al, byte ptr [esp + 4]
// 008a33d4  3a052221e300         cmp al, byte ptr [0xe32122]
// 008a33da  7412                 je 0x8a33ee
// 008a33dc  a22221e300           mov byte ptr [0xe32122], al
// 008a33e1  c7442404382ee500     mov dword ptr [esp + 4], 0xe52e38
// 008a33e9  e9b219b7ff           jmp 0x414da0
// 008a33ee  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
