// roc 2007-08 00544970  unit: RBX::VDebugSettings::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544970
//
// 00544970  8a442404             mov al, byte ptr [esp + 4]
// 00544974  3a05c0fa8b00         cmp al, byte ptr [0x8bfac0]
// 0054497a  7412                 je 0x54498e
// 0054497c  a2c0fa8b00           mov byte ptr [0x8bfac0], al
// 00544981  c744240490178c00     mov dword ptr [esp + 4], 0x8c1790
// 00544989  e982fdefff           jmp 0x444710
// 0054498e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
