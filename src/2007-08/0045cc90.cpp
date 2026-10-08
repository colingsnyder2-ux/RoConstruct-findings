// roc 2007-08 0045cc90  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cc90
//
// 0045cc90  837c240800           cmp dword ptr [esp + 8], 0
// 0045cc95  741b                 je 0x45ccb2
// 0045cc97  8b442404             mov eax, dword ptr [esp + 4]
// 0045cc9b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045cc9e  50                   push eax
// 0045cc9f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045cca2  6a00                 push 0
// 0045cca4  6885080000           push 0x885
// 0045cca9  52                   push edx
// 0045ccaa  ffd0                 call eax
// 0045ccac  83c410               add esp, 0x10
// 0045ccaf  c20800               ret 8
// 0045ccb2  8b542404             mov edx, dword ptr [esp + 4]
// 0045ccb6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045ccb9  52                   push edx
// 0045ccba  6a00                 push 0
// 0045ccbc  6885080000           push 0x885
// 0045ccc1  50                   push eax
// 0045ccc2  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045ccc8  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetText@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
