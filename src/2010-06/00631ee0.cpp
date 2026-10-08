// roc 2010-06 00631ee0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631ee0
//
// 00631ee0  8a442404             mov al, byte ptr [esp + 4]
// 00631ee4  3a05f1afc100         cmp al, byte ptr [0xc1aff1]
// 00631eea  7412                 je 0x631efe
// 00631eec  a2f1afc100           mov byte ptr [0xc1aff1], al
// 00631ef1  c744240460adc100     mov dword ptr [esp + 4], 0xc1ad60
// 00631ef9  e972a5ddff           jmp 0x40c470
// 00631efe  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
