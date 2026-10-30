// roc 2011-06 0048a830  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a830
//
// 0048a830  837c240800           cmp dword ptr [esp + 8], 0
// 0048a835  6a00                 push 0
// 0048a837  7419                 je 0x48a852
// 0048a839  8b442408             mov eax, dword ptr [esp + 8]
// 0048a83d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048a840  50                   push eax
// 0048a841  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048a844  6876080000           push 0x876
// 0048a849  52                   push edx
// 0048a84a  ffd0                 call eax
// 0048a84c  83c410               add esp, 0x10
// 0048a84f  c20800               ret 8
// 0048a852  8b542408             mov edx, dword ptr [esp + 8]
// 0048a856  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048a859  52                   push edx
// 0048a85a  6876080000           push 0x876
// 0048a85f  50                   push eax
// 0048a860  ff15c019a400         call dword ptr [0xa419c0]
// 0048a866  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?LineFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
