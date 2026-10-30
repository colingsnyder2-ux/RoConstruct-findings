// roc 2007-08 0045cb70  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cb70
//
// 0045cb70  837c240400           cmp dword ptr [esp + 4], 0
// 0045cb75  6a00                 push 0
// 0045cb77  6a00                 push 0
// 0045cb79  687f080000           push 0x87f
// 0045cb7e  740f                 je 0x45cb8f
// 0045cb80  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045cb83  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045cb86  50                   push eax
// 0045cb87  ffd1                 call ecx
// 0045cb89  83c410               add esp, 0x10
// 0045cb8c  c20400               ret 4
// 0045cb8f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045cb92  52                   push edx
// 0045cb93  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cb99  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?EmptyUndoBuffer@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
