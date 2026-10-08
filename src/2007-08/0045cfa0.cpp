// roc 2007-08 0045cfa0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cfa0
//
// 0045cfa0  837c240800           cmp dword ptr [esp + 8], 0
// 0045cfa5  6a00                 push 0
// 0045cfa7  7419                 je 0x45cfc2
// 0045cfa9  8b442408             mov eax, dword ptr [esp + 8]
// 0045cfad  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045cfb0  50                   push eax
// 0045cfb1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045cfb4  68d8080000           push 0x8d8
// 0045cfb9  52                   push edx
// 0045cfba  ffd0                 call eax
// 0045cfbc  83c410               add esp, 0x10
// 0045cfbf  c20800               ret 8
// 0045cfc2  8b542408             mov edx, dword ptr [esp + 8]
// 0045cfc6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045cfc9  52                   push edx
// 0045cfca  68d8080000           push 0x8d8
// 0045cfcf  50                   push eax
// 0045cfd0  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cfd6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMouseDwellTime@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
