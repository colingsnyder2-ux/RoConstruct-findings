// roc 2007-08 0045cc60  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cc60
//
// 0045cc60  837c240400           cmp dword ptr [esp + 4], 0
// 0045cc65  6a00                 push 0
// 0045cc67  6a00                 push 0
// 0045cc69  6884080000           push 0x884
// 0045cc6e  740f                 je 0x45cc7f
// 0045cc70  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045cc73  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045cc76  50                   push eax
// 0045cc77  ffd1                 call ecx
// 0045cc79  83c410               add esp, 0x10
// 0045cc7c  c20400               ret 4
// 0045cc7f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045cc82  52                   push edx
// 0045cc83  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cc89  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Clear@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
