// roc 2008-06 00565d10  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565d10
//
// 00565d10  8a442404             mov al, byte ptr [esp + 4]
// 00565d14  3a0590679400         cmp al, byte ptr [0x946790]
// 00565d1a  7412                 je 0x565d2e
// 00565d1c  a290679400           mov byte ptr [0x946790], al
// 00565d21  c7442404fc469700     mov dword ptr [esp + 4], 0x9746fc
// 00565d29  e9d27deaff           jmp 0x40db00
// 00565d2e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
