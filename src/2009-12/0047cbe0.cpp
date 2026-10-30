// roc 2009-12 0047cbe0  unit: RBX::LDraw2Lua::LDrawCommand  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047cbe0
//
// 0047cbe0  c701e41f9b00         mov dword ptr [ecx], 0x9b1fe4
// 0047cbe6  83c104               add ecx, 4
// 0047cbe9  ff25e4b69800         jmp dword ptr [0x98b6e4]
// copied from an identical function in another client (function ??1CXTPSyntaxEditCommand@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/SyntaxEdit/XTPSyntaxEditUndoManager.cpp