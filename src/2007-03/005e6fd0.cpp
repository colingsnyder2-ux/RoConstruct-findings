// roc 2007-03 005e6fd0  unit: seg_005e0000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e6fd0
//
// 005e6fd0  56                   push esi
// 005e6fd1  8bf1                 mov esi, ecx
// 005e6fd3  e808770000           call 0x5ee6e0
// 005e6fd8  8bce                 mov ecx, esi
// 005e6fda  5e                   pop esi
// 005e6fdb  e9f0310000           jmp 0x5ea1d0
// library rbxgs/v8datamodel\Workspace.cpp (function ?onExtentsChanged@Workspace@RBX@@EBEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
