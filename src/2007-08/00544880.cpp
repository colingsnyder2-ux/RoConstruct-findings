// roc 2007-08 00544880  unit: RBX::VDebugSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544880
//
// 00544880  8a442404             mov al, byte ptr [esp + 4]
// 00544884  3a059b278c00         cmp al, byte ptr [0x8c279b]
// 0054488a  7412                 je 0x54489e
// 0054488c  a29b278c00           mov byte ptr [0x8c279b], al
// 00544891  c744240404198c00     mov dword ptr [esp + 4], 0x8c1904
// 00544899  e972feefff           jmp 0x444710
// 0054489e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
