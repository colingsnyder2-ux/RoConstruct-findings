// roc 2008-06 00565ce0  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565ce0
//
// 00565ce0  8a442404             mov al, byte ptr [esp + 4]
// 00565ce4  3a05614e9700         cmp al, byte ptr [0x974e61]
// 00565cea  7412                 je 0x565cfe
// 00565cec  a2614e9700           mov byte ptr [0x974e61], al
// 00565cf1  c7442404f8459700     mov dword ptr [esp + 4], 0x9745f8
// 00565cf9  e9027eeaff           jmp 0x40db00
// 00565cfe  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
