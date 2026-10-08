// roc 2007-08 0045c3c0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c3c0
//
// 0045c3c0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c3c5  741e                 je 0x45c3e5
// 0045c3c7  8b442408             mov eax, dword ptr [esp + 8]
// 0045c3cb  8b542404             mov edx, dword ptr [esp + 4]
// 0045c3cf  50                   push eax
// 0045c3d0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c3d3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c3d6  52                   push edx
// 0045c3d7  68c0080000           push 0x8c0
// 0045c3dc  50                   push eax
// 0045c3dd  ffd1                 call ecx
// 0045c3df  83c410               add esp, 0x10
// 0045c3e2  c20c00               ret 0xc
// 0045c3e5  8b542408             mov edx, dword ptr [esp + 8]
// 0045c3e9  8b442404             mov eax, dword ptr [esp + 4]
// 0045c3ed  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c3f0  52                   push edx
// 0045c3f1  50                   push eax
// 0045c3f2  68c0080000           push 0x8c0
// 0045c3f7  51                   push ecx
// 0045c3f8  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c3fe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginTypeN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
