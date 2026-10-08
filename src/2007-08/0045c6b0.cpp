// roc 2007-08 0045c6b0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c6b0
//
// 0045c6b0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c6b5  741e                 je 0x45c6d5
// 0045c6b7  8b442408             mov eax, dword ptr [esp + 8]
// 0045c6bb  8b542404             mov edx, dword ptr [esp + 4]
// 0045c6bf  50                   push eax
// 0045c6c0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c6c3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c6c6  52                   push edx
// 0045c6c7  6808080000           push 0x808
// 0045c6cc  50                   push eax
// 0045c6cd  ffd1                 call ecx
// 0045c6cf  83c410               add esp, 0x10
// 0045c6d2  c20c00               ret 0xc
// 0045c6d5  8b542408             mov edx, dword ptr [esp + 8]
// 0045c6d9  8b442404             mov eax, dword ptr [esp + 4]
// 0045c6dd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c6e0  52                   push edx
// 0045c6e1  50                   push eax
// 0045c6e2  6808080000           push 0x808
// 0045c6e7  51                   push ecx
// 0045c6e8  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c6ee  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFont@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
