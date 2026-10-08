// roc 2012-06 008a33a0  unit: RBX::VPhysicsSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a33a0
//
// 008a33a0  8a442404             mov al, byte ptr [esp + 4]
// 008a33a4  3a052021e300         cmp al, byte ptr [0xe32120]
// 008a33aa  7412                 je 0x8a33be
// 008a33ac  a22021e300           mov byte ptr [0xe32120], al
// 008a33b1  c74424047c2de500     mov dword ptr [esp + 4], 0xe52d7c
// 008a33b9  e9e219b7ff           jmp 0x414da0
// 008a33be  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
