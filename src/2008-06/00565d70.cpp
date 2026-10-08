// roc 2008-06 00565d70  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565d70
//
// 00565d70  8a442404             mov al, byte ptr [esp + 4]
// 00565d74  3a05c04a9700         cmp al, byte ptr [0x974ac0]
// 00565d7a  7412                 je 0x565d8e
// 00565d7c  a2c04a9700           mov byte ptr [0x974ac0], al
// 00565d81  c744240434459700     mov dword ptr [esp + 4], 0x974534
// 00565d89  e9727deaff           jmp 0x40db00
// 00565d8e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
