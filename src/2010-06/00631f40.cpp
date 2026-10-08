// roc 2010-06 00631f40  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631f40
//
// 00631f40  8a442404             mov al, byte ptr [esp + 4]
// 00631f44  3a053028c200         cmp al, byte ptr [0xc22830]
// 00631f4a  7412                 je 0x631f5e
// 00631f4c  a23028c200           mov byte ptr [0xc22830], al
// 00631f51  c7442404d8acc100     mov dword ptr [esp + 4], 0xc1acd8
// 00631f59  e912a5ddff           jmp 0x40c470
// 00631f5e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
