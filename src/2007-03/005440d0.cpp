// roc 2007-03 005440d0  unit: seg_00540000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005440d0
//
// 005440d0  8a442404             mov al, byte ptr [esp + 4]
// 005440d4  3a05909f8b00         cmp al, byte ptr [0x8b9f90]
// 005440da  7412                 je 0x5440ee
// 005440dc  a2909f8b00           mov byte ptr [0x8b9f90], al
// 005440e1  c744240430bc8b00     mov dword ptr [esp + 4], 0x8bbc30
// 005440e9  e952fdefff           jmp 0x443e40
// 005440ee  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
