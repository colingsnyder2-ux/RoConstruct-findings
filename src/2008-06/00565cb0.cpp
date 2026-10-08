// roc 2008-06 00565cb0  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565cb0
//
// 00565cb0  8a442404             mov al, byte ptr [esp + 4]
// 00565cb4  3a0599689700         cmp al, byte ptr [0x976899]
// 00565cba  7412                 je 0x565cce
// 00565cbc  a299689700           mov byte ptr [0x976899], al
// 00565cc1  c7442404a8469700     mov dword ptr [esp + 4], 0x9746a8
// 00565cc9  e9327eeaff           jmp 0x40db00
// 00565cce  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
