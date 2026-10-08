// roc 2009-06 0064c9f0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064c9f0
//
// 0064c9f0  8a442404             mov al, byte ptr [esp + 4]
// 0064c9f4  3a05cab7a400         cmp al, byte ptr [0xa4b7ca]
// 0064c9fa  7412                 je 0x64ca0e
// 0064c9fc  a2cab7a400           mov byte ptr [0xa4b7ca], al
// 0064ca01  c744240434c4a400     mov dword ptr [esp + 4], 0xa4c434
// 0064ca09  e9c2f8dbff           jmp 0x40c2d0
// 0064ca0e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
