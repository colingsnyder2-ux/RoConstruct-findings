// roc 2009-06 00461ca0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461ca0
//
// 00461ca0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461ca5  741e                 je 0x461cc5
// 00461ca7  8b442408             mov eax, dword ptr [esp + 8]
// 00461cab  8b542404             mov edx, dword ptr [esp + 4]
// 00461caf  50                   push eax
// 00461cb0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461cb3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461cb6  52                   push edx
// 00461cb7  6898080000           push 0x898
// 00461cbc  50                   push eax
// 00461cbd  ffd1                 call ecx
// 00461cbf  83c410               add esp, 0x10
// 00461cc2  c20c00               ret 0xc
// 00461cc5  8b542408             mov edx, dword ptr [esp + 8]
// 00461cc9  8b442404             mov eax, dword ptr [esp + 4]
// 00461ccd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461cd0  52                   push edx
// 00461cd1  50                   push eax
// 00461cd2  6898080000           push 0x898
// 00461cd7  51                   push ecx
// 00461cd8  ff1590ee8900         call dword ptr [0x89ee90]
// 00461cde  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipShow@CScintillaCtrl@@QAEXJPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
