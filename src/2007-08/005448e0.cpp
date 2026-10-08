// roc 2007-08 005448e0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005448e0
//
// 005448e0  8a442404             mov al, byte ptr [esp + 4]
// 005448e4  3a059a278c00         cmp al, byte ptr [0x8c279a]
// 005448ea  7412                 je 0x5448fe
// 005448ec  a29a278c00           mov byte ptr [0x8c279a], al
// 005448f1  c744240490178c00     mov dword ptr [esp + 4], 0x8c1790
// 005448f9  e912feefff           jmp 0x444710
// 005448fe  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
