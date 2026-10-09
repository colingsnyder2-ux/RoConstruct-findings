// roc 2009-12 006c6080  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c6080
//
// 006c6080  8a442404             mov al, byte ptr [esp + 4]
// 006c6084  3a056014b900         cmp al, byte ptr [0xb91460]
// 006c608a  7412                 je 0x6c609e
// 006c608c  a26014b900           mov byte ptr [0xb91460], al
// 006c6091  c7442404fc23b900     mov dword ptr [esp + 4], 0xb923fc
// 006c6099  e9e25fd4ff           jmp 0x40c080
// 006c609e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
