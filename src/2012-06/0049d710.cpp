// roc 2012-06 0049d710  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d710
//
// 0049d710  837c240400           cmp dword ptr [esp + 4], 0
// 0049d715  6a00                 push 0
// 0049d717  6a00                 push 0
// 0049d719  6882080000           push 0x882
// 0049d71e  740f                 je 0x49d72f
// 0049d720  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d723  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d726  50                   push eax
// 0049d727  ffd1                 call ecx
// 0049d729  83c410               add esp, 0x10
// 0049d72c  c20400               ret 4
// 0049d72f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d732  52                   push edx
// 0049d733  ff15043cb200         call dword ptr [0xb23c04]
// 0049d739  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Copy@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
