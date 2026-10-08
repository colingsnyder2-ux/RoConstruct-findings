// roc 2010-06 00631e80  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631e80
//
// 00631e80  8a442404             mov al, byte ptr [esp + 4]
// 00631e84  3a05e39bc100         cmp al, byte ptr [0xc19be3]
// 00631e8a  7412                 je 0x631e9e
// 00631e8c  a2e39bc100           mov byte ptr [0xc19be3], al
// 00631e91  c744240404aec100     mov dword ptr [esp + 4], 0xc1ae04
// 00631e99  e9d2a5ddff           jmp 0x40c470
// 00631e9e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
