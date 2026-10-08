// roc 2007-08 0045c750  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c750
//
// 0045c750  837c240800           cmp dword ptr [esp + 8], 0
// 0045c755  6a00                 push 0
// 0045c757  7419                 je 0x45c772
// 0045c759  8b442408             mov eax, dword ptr [esp + 8]
// 0045c75d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045c760  50                   push eax
// 0045c761  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045c764  683a080000           push 0x83a
// 0045c769  52                   push edx
// 0045c76a  ffd0                 call eax
// 0045c76c  83c410               add esp, 0x10
// 0045c76f  c20800               ret 8
// 0045c772  8b542408             mov edx, dword ptr [esp + 8]
// 0045c776  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045c779  52                   push edx
// 0045c77a  683a080000           push 0x83a
// 0045c77f  50                   push eax
// 0045c780  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c786  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCSetSeparator@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
