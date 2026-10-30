// roc 2010-06 0046d840  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d840
//
// 0046d840  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046d845  741e                 je 0x46d865
// 0046d847  8b442408             mov eax, dword ptr [esp + 8]
// 0046d84b  8b542404             mov edx, dword ptr [esp + 4]
// 0046d84f  50                   push eax
// 0046d850  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d853  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d856  52                   push edx
// 0046d857  6800080000           push 0x800
// 0046d85c  50                   push eax
// 0046d85d  ffd1                 call ecx
// 0046d85f  83c410               add esp, 0x10
// 0046d862  c20c00               ret 0xc
// 0046d865  8b542408             mov edx, dword ptr [esp + 8]
// 0046d869  8b442404             mov eax, dword ptr [esp + 4]
// 0046d86d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046d870  52                   push edx
// 0046d871  50                   push eax
// 0046d872  6800080000           push 0x800
// 0046d877  51                   push ecx
// 0046d878  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d87e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerPrevious@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
