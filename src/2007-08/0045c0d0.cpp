// roc 2007-08 0045c0d0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c0d0
//
// 0045c0d0  837c240800           cmp dword ptr [esp + 8], 0
// 0045c0d5  6a00                 push 0
// 0045c0d7  7419                 je 0x45c0f2
// 0045c0d9  8b442408             mov eax, dword ptr [esp + 8]
// 0045c0dd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045c0e0  50                   push eax
// 0045c0e1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045c0e4  68e8070000           push 0x7e8
// 0045c0e9  52                   push edx
// 0045c0ea  ffd0                 call eax
// 0045c0ec  83c410               add esp, 0x10
// 0045c0ef  c20800               ret 8
// 0045c0f2  8b542408             mov edx, dword ptr [esp + 8]
// 0045c0f6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045c0f9  52                   push edx
// 0045c0fa  68e8070000           push 0x7e8
// 0045c0ff  50                   push eax
// 0045c100  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c106  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GotoLine@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
