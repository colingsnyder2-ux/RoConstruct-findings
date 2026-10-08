// roc 2009-06 0064c930  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064c930
//
// 0064c930  8a442404             mov al, byte ptr [esp + 4]
// 0064c934  3a0524cca400         cmp al, byte ptr [0xa4cc24]
// 0064c93a  7412                 je 0x64c94e
// 0064c93c  a224cca400           mov byte ptr [0xa4cc24], al
// 0064c941  c7442404fcc3a400     mov dword ptr [esp + 4], 0xa4c3fc
// 0064c949  e982f9dbff           jmp 0x40c2d0
// 0064c94e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
