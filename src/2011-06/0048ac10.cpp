// roc 2011-06 0048ac10  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048ac10
//
// 0048ac10  837c240800           cmp dword ptr [esp + 8], 0
// 0048ac15  6a00                 push 0
// 0048ac17  7419                 je 0x48ac32
// 0048ac19  8b442408             mov eax, dword ptr [esp + 8]
// 0048ac1d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048ac20  50                   push eax
// 0048ac21  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048ac24  6896080000           push 0x896
// 0048ac29  52                   push edx
// 0048ac2a  ffd0                 call eax
// 0048ac2c  83c410               add esp, 0x10
// 0048ac2f  c20800               ret 8
// 0048ac32  8b542408             mov edx, dword ptr [esp + 8]
// 0048ac36  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048ac39  52                   push edx
// 0048ac3a  6896080000           push 0x896
// 0048ac3f  50                   push eax
// 0048ac40  ff15c019a400         call dword ptr [0xa419c0]
// 0048ac46  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSearchFlags@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
