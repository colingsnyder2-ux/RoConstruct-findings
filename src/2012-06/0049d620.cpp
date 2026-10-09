// roc 2012-06 0049d620  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d620
//
// 0049d620  837c240400           cmp dword ptr [esp + 4], 0
// 0049d625  6a00                 push 0
// 0049d627  6a00                 push 0
// 0049d629  687d080000           push 0x87d
// 0049d62e  740f                 je 0x49d63f
// 0049d630  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d633  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d636  50                   push eax
// 0049d637  ffd1                 call ecx
// 0049d639  83c410               add esp, 0x10
// 0049d63c  c20400               ret 4
// 0049d63f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d642  52                   push edx
// 0049d643  ff15043cb200         call dword ptr [0xb23c04]
// 0049d649  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanPaste@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
