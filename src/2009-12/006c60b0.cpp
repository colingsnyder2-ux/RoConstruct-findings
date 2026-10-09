// roc 2009-12 006c60b0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c60b0
//
// 006c60b0  8a442404             mov al, byte ptr [esp + 4]
// 006c60b4  3a056214b900         cmp al, byte ptr [0xb91462]
// 006c60ba  7412                 je 0x6c60ce
// 006c60bc  a26214b900           mov byte ptr [0xb91462], al
// 006c60c1  c74424047c24b900     mov dword ptr [esp + 4], 0xb9247c
// 006c60c9  e9b25fd4ff           jmp 0x40c080
// 006c60ce  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
