// roc 2007-08 0045c950  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c950
//
// 0045c950  837c240800           cmp dword ptr [esp + 8], 0
// 0045c955  741b                 je 0x45c972
// 0045c957  8b442404             mov eax, dword ptr [esp + 4]
// 0045c95b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045c95e  50                   push eax
// 0045c95f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045c962  6a00                 push 0
// 0045c964  6872080000           push 0x872
// 0045c969  52                   push edx
// 0045c96a  ffd0                 call eax
// 0045c96c  83c410               add esp, 0x10
// 0045c96f  c20800               ret 8
// 0045c972  8b542404             mov edx, dword ptr [esp + 4]
// 0045c976  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045c979  52                   push edx
// 0045c97a  6a00                 push 0
// 0045c97c  6872080000           push 0x872
// 0045c981  50                   push eax
// 0045c982  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c988  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTextRange@CScintillaCtrl@@QAEHPAUTextRange@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
