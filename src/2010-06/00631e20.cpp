// roc 2010-06 00631e20  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631e20
//
// 00631e20  8a442404             mov al, byte ptr [esp + 4]
// 00631e24  3a05e09bc100         cmp al, byte ptr [0xc19be0]
// 00631e2a  7412                 je 0x631e3e
// 00631e2c  a2e09bc100           mov byte ptr [0xc19be0], al
// 00631e31  c7442404a4adc100     mov dword ptr [esp + 4], 0xc1ada4
// 00631e39  e932a6ddff           jmp 0x40c470
// 00631e3e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
