// roc 2010-06 0046d760  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d760
//
// 0046d760  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046d765  741e                 je 0x46d785
// 0046d767  8b442408             mov eax, dword ptr [esp + 8]
// 0046d76b  8b542404             mov edx, dword ptr [esp + 4]
// 0046d76f  50                   push eax
// 0046d770  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d773  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d776  52                   push edx
// 0046d777  68fc070000           push 0x7fc
// 0046d77c  50                   push eax
// 0046d77d  ffd1                 call ecx
// 0046d77f  83c410               add esp, 0x10
// 0046d782  c20c00               ret 0xc
// 0046d785  8b542408             mov edx, dword ptr [esp + 8]
// 0046d789  8b442404             mov eax, dword ptr [esp + 4]
// 0046d78d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046d790  52                   push edx
// 0046d791  50                   push eax
// 0046d792  68fc070000           push 0x7fc
// 0046d797  51                   push ecx
// 0046d798  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d79e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDelete@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
