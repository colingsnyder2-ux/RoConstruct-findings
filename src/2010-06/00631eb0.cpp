// roc 2010-06 00631eb0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631eb0
//
// 00631eb0  8a442404             mov al, byte ptr [esp + 4]
// 00631eb4  3a05eaafc100         cmp al, byte ptr [0xc1afea]
// 00631eba  7412                 je 0x631ece
// 00631ebc  a2eaafc100           mov byte ptr [0xc1afea], al
// 00631ec1  c744240490acc100     mov dword ptr [esp + 4], 0xc1ac90
// 00631ec9  e9a2a5ddff           jmp 0x40c470
// 00631ece  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
