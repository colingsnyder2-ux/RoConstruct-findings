// roc 2011-06 0048ad80  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048ad80
//
// 0048ad80  837c240800           cmp dword ptr [esp + 8], 0
// 0048ad85  6a00                 push 0
// 0048ad87  7419                 je 0x48ada2
// 0048ad89  8b442408             mov eax, dword ptr [esp + 8]
// 0048ad8d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048ad90  50                   push eax
// 0048ad91  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048ad94  68d8080000           push 0x8d8
// 0048ad99  52                   push edx
// 0048ad9a  ffd0                 call eax
// 0048ad9c  83c410               add esp, 0x10
// 0048ad9f  c20800               ret 8
// 0048ada2  8b542408             mov edx, dword ptr [esp + 8]
// 0048ada6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048ada9  52                   push edx
// 0048adaa  68d8080000           push 0x8d8
// 0048adaf  50                   push eax
// 0048adb0  ff15c019a400         call dword ptr [0xa419c0]
// 0048adb6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMouseDwellTime@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
