// roc 2007-03 00453930  unit: seg_00450000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00453930
//
// 00453930  56                   push esi
// 00453931  8bf1                 mov esi, ecx
// 00453933  e8f8feffff           call 0x453830
// 00453938  8bce                 mov ecx, esi
// 0045393a  5e                   pop esi
// 0045393b  e952b41c00           jmp 0x61ed92
// library rbxgs/v8datamodel\Workspace.cpp (function ?onExtentsChanged@Workspace@RBX@@EBEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
