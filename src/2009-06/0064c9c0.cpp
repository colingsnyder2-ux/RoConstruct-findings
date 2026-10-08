// roc 2009-06 0064c9c0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064c9c0
//
// 0064c9c0  8a442404             mov al, byte ptr [esp + 4]
// 0064c9c4  3a05c8b7a400         cmp al, byte ptr [0xa4b7c8]
// 0064c9ca  7412                 je 0x64c9de
// 0064c9cc  a2c8b7a400           mov byte ptr [0xa4b7c8], al
// 0064c9d1  c7442404c4c3a400     mov dword ptr [esp + 4], 0xa4c3c4
// 0064c9d9  e9f2f8dbff           jmp 0x40c2d0
// 0064c9de  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
