// roc 2007-08 006f3ad0  unit: CXTPImageEditorPicture  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f3ad0
//
// 006f3ad0  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 006f3ad3  894178               mov dword ptr [ecx + 0x78], eax
// 006f3ad6  c7417c00000000       mov dword ptr [ecx + 0x7c], 0
// 006f3add  e90efcffff           jmp 0x6f36f0
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?Clear@CXTPImageEditorPicture@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
