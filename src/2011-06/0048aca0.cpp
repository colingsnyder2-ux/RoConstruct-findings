// roc 2011-06 0048aca0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048aca0
//
// 0048aca0  837c240400           cmp dword ptr [esp + 4], 0
// 0048aca5  6a00                 push 0
// 0048aca7  6a00                 push 0
// 0048aca9  6899080000           push 0x899
// 0048acae  740f                 je 0x48acbf
// 0048acb0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048acb3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048acb6  50                   push eax
// 0048acb7  ffd1                 call ecx
// 0048acb9  83c410               add esp, 0x10
// 0048acbc  c20400               ret 4
// 0048acbf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048acc2  52                   push edx
// 0048acc3  ff15c019a400         call dword ptr [0xa419c0]
// 0048acc9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipCancel@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
