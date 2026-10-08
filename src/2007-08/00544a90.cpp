// roc 2007-08 00544a90  unit: RBX::VDebugSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544a90
//
// 00544a90  8a442404             mov al, byte ptr [esp + 4]
// 00544a94  3a05e01e8c00         cmp al, byte ptr [0x8c1ee0]
// 00544a9a  7412                 je 0x544aae
// 00544a9c  a2e01e8c00           mov byte ptr [0x8c1ee0], al
// 00544aa1  c744240404178c00     mov dword ptr [esp + 4], 0x8c1704
// 00544aa9  e962fcefff           jmp 0x444710
// 00544aae  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
