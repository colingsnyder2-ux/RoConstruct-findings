// roc 2007-03 00544100  unit: seg_00540000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00544100
//
// 00544100  8a442404             mov al, byte ptr [esp + 4]
// 00544104  3a05d9b38b00         cmp al, byte ptr [0x8bb3d9]
// 0054410a  7412                 je 0x54411e
// 0054410c  a2d9b38b00           mov byte ptr [0x8bb3d9], al
// 00544111  c744240450bb8b00     mov dword ptr [esp + 4], 0x8bbb50
// 00544119  e922fdefff           jmp 0x443e40
// 0054411e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
