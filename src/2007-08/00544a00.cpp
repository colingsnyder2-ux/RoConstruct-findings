// roc 2007-08 00544a00  unit: RBX::VDebugSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544a00
//
// 00544a00  8a442404             mov al, byte ptr [esp + 4]
// 00544a04  3a05ad5e8c00         cmp al, byte ptr [0x8c5ead]
// 00544a0a  7412                 je 0x544a1e
// 00544a0c  a2ad5e8c00           mov byte ptr [0x8c5ead], al
// 00544a11  c7442404b0188c00     mov dword ptr [esp + 4], 0x8c18b0
// 00544a19  e9f2fcefff           jmp 0x444710
// 00544a1e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
