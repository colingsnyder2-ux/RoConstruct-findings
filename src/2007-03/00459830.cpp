// roc 2007-03 00459830  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459830
//
// 00459830  837c240400           cmp dword ptr [esp + 4], 0
// 00459835  6a00                 push 0
// 00459837  6a00                 push 0
// 00459839  68e0070000           push 0x7e0
// 0045983e  740f                 je 0x45984f
// 00459840  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459843  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459846  50                   push eax
// 00459847  ffd1                 call ecx
// 00459849  83c410               add esp, 0x10
// 0045984c  c20400               ret 4
// 0045984f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00459852  52                   push edx
// 00459853  ff1550ee7700         call dword ptr [0x77ee50]
// 00459859  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanRedo@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
