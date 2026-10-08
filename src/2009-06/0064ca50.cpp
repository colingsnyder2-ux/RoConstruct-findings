// roc 2009-06 0064ca50  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064ca50
//
// 0064ca50  8a442404             mov al, byte ptr [esp + 4]
// 0064ca54  3a0522cca400         cmp al, byte ptr [0xa4cc22]
// 0064ca5a  7412                 je 0x64ca6e
// 0064ca5c  a222cca400           mov byte ptr [0xa4cc22], al
// 0064ca61  c744240424c3a400     mov dword ptr [esp + 4], 0xa4c324
// 0064ca69  e962f8dbff           jmp 0x40c2d0
// 0064ca6e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
