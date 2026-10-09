// roc 2012-06 0049da30  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049da30
//
// 0049da30  837c240800           cmp dword ptr [esp + 8], 0
// 0049da35  6a00                 push 0
// 0049da37  7419                 je 0x49da52
// 0049da39  8b442408             mov eax, dword ptr [esp + 8]
// 0049da3d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049da40  50                   push eax
// 0049da41  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049da44  68af080000           push 0x8af
// 0049da49  52                   push edx
// 0049da4a  ffd0                 call eax
// 0049da4c  83c410               add esp, 0x10
// 0049da4f  c20800               ret 8
// 0049da52  8b542408             mov edx, dword ptr [esp + 8]
// 0049da56  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049da59  52                   push edx
// 0049da5a  68af080000           push 0x8af
// 0049da5f  50                   push eax
// 0049da60  ff15043cb200         call dword ptr [0xb23c04]
// 0049da66  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetFoldLevel@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
