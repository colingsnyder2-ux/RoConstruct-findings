// roc 2007-08 0045c660  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c660
//
// 0045c660  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c665  741e                 je 0x45c685
// 0045c667  8b442408             mov eax, dword ptr [esp + 8]
// 0045c66b  8b542404             mov edx, dword ptr [esp + 4]
// 0045c66f  50                   push eax
// 0045c670  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c673  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c676  52                   push edx
// 0045c677  6807080000           push 0x807
// 0045c67c  50                   push eax
// 0045c67d  ffd1                 call ecx
// 0045c67f  83c410               add esp, 0x10
// 0045c682  c20c00               ret 0xc
// 0045c685  8b542408             mov edx, dword ptr [esp + 8]
// 0045c689  8b442404             mov eax, dword ptr [esp + 4]
// 0045c68d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c690  52                   push edx
// 0045c691  50                   push eax
// 0045c692  6807080000           push 0x807
// 0045c697  51                   push ecx
// 0045c698  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c69e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetSize@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
