// roc 2007-08 0045c8d0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c8d0
//
// 0045c8d0  837c240400           cmp dword ptr [esp + 4], 0
// 0045c8d5  6a00                 push 0
// 0045c8d7  6a00                 push 0
// 0045c8d9  686f080000           push 0x86f
// 0045c8de  740f                 je 0x45c8ef
// 0045c8e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c8e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c8e6  50                   push eax
// 0045c8e7  ffd1                 call ecx
// 0045c8e9  83c410               add esp, 0x10
// 0045c8ec  c20400               ret 4
// 0045c8ef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045c8f2  52                   push edx
// 0045c8f3  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c8f9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetModify@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
