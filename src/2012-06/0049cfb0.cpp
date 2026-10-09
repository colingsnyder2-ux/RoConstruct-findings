// roc 2012-06 0049cfb0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049cfb0
//
// 0049cfb0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049cfb5  741e                 je 0x49cfd5
// 0049cfb7  8b442408             mov eax, dword ptr [esp + 8]
// 0049cfbb  8b542404             mov edx, dword ptr [esp + 4]
// 0049cfbf  50                   push eax
// 0049cfc0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049cfc3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049cfc6  52                   push edx
// 0049cfc7  68c4080000           push 0x8c4
// 0049cfcc  50                   push eax
// 0049cfcd  ffd1                 call ecx
// 0049cfcf  83c410               add esp, 0x10
// 0049cfd2  c20c00               ret 0xc
// 0049cfd5  8b542408             mov edx, dword ptr [esp + 8]
// 0049cfd9  8b442404             mov eax, dword ptr [esp + 4]
// 0049cfdd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049cfe0  52                   push edx
// 0049cfe1  50                   push eax
// 0049cfe2  68c4080000           push 0x8c4
// 0049cfe7  51                   push ecx
// 0049cfe8  ff15043cb200         call dword ptr [0xb23c04]
// 0049cfee  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginMaskN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
