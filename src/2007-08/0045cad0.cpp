// roc 2007-08 0045cad0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cad0
//
// 0045cad0  837c240800           cmp dword ptr [esp + 8], 0
// 0045cad5  6a00                 push 0
// 0045cad7  7419                 je 0x45caf2
// 0045cad9  8b442408             mov eax, dword ptr [esp + 8]
// 0045cadd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045cae0  50                   push eax
// 0045cae1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045cae4  687b080000           push 0x87b
// 0045cae9  52                   push edx
// 0045caea  ffd0                 call eax
// 0045caec  83c410               add esp, 0x10
// 0045caef  c20800               ret 8
// 0045caf2  8b542408             mov edx, dword ptr [esp + 8]
// 0045caf6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045caf9  52                   push edx
// 0045cafa  687b080000           push 0x87b
// 0045caff  50                   push eax
// 0045cb00  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cb06  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetReadOnly@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
