// roc 2009-06 00461eb0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461eb0
//
// 00461eb0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461eb5  741e                 je 0x461ed5
// 00461eb7  8b442408             mov eax, dword ptr [esp + 8]
// 00461ebb  8b542404             mov edx, dword ptr [esp + 4]
// 00461ebf  50                   push eax
// 00461ec0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461ec3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461ec6  52                   push edx
// 00461ec7  68a40f0000           push 0xfa4
// 00461ecc  50                   push eax
// 00461ecd  ffd1                 call ecx
// 00461ecf  83c410               add esp, 0x10
// 00461ed2  c20c00               ret 0xc
// 00461ed5  8b542408             mov edx, dword ptr [esp + 8]
// 00461ed9  8b442404             mov eax, dword ptr [esp + 4]
// 00461edd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461ee0  52                   push edx
// 00461ee1  50                   push eax
// 00461ee2  68a40f0000           push 0xfa4
// 00461ee7  51                   push ecx
// 00461ee8  ff1590ee8900         call dword ptr [0x89ee90]
// 00461eee  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetProperty@CScintillaCtrl@@QAEXPBD0H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
