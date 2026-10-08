// roc 2007-08 00544a30  unit: RBX::VDebugSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544a30
//
// 00544a30  8a442404             mov al, byte ptr [esp + 4]
// 00544a34  3a05145a8c00         cmp al, byte ptr [0x8c5a14]
// 00544a3a  7412                 je 0x544a4e
// 00544a3c  a2145a8c00           mov byte ptr [0x8c5a14], al
// 00544a41  c7442404cc188c00     mov dword ptr [esp + 4], 0x8c18cc
// 00544a49  e9c2fcefff           jmp 0x444710
// 00544a4e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
