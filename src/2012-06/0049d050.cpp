// roc 2012-06 0049d050  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d050
//
// 0049d050  837c240400           cmp dword ptr [esp + 4], 0
// 0049d055  6a00                 push 0
// 0049d057  6a00                 push 0
// 0049d059  6802080000           push 0x802
// 0049d05e  740f                 je 0x49d06f
// 0049d060  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d063  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d066  50                   push eax
// 0049d067  ffd1                 call ecx
// 0049d069  83c410               add esp, 0x10
// 0049d06c  c20400               ret 4
// 0049d06f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d072  52                   push edx
// 0049d073  ff15043cb200         call dword ptr [0xb23c04]
// 0049d079  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleClearAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
