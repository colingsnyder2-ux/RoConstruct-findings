// roc 2007-08 0045c370  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c370
//
// 0045c370  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c375  741e                 je 0x45c395
// 0045c377  8b442408             mov eax, dword ptr [esp + 8]
// 0045c37b  8b542404             mov edx, dword ptr [esp + 4]
// 0045c37f  50                   push eax
// 0045c380  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c383  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c386  52                   push edx
// 0045c387  6800080000           push 0x800
// 0045c38c  50                   push eax
// 0045c38d  ffd1                 call ecx
// 0045c38f  83c410               add esp, 0x10
// 0045c392  c20c00               ret 0xc
// 0045c395  8b542408             mov edx, dword ptr [esp + 8]
// 0045c399  8b442404             mov eax, dword ptr [esp + 4]
// 0045c39d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c3a0  52                   push edx
// 0045c3a1  50                   push eax
// 0045c3a2  6800080000           push 0x800
// 0045c3a7  51                   push ecx
// 0045c3a8  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c3ae  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerPrevious@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
