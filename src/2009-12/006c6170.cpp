// roc 2009-12 006c6170  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c6170
//
// 006c6170  8a442404             mov al, byte ptr [esp + 4]
// 006c6174  3a057845b400         cmp al, byte ptr [0xb44578]
// 006c617a  7412                 je 0x6c618e
// 006c617c  a27845b400           mov byte ptr [0xb44578], al
// 006c6181  c74424045823b900     mov dword ptr [esp + 4], 0xb92358
// 006c6189  e9f25ed4ff           jmp 0x40c080
// 006c618e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
