// roc 2007-08 0045c610  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c610
//
// 0045c610  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c615  741e                 je 0x45c635
// 0045c617  8b442408             mov eax, dword ptr [esp + 8]
// 0045c61b  8b542404             mov edx, dword ptr [esp + 4]
// 0045c61f  50                   push eax
// 0045c620  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c623  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c626  52                   push edx
// 0045c627  6805080000           push 0x805
// 0045c62c  50                   push eax
// 0045c62d  ffd1                 call ecx
// 0045c62f  83c410               add esp, 0x10
// 0045c632  c20c00               ret 0xc
// 0045c635  8b542408             mov edx, dword ptr [esp + 8]
// 0045c639  8b442404             mov eax, dword ptr [esp + 4]
// 0045c63d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c640  52                   push edx
// 0045c641  50                   push eax
// 0045c642  6805080000           push 0x805
// 0045c647  51                   push ecx
// 0045c648  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c64e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetBold@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
