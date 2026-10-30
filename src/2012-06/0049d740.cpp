// roc 2012-06 0049d740  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d740
//
// 0049d740  837c240400           cmp dword ptr [esp + 4], 0
// 0049d745  6a00                 push 0
// 0049d747  6a00                 push 0
// 0049d749  6883080000           push 0x883
// 0049d74e  740f                 je 0x49d75f
// 0049d750  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d753  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d756  50                   push eax
// 0049d757  ffd1                 call ecx
// 0049d759  83c410               add esp, 0x10
// 0049d75c  c20400               ret 4
// 0049d75f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d762  52                   push edx
// 0049d763  ff15043cb200         call dword ptr [0xb23c04]
// 0049d769  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Paste@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
