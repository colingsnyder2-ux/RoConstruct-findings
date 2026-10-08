// roc 2008-06 00565bf0  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565bf0
//
// 00565bf0  8a442404             mov al, byte ptr [esp + 4]
// 00565bf4  3a058c5f9700         cmp al, byte ptr [0x975f8c]
// 00565bfa  7412                 je 0x565c0e
// 00565bfc  a28c5f9700           mov byte ptr [0x975f8c], al
// 00565c01  c7442404ac479700     mov dword ptr [esp + 4], 0x9747ac
// 00565c09  e9f27eeaff           jmp 0x40db00
// 00565c0e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
