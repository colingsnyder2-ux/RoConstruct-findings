// roc 2007-08 00544a60  unit: RBX::VDebugSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544a60
//
// 00544a60  8a442404             mov al, byte ptr [esp + 4]
// 00544a64  3a0591168c00         cmp al, byte ptr [0x8c1691]
// 00544a6a  7412                 je 0x544a7e
// 00544a6c  a291168c00           mov byte ptr [0x8c1691], al
// 00544a71  c7442404cc168c00     mov dword ptr [esp + 4], 0x8c16cc
// 00544a79  e992fcefff           jmp 0x444710
// 00544a7e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
