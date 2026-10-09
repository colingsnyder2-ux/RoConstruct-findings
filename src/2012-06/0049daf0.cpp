// roc 2012-06 0049daf0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049daf0
//
// 0049daf0  837c240400           cmp dword ptr [esp + 4], 0
// 0049daf5  6a00                 push 0
// 0049daf7  6a00                 push 0
// 0049daf9  68ef080000           push 0x8ef
// 0049dafe  740f                 je 0x49db0f
// 0049db00  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049db03  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049db06  50                   push eax
// 0049db07  ffd1                 call ecx
// 0049db09  83c410               add esp, 0x10
// 0049db0c  c20400               ret 4
// 0049db0f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049db12  52                   push edx
// 0049db13  ff15043cb200         call dword ptr [0xb23c04]
// 0049db19  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?TargetFromSelection@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
