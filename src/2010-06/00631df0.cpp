// roc 2010-06 00631df0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631df0
//
// 00631df0  8a442404             mov al, byte ptr [esp + 4]
// 00631df4  3a05d893c100         cmp al, byte ptr [0xc193d8]
// 00631dfa  7412                 je 0x631e0e
// 00631dfc  a2d893c100           mov byte ptr [0xc193d8], al
// 00631e01  c744240418adc100     mov dword ptr [esp + 4], 0xc1ad18
// 00631e09  e962a6ddff           jmp 0x40c470
// 00631e0e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
