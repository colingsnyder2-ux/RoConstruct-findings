// roc 2012-06 0049ca00  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049ca00
//
// 0049ca00  837c240400           cmp dword ptr [esp + 4], 0
// 0049ca05  6a00                 push 0
// 0049ca07  6a00                 push 0
// 0049ca09  68d6070000           push 0x7d6
// 0049ca0e  740f                 je 0x49ca1f
// 0049ca10  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049ca13  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049ca16  50                   push eax
// 0049ca17  ffd1                 call ecx
// 0049ca19  83c410               add esp, 0x10
// 0049ca1c  c20400               ret 4
// 0049ca1f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049ca22  52                   push edx
// 0049ca23  ff15043cb200         call dword ptr [0xb23c04]
// 0049ca29  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetLength@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
