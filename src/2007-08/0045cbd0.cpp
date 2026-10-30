// roc 2007-08 0045cbd0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cbd0
//
// 0045cbd0  837c240400           cmp dword ptr [esp + 4], 0
// 0045cbd5  6a00                 push 0
// 0045cbd7  6a00                 push 0
// 0045cbd9  6881080000           push 0x881
// 0045cbde  740f                 je 0x45cbef
// 0045cbe0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045cbe3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045cbe6  50                   push eax
// 0045cbe7  ffd1                 call ecx
// 0045cbe9  83c410               add esp, 0x10
// 0045cbec  c20400               ret 4
// 0045cbef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045cbf2  52                   push edx
// 0045cbf3  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cbf9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Cut@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
