// roc 2007-08 0045cd20  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cd20
//
// 0045cd20  837c240400           cmp dword ptr [esp + 4], 0
// 0045cd25  6a00                 push 0
// 0045cd27  6a00                 push 0
// 0045cd29  6887080000           push 0x887
// 0045cd2e  740f                 je 0x45cd3f
// 0045cd30  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045cd33  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045cd36  50                   push eax
// 0045cd37  ffd1                 call ecx
// 0045cd39  83c410               add esp, 0x10
// 0045cd3c  c20400               ret 4
// 0045cd3f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045cd42  52                   push edx
// 0045cd43  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cd49  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTextLength@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
