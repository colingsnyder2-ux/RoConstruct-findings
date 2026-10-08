// roc 2007-03 00544010  unit: seg_00540000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00544010
//
// 00544010  8a442404             mov al, byte ptr [esp + 4]
// 00544014  3a0569ca8b00         cmp al, byte ptr [0x8bca69]
// 0054401a  7412                 je 0x54402e
// 0054401c  a269ca8b00           mov byte ptr [0x8bca69], al
// 00544021  c744240430bc8b00     mov dword ptr [esp + 4], 0x8bbc30
// 00544029  e912feefff           jmp 0x443e40
// 0054402e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
