// roc 2012-06 0049cad0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049cad0
//
// 0049cad0  837c240800           cmp dword ptr [esp + 8], 0
// 0049cad5  6a00                 push 0
// 0049cad7  7419                 je 0x49caf2
// 0049cad9  8b442408             mov eax, dword ptr [esp + 8]
// 0049cadd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049cae0  50                   push eax
// 0049cae1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049cae4  68dc070000           push 0x7dc
// 0049cae9  52                   push edx
// 0049caea  ffd0                 call eax
// 0049caec  83c410               add esp, 0x10
// 0049caef  c20800               ret 8
// 0049caf2  8b542408             mov edx, dword ptr [esp + 8]
// 0049caf6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049caf9  52                   push edx
// 0049cafa  68dc070000           push 0x7dc
// 0049caff  50                   push eax
// 0049cb00  ff15043cb200         call dword ptr [0xb23c04]
// 0049cb06  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetUndoCollection@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
