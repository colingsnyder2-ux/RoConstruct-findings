// roc 2012-06 008a3400  unit: RBX::VPhysicsSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a3400
//
// 008a3400  8a442404             mov al, byte ptr [esp + 4]
// 008a3404  3a052321e300         cmp al, byte ptr [0xe32123]
// 008a340a  7412                 je 0x8a341e
// 008a340c  a22321e300           mov byte ptr [0xe32123], al
// 008a3411  c74424040c2ee500     mov dword ptr [esp + 4], 0xe52e0c
// 008a3419  e98219b7ff           jmp 0x414da0
// 008a341e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
