// roc 2010-06 00631d90  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631d90
//
// 00631d90  8a442404             mov al, byte ptr [esp + 4]
// 00631d94  3a05ecafc100         cmp al, byte ptr [0xc1afec]
// 00631d9a  7412                 je 0x631dae
// 00631d9c  a2ecafc100           mov byte ptr [0xc1afec], al
// 00631da1  c7442404e4adc100     mov dword ptr [esp + 4], 0xc1ade4
// 00631da9  e9c2a6ddff           jmp 0x40c470
// 00631dae  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
