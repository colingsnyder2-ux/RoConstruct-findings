// roc 2007-08 0045cc30  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cc30
//
// 0045cc30  837c240400           cmp dword ptr [esp + 4], 0
// 0045cc35  6a00                 push 0
// 0045cc37  6a00                 push 0
// 0045cc39  6883080000           push 0x883
// 0045cc3e  740f                 je 0x45cc4f
// 0045cc40  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045cc43  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045cc46  50                   push eax
// 0045cc47  ffd1                 call ecx
// 0045cc49  83c410               add esp, 0x10
// 0045cc4c  c20400               ret 4
// 0045cc4f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045cc52  52                   push edx
// 0045cc53  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cc59  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Paste@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
