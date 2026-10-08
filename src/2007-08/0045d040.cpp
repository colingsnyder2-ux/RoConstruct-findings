// roc 2007-08 0045d040  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d040
//
// 0045d040  837c240800           cmp dword ptr [esp + 8], 0
// 0045d045  6a00                 push 0
// 0045d047  7419                 je 0x45d062
// 0045d049  8b442408             mov eax, dword ptr [esp + 8]
// 0045d04d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045d050  50                   push eax
// 0045d051  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045d054  68a10f0000           push 0xfa1
// 0045d059  52                   push edx
// 0045d05a  ffd0                 call eax
// 0045d05c  83c410               add esp, 0x10
// 0045d05f  c20800               ret 8
// 0045d062  8b542408             mov edx, dword ptr [esp + 8]
// 0045d066  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045d069  52                   push edx
// 0045d06a  68a10f0000           push 0xfa1
// 0045d06f  50                   push eax
// 0045d070  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045d076  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetLexer@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
