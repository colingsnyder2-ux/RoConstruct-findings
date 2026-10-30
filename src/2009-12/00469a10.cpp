// roc 2009-12 00469a10  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469a10
//
// 00469a10  837c240400           cmp dword ptr [esp + 4], 0
// 00469a15  6a00                 push 0
// 00469a17  6a00                 push 0
// 00469a19  68dd070000           push 0x7dd
// 00469a1e  740f                 je 0x469a2f
// 00469a20  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469a23  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469a26  50                   push eax
// 00469a27  ffd1                 call ecx
// 00469a29  83c410               add esp, 0x10
// 00469a2c  c20400               ret 4
// 00469a2f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00469a32  52                   push edx
// 00469a33  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469a39  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SelectAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
