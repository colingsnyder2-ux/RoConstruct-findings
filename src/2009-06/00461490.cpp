// roc 2009-06 00461490  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461490
//
// 00461490  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461495  741e                 je 0x4614b5
// 00461497  8b442408             mov eax, dword ptr [esp + 8]
// 0046149b  8b542404             mov edx, dword ptr [esp + 4]
// 0046149f  50                   push eax
// 004614a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004614a3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004614a6  52                   push edx
// 004614a7  6807080000           push 0x807
// 004614ac  50                   push eax
// 004614ad  ffd1                 call ecx
// 004614af  83c410               add esp, 0x10
// 004614b2  c20c00               ret 0xc
// 004614b5  8b542408             mov edx, dword ptr [esp + 8]
// 004614b9  8b442404             mov eax, dword ptr [esp + 4]
// 004614bd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004614c0  52                   push edx
// 004614c1  50                   push eax
// 004614c2  6807080000           push 0x807
// 004614c7  51                   push ecx
// 004614c8  ff1590ee8900         call dword ptr [0x89ee90]
// 004614ce  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetSize@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
