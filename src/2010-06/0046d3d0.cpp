// roc 2010-06 0046d3d0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d3d0
//
// 0046d3d0  837c240400           cmp dword ptr [esp + 4], 0
// 0046d3d5  6a00                 push 0
// 0046d3d7  6a00                 push 0
// 0046d3d9  68d4070000           push 0x7d4
// 0046d3de  740f                 je 0x46d3ef
// 0046d3e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046d3e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046d3e6  50                   push eax
// 0046d3e7  ffd1                 call ecx
// 0046d3e9  83c410               add esp, 0x10
// 0046d3ec  c20400               ret 4
// 0046d3ef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046d3f2  52                   push edx
// 0046d3f3  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046d3f9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ClearAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
