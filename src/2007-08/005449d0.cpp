// roc 2007-08 005449d0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005449d0
//
// 005449d0  8a442404             mov al, byte ptr [esp + 4]
// 005449d4  3a05c92e8c00         cmp al, byte ptr [0x8c2ec9]
// 005449da  7412                 je 0x5449ee
// 005449dc  a2c92e8c00           mov byte ptr [0x8c2ec9], al
// 005449e1  c744240404188c00     mov dword ptr [esp + 4], 0x8c1804
// 005449e9  e922fdefff           jmp 0x444710
// 005449ee  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
