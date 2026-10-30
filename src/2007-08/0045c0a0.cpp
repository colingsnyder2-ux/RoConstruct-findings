// roc 2007-08 0045c0a0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c0a0
//
// 0045c0a0  837c240400           cmp dword ptr [esp + 4], 0
// 0045c0a5  6a00                 push 0
// 0045c0a7  6a00                 push 0
// 0045c0a9  68e0070000           push 0x7e0
// 0045c0ae  740f                 je 0x45c0bf
// 0045c0b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c0b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c0b6  50                   push eax
// 0045c0b7  ffd1                 call ecx
// 0045c0b9  83c410               add esp, 0x10
// 0045c0bc  c20400               ret 4
// 0045c0bf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045c0c2  52                   push edx
// 0045c0c3  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c0c9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanRedo@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
