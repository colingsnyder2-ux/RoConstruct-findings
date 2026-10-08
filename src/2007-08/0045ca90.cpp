// roc 2007-08 0045ca90  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045ca90
//
// 0045ca90  837c240800           cmp dword ptr [esp + 8], 0
// 0045ca95  741b                 je 0x45cab2
// 0045ca97  8b442404             mov eax, dword ptr [esp + 4]
// 0045ca9b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045ca9e  50                   push eax
// 0045ca9f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045caa2  6a00                 push 0
// 0045caa4  687a080000           push 0x87a
// 0045caa9  52                   push edx
// 0045caaa  ffd0                 call eax
// 0045caac  83c410               add esp, 0x10
// 0045caaf  c20800               ret 8
// 0045cab2  8b542404             mov edx, dword ptr [esp + 4]
// 0045cab6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045cab9  52                   push edx
// 0045caba  6a00                 push 0
// 0045cabc  687a080000           push 0x87a
// 0045cac1  50                   push eax
// 0045cac2  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cac8  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ReplaceSel@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
