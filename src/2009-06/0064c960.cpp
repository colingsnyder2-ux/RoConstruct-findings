// roc 2009-06 0064c960  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064c960
//
// 0064c960  8a442404             mov al, byte ptr [esp + 4]
// 0064c964  3a0525cca400         cmp al, byte ptr [0xa4cc25]
// 0064c96a  7412                 je 0x64c97e
// 0064c96c  a225cca400           mov byte ptr [0xa4cc25], al
// 0064c971  c7442404a8c3a400     mov dword ptr [esp + 4], 0xa4c3a8
// 0064c979  e952f9dbff           jmp 0x40c2d0
// 0064c97e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
