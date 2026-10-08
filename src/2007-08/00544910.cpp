// roc 2007-08 00544910  unit: RBX::VDebugSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544910
//
// 00544910  8a442404             mov al, byte ptr [esp + 4]
// 00544914  3a059d278c00         cmp al, byte ptr [0x8c279d]
// 0054491a  7412                 je 0x54492e
// 0054491c  a29d278c00           mov byte ptr [0x8c279d], al
// 00544921  c744240490178c00     mov dword ptr [esp + 4], 0x8c1790
// 00544929  e9e2fdefff           jmp 0x444710
// 0054492e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
