// roc 2012-06 0049ca60  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049ca60
//
// 0049ca60  837c240800           cmp dword ptr [esp + 8], 0
// 0049ca65  6a00                 push 0
// 0049ca67  7419                 je 0x49ca82
// 0049ca69  8b442408             mov eax, dword ptr [esp + 8]
// 0049ca6d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049ca70  50                   push eax
// 0049ca71  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049ca74  68da070000           push 0x7da
// 0049ca79  52                   push edx
// 0049ca7a  ffd0                 call eax
// 0049ca7c  83c410               add esp, 0x10
// 0049ca7f  c20800               ret 8
// 0049ca82  8b542408             mov edx, dword ptr [esp + 8]
// 0049ca86  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049ca89  52                   push edx
// 0049ca8a  68da070000           push 0x7da
// 0049ca8f  50                   push eax
// 0049ca90  ff15043cb200         call dword ptr [0xb23c04]
// 0049ca96  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetStyleAt@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
