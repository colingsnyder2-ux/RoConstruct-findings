// roc 2010-06 00631f10  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631f10
//
// 00631f10  8a442404             mov al, byte ptr [esp + 4]
// 00631f14  3a05d407bc00         cmp al, byte ptr [0xbc07d4]
// 00631f1a  7412                 je 0x631f2e
// 00631f1c  a2d407bc00           mov byte ptr [0xbc07d4], al
// 00631f21  c7442404f8acc100     mov dword ptr [esp + 4], 0xc1acf8
// 00631f29  e942a5ddff           jmp 0x40c470
// 00631f2e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
