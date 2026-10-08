// roc 2010-06 00631dc0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631dc0
//
// 00631dc0  8a442404             mov al, byte ptr [esp + 4]
// 00631dc4  3a05edafc100         cmp al, byte ptr [0xc1afed]
// 00631dca  7412                 je 0x631dde
// 00631dcc  a2edafc100           mov byte ptr [0xc1afed], al
// 00631dd1  c744240484adc100     mov dword ptr [esp + 4], 0xc1ad84
// 00631dd9  e992a6ddff           jmp 0x40c470
// 00631dde  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
