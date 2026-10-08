// roc 2008-06 00565c80  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565c80
//
// 00565c80  8a442404             mov al, byte ptr [esp + 4]
// 00565c84  3a05d9539700         cmp al, byte ptr [0x9753d9]
// 00565c8a  7412                 je 0x565c9e
// 00565c8c  a2d9539700           mov byte ptr [0x9753d9], al
// 00565c91  c7442404bc449700     mov dword ptr [esp + 4], 0x9744bc
// 00565c99  e9627eeaff           jmp 0x40db00
// 00565c9e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
