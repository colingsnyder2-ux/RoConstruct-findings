// roc 2007-08 00544940  unit: RBX::VDebugSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544940
//
// 00544940  8a442404             mov al, byte ptr [esp + 4]
// 00544944  3a059c278c00         cmp al, byte ptr [0x8c279c]
// 0054494a  7412                 je 0x54495e
// 0054494c  a29c278c00           mov byte ptr [0x8c279c], al
// 00544951  c744240490178c00     mov dword ptr [esp + 4], 0x8c1790
// 00544959  e9b2fdefff           jmp 0x444710
// 0054495e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
