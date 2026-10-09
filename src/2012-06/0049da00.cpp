// roc 2012-06 0049da00  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049da00
//
// 0049da00  837c240400           cmp dword ptr [esp + 4], 0
// 0049da05  6a00                 push 0
// 0049da07  6a00                 push 0
// 0049da09  689a080000           push 0x89a
// 0049da0e  740f                 je 0x49da1f
// 0049da10  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049da13  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049da16  50                   push eax
// 0049da17  ffd1                 call ecx
// 0049da19  83c410               add esp, 0x10
// 0049da1c  c20400               ret 4
// 0049da1f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049da22  52                   push edx
// 0049da23  ff15043cb200         call dword ptr [0xb23c04]
// 0049da29  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipActive@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
