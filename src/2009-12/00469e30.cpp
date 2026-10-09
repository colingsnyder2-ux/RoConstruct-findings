// roc 2009-12 00469e30  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469e30
//
// 00469e30  837c240800           cmp dword ptr [esp + 8], 0
// 00469e35  6a00                 push 0
// 00469e37  7419                 je 0x469e52
// 00469e39  8b442408             mov eax, dword ptr [esp + 8]
// 00469e3d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00469e40  50                   push eax
// 00469e41  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00469e44  68c3080000           push 0x8c3
// 00469e49  52                   push edx
// 00469e4a  ffd0                 call eax
// 00469e4c  83c410               add esp, 0x10
// 00469e4f  c20800               ret 8
// 00469e52  8b542408             mov edx, dword ptr [esp + 8]
// 00469e56  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00469e59  52                   push edx
// 00469e5a  68c3080000           push 0x8c3
// 00469e5f  50                   push eax
// 00469e60  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469e66  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetMarginWidthN@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
