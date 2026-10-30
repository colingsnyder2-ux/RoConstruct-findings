// roc 2007-08 0045c240  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c240
//
// 0045c240  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c245  741e                 je 0x45c265
// 0045c247  8b442408             mov eax, dword ptr [esp + 8]
// 0045c24b  8b542404             mov edx, dword ptr [esp + 4]
// 0045c24f  50                   push eax
// 0045c250  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c253  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c256  52                   push edx
// 0045c257  68fb070000           push 0x7fb
// 0045c25c  50                   push eax
// 0045c25d  ffd1                 call ecx
// 0045c25f  83c410               add esp, 0x10
// 0045c262  c20c00               ret 0xc
// 0045c265  8b542408             mov edx, dword ptr [esp + 8]
// 0045c269  8b442404             mov eax, dword ptr [esp + 4]
// 0045c26d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c270  52                   push edx
// 0045c271  50                   push eax
// 0045c272  68fb070000           push 0x7fb
// 0045c277  51                   push ecx
// 0045c278  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c27e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerAdd@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
