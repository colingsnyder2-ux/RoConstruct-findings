// roc 2007-08 0045c7d0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c7d0
//
// 0045c7d0  837c240400           cmp dword ptr [esp + 4], 0
// 0045c7d5  6a00                 push 0
// 0045c7d7  6a00                 push 0
// 0045c7d9  685f080000           push 0x85f
// 0045c7de  740f                 je 0x45c7ef
// 0045c7e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c7e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c7e6  50                   push eax
// 0045c7e7  ffd1                 call ecx
// 0045c7e9  83c410               add esp, 0x10
// 0045c7ec  c20400               ret 4
// 0045c7ef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045c7f2  52                   push edx
// 0045c7f3  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c7f9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetSelectionStart@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
