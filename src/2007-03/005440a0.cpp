// roc 2007-03 005440a0  unit: seg_00540000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005440a0
//
// 005440a0  8a442404             mov al, byte ptr [esp + 4]
// 005440a4  3a056cca8b00         cmp al, byte ptr [0x8bca6c]
// 005440aa  7412                 je 0x5440be
// 005440ac  a26cca8b00           mov byte ptr [0x8bca6c], al
// 005440b1  c744240430bc8b00     mov dword ptr [esp + 4], 0x8bbc30
// 005440b9  e982fdefff           jmp 0x443e40
// 005440be  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setShowAnchoredParts@DebugSettings@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
