// roc 2007-03 0057b3a0  unit: seg_00570000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057b3a0
//
// 0057b3a0  8b8984020000         mov ecx, dword ptr [ecx + 0x284]
// 0057b3a6  e9f52b0300           jmp 0x5adfa0
// library rbxgs/v8datamodel\Workspace.cpp (function ?joinAllHack@Workspace@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
