// roc 2012-06 008a3460  unit: RBX::VPhysicsSettings::?$GlobalAdvancedSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a3460
//
// 008a3460  8a442404             mov al, byte ptr [esp + 4]
// 008a3464  3a05695ce300         cmp al, byte ptr [0xe35c69]
// 008a346a  7412                 je 0x8a347e
// 008a346c  a2695ce300           mov byte ptr [0xe35c69], al
// 008a3471  c7442404242de500     mov dword ptr [esp + 4], 0xe52d24
// 008a3479  e92219b7ff           jmp 0x414da0
// 008a347e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
