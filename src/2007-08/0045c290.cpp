// roc 2007-08 0045c290  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c290
//
// 0045c290  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c295  741e                 je 0x45c2b5
// 0045c297  8b442408             mov eax, dword ptr [esp + 8]
// 0045c29b  8b542404             mov edx, dword ptr [esp + 4]
// 0045c29f  50                   push eax
// 0045c2a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c2a3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c2a6  52                   push edx
// 0045c2a7  68fc070000           push 0x7fc
// 0045c2ac  50                   push eax
// 0045c2ad  ffd1                 call ecx
// 0045c2af  83c410               add esp, 0x10
// 0045c2b2  c20c00               ret 0xc
// 0045c2b5  8b542408             mov edx, dword ptr [esp + 8]
// 0045c2b9  8b442404             mov eax, dword ptr [esp + 4]
// 0045c2bd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c2c0  52                   push edx
// 0045c2c1  50                   push eax
// 0045c2c2  68fc070000           push 0x7fc
// 0045c2c7  51                   push ecx
// 0045c2c8  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c2ce  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDelete@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
