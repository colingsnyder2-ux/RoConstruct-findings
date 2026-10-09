// roc 2010-06 0046e550  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e550
//
// 0046e550  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046e555  741e                 je 0x46e575
// 0046e557  8b442408             mov eax, dword ptr [esp + 8]
// 0046e55b  8b542404             mov edx, dword ptr [esp + 4]
// 0046e55f  50                   push eax
// 0046e560  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e563  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e566  52                   push edx
// 0046e567  68a40f0000           push 0xfa4
// 0046e56c  50                   push eax
// 0046e56d  ffd1                 call ecx
// 0046e56f  83c410               add esp, 0x10
// 0046e572  c20c00               ret 0xc
// 0046e575  8b542408             mov edx, dword ptr [esp + 8]
// 0046e579  8b442404             mov eax, dword ptr [esp + 4]
// 0046e57d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046e580  52                   push edx
// 0046e581  50                   push eax
// 0046e582  68a40f0000           push 0xfa4
// 0046e587  51                   push ecx
// 0046e588  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e58e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetProperty@CScintillaCtrl@@QAEXPBD0H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
