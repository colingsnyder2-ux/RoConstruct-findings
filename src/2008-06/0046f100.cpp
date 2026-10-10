// roc 2008-06 0046f100  unit: RBX::LDraw2Lua::LDrawCommand  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046f100
//
// 0046f100  c70174cb8100         mov dword ptr [ecx], 0x81cb74
// 0046f106  83c104               add ecx, 4
// 0046f109  ff2568248000         jmp dword ptr [0x802468]
// library xtp-11.2.2-shared-mfc/Source\SyntaxEdit\XTPSyntaxEditUndoManager.cpp (function ??1CXTPSyntaxEditCommand@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/SyntaxEdit/XTPSyntaxEditUndoManager.cpp
