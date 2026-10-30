// roc 2007-08 0045c880  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c880
//
// 0045c880  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c885  741e                 je 0x45c8a5
// 0045c887  8b442408             mov eax, dword ptr [esp + 8]
// 0045c88b  8b542404             mov edx, dword ptr [esp + 4]
// 0045c88f  50                   push eax
// 0045c890  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c893  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c896  52                   push edx
// 0045c897  6867080000           push 0x867
// 0045c89c  50                   push eax
// 0045c89d  ffd1                 call ecx
// 0045c89f  83c410               add esp, 0x10
// 0045c8a2  c20c00               ret 0xc
// 0045c8a5  8b542408             mov edx, dword ptr [esp + 8]
// 0045c8a9  8b442404             mov eax, dword ptr [esp + 4]
// 0045c8ad  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c8b0  52                   push edx
// 0045c8b1  50                   push eax
// 0045c8b2  6867080000           push 0x867
// 0045c8b7  51                   push ecx
// 0045c8b8  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c8be  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FormatRange@CScintillaCtrl@@QAEJHPAURangeToFormat@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
