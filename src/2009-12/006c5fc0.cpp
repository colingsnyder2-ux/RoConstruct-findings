// roc 2009-12 006c5fc0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c5fc0
//
// 006c5fc0  8a442404             mov al, byte ptr [esp + 4]
// 006c5fc4  3a053b26b900         cmp al, byte ptr [0xb9263b]
// 006c5fca  7412                 je 0x6c5fde
// 006c5fcc  a23b26b900           mov byte ptr [0xb9263b], al
// 006c5fd1  c74424049823b900     mov dword ptr [esp + 4], 0xb92398
// 006c5fd9  e9a260d4ff           jmp 0x40c080
// 006c5fde  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
