// roc 2007-08 0045c000  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c000
//
// 0045c000  837c240800           cmp dword ptr [esp + 8], 0
// 0045c005  6a00                 push 0
// 0045c007  7419                 je 0x45c022
// 0045c009  8b442408             mov eax, dword ptr [esp + 8]
// 0045c00d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045c010  50                   push eax
// 0045c011  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045c014  68dc070000           push 0x7dc
// 0045c019  52                   push edx
// 0045c01a  ffd0                 call eax
// 0045c01c  83c410               add esp, 0x10
// 0045c01f  c20800               ret 8
// 0045c022  8b542408             mov edx, dword ptr [esp + 8]
// 0045c026  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045c029  52                   push edx
// 0045c02a  68dc070000           push 0x7dc
// 0045c02f  50                   push eax
// 0045c030  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c036  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetUndoCollection@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
