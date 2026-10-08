// roc 2008-06 00460150  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460150
//
// 00460150  837c240800           cmp dword ptr [esp + 8], 0
// 00460155  6a00                 push 0
// 00460157  7419                 je 0x460172
// 00460159  8b442408             mov eax, dword ptr [esp + 8]
// 0046015d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460160  50                   push eax
// 00460161  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460164  68da070000           push 0x7da
// 00460169  52                   push edx
// 0046016a  ffd0                 call eax
// 0046016c  83c410               add esp, 0x10
// 0046016f  c20800               ret 8
// 00460172  8b542408             mov edx, dword ptr [esp + 8]
// 00460176  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460179  52                   push edx
// 0046017a  68da070000           push 0x7da
// 0046017f  50                   push eax
// 00460180  ff15142e8000         call dword ptr [0x802e14]
// 00460186  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetStyleAt@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
