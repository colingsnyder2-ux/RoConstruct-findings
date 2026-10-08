// roc 2007-03 00544070  unit: seg_00540000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00544070
//
// 00544070  8a442404             mov al, byte ptr [esp + 4]
// 00544074  3a056dca8b00         cmp al, byte ptr [0x8bca6d]
// 0054407a  7412                 je 0x54408e
// 0054407c  a26dca8b00           mov byte ptr [0x8bca6d], al
// 00544081  c744240430bc8b00     mov dword ptr [esp + 4], 0x8bbc30
// 00544089  e9b2fdefff           jmp 0x443e40
// 0054408e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
