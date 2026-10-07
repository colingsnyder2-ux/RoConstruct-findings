// roc 2008-06 00770d10  unit: CXTPImageEditorPicture  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00770d10
//
// 00770d10  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 00770d13  894178               mov dword ptr [ecx + 0x78], eax
// 00770d16  c7417c00000000       mov dword ptr [ecx + 0x7c], 0
// 00770d1d  e9fefbffff           jmp 0x770920
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?Clear@CXTPImageEditorPicture@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
