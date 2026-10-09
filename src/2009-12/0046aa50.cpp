// roc 2009-12 0046aa50  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046aa50
//
// 0046aa50  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046aa55  741e                 je 0x46aa75
// 0046aa57  8b442408             mov eax, dword ptr [esp + 8]
// 0046aa5b  8b542404             mov edx, dword ptr [esp + 4]
// 0046aa5f  50                   push eax
// 0046aa60  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046aa63  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046aa66  52                   push edx
// 0046aa67  68a40f0000           push 0xfa4
// 0046aa6c  50                   push eax
// 0046aa6d  ffd1                 call ecx
// 0046aa6f  83c410               add esp, 0x10
// 0046aa72  c20c00               ret 0xc
// 0046aa75  8b542408             mov edx, dword ptr [esp + 8]
// 0046aa79  8b442404             mov eax, dword ptr [esp + 4]
// 0046aa7d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046aa80  52                   push edx
// 0046aa81  50                   push eax
// 0046aa82  68a40f0000           push 0xfa4
// 0046aa87  51                   push ecx
// 0046aa88  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046aa8e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetProperty@CScintillaCtrl@@QAEXPBD0H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
