// roc 2009-06 0064c900  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064c900
//
// 0064c900  8a442404             mov al, byte ptr [esp + 4]
// 0064c904  3a0523cca400         cmp al, byte ptr [0xa4cc23]
// 0064c90a  7412                 je 0x64c91e
// 0064c90c  a223cca400           mov byte ptr [0xa4cc23], al
// 0064c911  c744240480c3a400     mov dword ptr [esp + 4], 0xa4c380
// 0064c919  e9b2f9dbff           jmp 0x40c2d0
// 0064c91e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
