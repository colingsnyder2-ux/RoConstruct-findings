// roc 2007-08 0045cef0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cef0
//
// 0045cef0  837c240400           cmp dword ptr [esp + 4], 0
// 0045cef5  6a00                 push 0
// 0045cef7  6a00                 push 0
// 0045cef9  689a080000           push 0x89a
// 0045cefe  740f                 je 0x45cf0f
// 0045cf00  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045cf03  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045cf06  50                   push eax
// 0045cf07  ffd1                 call ecx
// 0045cf09  83c410               add esp, 0x10
// 0045cf0c  c20400               ret 4
// 0045cf0f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045cf12  52                   push edx
// 0045cf13  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cf19  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipActive@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
