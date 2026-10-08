// roc 2007-08 005448b0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005448b0
//
// 005448b0  8a442404             mov al, byte ptr [esp + 4]
// 005448b4  3a0599278c00         cmp al, byte ptr [0x8c2799]
// 005448ba  7412                 je 0x5448ce
// 005448bc  a299278c00           mov byte ptr [0x8c2799], al
// 005448c1  c744240490178c00     mov dword ptr [esp + 4], 0x8c1790
// 005448c9  e942feefff           jmp 0x444710
// 005448ce  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
