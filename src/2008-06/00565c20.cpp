// roc 2008-06 00565c20  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565c20
//
// 00565c20  8a442404             mov al, byte ptr [esp + 4]
// 00565c24  3a058e5f9700         cmp al, byte ptr [0x975f8e]
// 00565c2a  7412                 je 0x565c3e
// 00565c2c  a28e5f9700           mov byte ptr [0x975f8e], al
// 00565c31  c7442404dc459700     mov dword ptr [esp + 4], 0x9745dc
// 00565c39  e9c27eeaff           jmp 0x40db00
// 00565c3e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
