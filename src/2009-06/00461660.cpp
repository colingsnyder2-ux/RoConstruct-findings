// roc 2009-06 00461660  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461660
//
// 00461660  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461665  741e                 je 0x461685
// 00461667  8b442408             mov eax, dword ptr [esp + 8]
// 0046166b  8b542404             mov edx, dword ptr [esp + 4]
// 0046166f  50                   push eax
// 00461670  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461673  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461676  52                   push edx
// 00461677  6866080000           push 0x866
// 0046167c  50                   push eax
// 0046167d  ffd1                 call ecx
// 0046167f  83c410               add esp, 0x10
// 00461682  c20c00               ret 0xc
// 00461685  8b542408             mov edx, dword ptr [esp + 8]
// 00461689  8b442404             mov eax, dword ptr [esp + 4]
// 0046168d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461690  52                   push edx
// 00461691  50                   push eax
// 00461692  6866080000           push 0x866
// 00461697  51                   push ecx
// 00461698  ff1590ee8900         call dword ptr [0x89ee90]
// 0046169e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FindTextA@CScintillaCtrl@@QAEJHPAUTextToFind@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
