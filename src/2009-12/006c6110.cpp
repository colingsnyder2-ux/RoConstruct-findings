// roc 2009-12 006c6110  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c6110
//
// 006c6110  8a442404             mov al, byte ptr [esp + 4]
// 006c6114  3a053a26b900         cmp al, byte ptr [0xb9263a]
// 006c611a  7412                 je 0x6c612e
// 006c611c  a23a26b900           mov byte ptr [0xb9263a], al
// 006c6121  c7442404e822b900     mov dword ptr [esp + 4], 0xb922e8
// 006c6129  e9525fd4ff           jmp 0x40c080
// 006c612e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
