// roc 2007-03 00544040  unit: seg_00540000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00544040
//
// 00544040  8a442404             mov al, byte ptr [esp + 4]
// 00544044  3a056aca8b00         cmp al, byte ptr [0x8bca6a]
// 0054404a  7412                 je 0x54405e
// 0054404c  a26aca8b00           mov byte ptr [0x8bca6a], al
// 00544051  c744240430bc8b00     mov dword ptr [esp + 4], 0x8bbc30
// 00544059  e9e2fdefff           jmp 0x443e40
// 0054405e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
