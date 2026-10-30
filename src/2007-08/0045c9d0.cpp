// roc 2007-08 0045c9d0  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c9d0
//
// 0045c9d0  837c240800           cmp dword ptr [esp + 8], 0
// 0045c9d5  741b                 je 0x45c9f2
// 0045c9d7  8b442404             mov eax, dword ptr [esp + 4]
// 0045c9db  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045c9de  50                   push eax
// 0045c9df  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045c9e2  6a00                 push 0
// 0045c9e4  6874080000           push 0x874
// 0045c9e9  52                   push edx
// 0045c9ea  ffd0                 call eax
// 0045c9ec  83c410               add esp, 0x10
// 0045c9ef  c20800               ret 8
// 0045c9f2  8b542404             mov edx, dword ptr [esp + 4]
// 0045c9f6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045c9f9  52                   push edx
// 0045c9fa  6a00                 push 0
// 0045c9fc  6874080000           push 0x874
// 0045ca01  50                   push eax
// 0045ca02  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045ca08  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointXFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
