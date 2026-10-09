// roc 2012-06 0049ca30  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049ca30
//
// 0049ca30  837c240400           cmp dword ptr [esp + 4], 0
// 0049ca35  6a00                 push 0
// 0049ca37  6a00                 push 0
// 0049ca39  68d8070000           push 0x7d8
// 0049ca3e  740f                 je 0x49ca4f
// 0049ca40  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049ca43  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049ca46  50                   push eax
// 0049ca47  ffd1                 call ecx
// 0049ca49  83c410               add esp, 0x10
// 0049ca4c  c20400               ret 4
// 0049ca4f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049ca52  52                   push edx
// 0049ca53  ff15043cb200         call dword ptr [0xb23c04]
// 0049ca59  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetCurrentPos@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
