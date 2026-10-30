// roc 2009-12 0046aa10  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046aa10
//
// 0046aa10  837c240800           cmp dword ptr [esp + 8], 0
// 0046aa15  6a00                 push 0
// 0046aa17  7419                 je 0x46aa32
// 0046aa19  8b442408             mov eax, dword ptr [esp + 8]
// 0046aa1d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046aa20  50                   push eax
// 0046aa21  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046aa24  68a10f0000           push 0xfa1
// 0046aa29  52                   push edx
// 0046aa2a  ffd0                 call eax
// 0046aa2c  83c410               add esp, 0x10
// 0046aa2f  c20800               ret 8
// 0046aa32  8b542408             mov edx, dword ptr [esp + 8]
// 0046aa36  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046aa39  52                   push edx
// 0046aa3a  68a10f0000           push 0xfa1
// 0046aa3f  50                   push eax
// 0046aa40  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046aa46  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetLexer@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
