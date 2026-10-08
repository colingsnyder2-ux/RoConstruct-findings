// roc 2008-06 00565c50  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565c50
//
// 00565c50  8a442404             mov al, byte ptr [esp + 4]
// 00565c54  3a058d5f9700         cmp al, byte ptr [0x975f8d]
// 00565c5a  7412                 je 0x565c6e
// 00565c5c  a28d5f9700           mov byte ptr [0x975f8d], al
// 00565c61  c7442404dc459700     mov dword ptr [esp + 4], 0x9745dc
// 00565c69  e9927eeaff           jmp 0x40db00
// 00565c6e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
