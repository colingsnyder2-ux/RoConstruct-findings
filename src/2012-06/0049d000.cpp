// roc 2012-06 0049d000  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d000
//
// 0049d000  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049d005  741e                 je 0x49d025
// 0049d007  8b442408             mov eax, dword ptr [esp + 8]
// 0049d00b  8b542404             mov edx, dword ptr [esp + 4]
// 0049d00f  50                   push eax
// 0049d010  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d013  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d016  52                   push edx
// 0049d017  68c6080000           push 0x8c6
// 0049d01c  50                   push eax
// 0049d01d  ffd1                 call ecx
// 0049d01f  83c410               add esp, 0x10
// 0049d022  c20c00               ret 0xc
// 0049d025  8b542408             mov edx, dword ptr [esp + 8]
// 0049d029  8b442404             mov eax, dword ptr [esp + 4]
// 0049d02d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049d030  52                   push edx
// 0049d031  50                   push eax
// 0049d032  68c6080000           push 0x8c6
// 0049d037  51                   push ecx
// 0049d038  ff15043cb200         call dword ptr [0xb23c04]
// 0049d03e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginSensitiveN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
