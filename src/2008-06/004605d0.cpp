// roc 2008-06 004605d0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004605d0
//
// 004605d0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004605d5  741e                 je 0x4605f5
// 004605d7  8b442408             mov eax, dword ptr [esp + 8]
// 004605db  8b542404             mov edx, dword ptr [esp + 4]
// 004605df  50                   push eax
// 004605e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004605e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004605e6  52                   push edx
// 004605e7  68c2080000           push 0x8c2
// 004605ec  50                   push eax
// 004605ed  ffd1                 call ecx
// 004605ef  83c410               add esp, 0x10
// 004605f2  c20c00               ret 0xc
// 004605f5  8b542408             mov edx, dword ptr [esp + 8]
// 004605f9  8b442404             mov eax, dword ptr [esp + 4]
// 004605fd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460600  52                   push edx
// 00460601  50                   push eax
// 00460602  68c2080000           push 0x8c2
// 00460607  51                   push ecx
// 00460608  ff15142e8000         call dword ptr [0x802e14]
// 0046060e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginWidthN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
