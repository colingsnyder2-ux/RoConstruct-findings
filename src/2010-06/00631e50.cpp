// roc 2010-06 00631e50  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631e50
//
// 00631e50  8a442404             mov al, byte ptr [esp + 4]
// 00631e54  3a05e29bc100         cmp al, byte ptr [0xc19be2]
// 00631e5a  7412                 je 0x631e6e
// 00631e5c  a2e29bc100           mov byte ptr [0xc19be2], al
// 00631e61  c744240424aec100     mov dword ptr [esp + 4], 0xc1ae24
// 00631e69  e902a6ddff           jmp 0x40c470
// 00631e6e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
