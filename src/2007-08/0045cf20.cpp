// roc 2007-08 0045cf20  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cf20
//
// 0045cf20  837c240800           cmp dword ptr [esp + 8], 0
// 0045cf25  6a00                 push 0
// 0045cf27  7419                 je 0x45cf42
// 0045cf29  8b442408             mov eax, dword ptr [esp + 8]
// 0045cf2d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045cf30  50                   push eax
// 0045cf31  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045cf34  68af080000           push 0x8af
// 0045cf39  52                   push edx
// 0045cf3a  ffd0                 call eax
// 0045cf3c  83c410               add esp, 0x10
// 0045cf3f  c20800               ret 8
// 0045cf42  8b542408             mov edx, dword ptr [esp + 8]
// 0045cf46  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045cf49  52                   push edx
// 0045cf4a  68af080000           push 0x8af
// 0045cf4f  50                   push eax
// 0045cf50  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cf56  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetFoldLevel@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
