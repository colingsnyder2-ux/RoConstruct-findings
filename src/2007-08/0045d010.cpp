// roc 2007-08 0045d010  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d010
//
// 0045d010  837c240400           cmp dword ptr [esp + 4], 0
// 0045d015  6a00                 push 0
// 0045d017  6a00                 push 0
// 0045d019  6815090000           push 0x915
// 0045d01e  740f                 je 0x45d02f
// 0045d020  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045d023  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045d026  50                   push eax
// 0045d027  ffd1                 call ecx
// 0045d029  83c410               add esp, 0x10
// 0045d02c  c20400               ret 4
// 0045d02f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045d032  52                   push edx
// 0045d033  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045d039  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Cancel@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
