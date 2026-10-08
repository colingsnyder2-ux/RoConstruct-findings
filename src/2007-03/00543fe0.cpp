// roc 2007-03 00543fe0  unit: seg_00540000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00543fe0
//
// 00543fe0  8a442404             mov al, byte ptr [esp + 4]
// 00543fe4  3a056bca8b00         cmp al, byte ptr [0x8bca6b]
// 00543fea  7412                 je 0x543ffe
// 00543fec  a26bca8b00           mov byte ptr [0x8bca6b], al
// 00543ff1  c74424044cbd8b00     mov dword ptr [esp + 4], 0x8bbd4c
// 00543ff9  e942feefff           jmp 0x443e40
// 00543ffe  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
