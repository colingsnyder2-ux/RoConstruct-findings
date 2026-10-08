// roc 2009-06 0064ca20  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064ca20
//
// 0064ca20  8a442404             mov al, byte ptr [esp + 4]
// 0064ca24  3a05cbb7a400         cmp al, byte ptr [0xa4b7cb]
// 0064ca2a  7412                 je 0x64ca3e
// 0064ca2c  a2cbb7a400           mov byte ptr [0xa4b7cb], al
// 0064ca31  c744240418c4a400     mov dword ptr [esp + 4], 0xa4c418
// 0064ca39  e992f8dbff           jmp 0x40c2d0
// 0064ca3e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
