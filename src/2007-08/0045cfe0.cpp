// roc 2007-08 0045cfe0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cfe0
//
// 0045cfe0  837c240400           cmp dword ptr [esp + 4], 0
// 0045cfe5  6a00                 push 0
// 0045cfe7  6a00                 push 0
// 0045cfe9  68ef080000           push 0x8ef
// 0045cfee  740f                 je 0x45cfff
// 0045cff0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045cff3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045cff6  50                   push eax
// 0045cff7  ffd1                 call ecx
// 0045cff9  83c410               add esp, 0x10
// 0045cffc  c20400               ret 4
// 0045cfff  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045d002  52                   push edx
// 0045d003  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045d009  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?TargetFromSelection@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
