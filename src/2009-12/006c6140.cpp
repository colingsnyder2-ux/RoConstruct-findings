// roc 2009-12 006c6140  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c6140
//
// 006c6140  8a442404             mov al, byte ptr [esp + 4]
// 006c6144  3a054126b900         cmp al, byte ptr [0xb92641]
// 006c614a  7412                 je 0x6c615e
// 006c614c  a24126b900           mov byte ptr [0xb92641], al
// 006c6151  c7442404b823b900     mov dword ptr [esp + 4], 0xb923b8
// 006c6159  e9225fd4ff           jmp 0x40c080
// 006c615e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
