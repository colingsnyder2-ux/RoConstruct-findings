// roc 2007-08 0045c900  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c900
//
// 0045c900  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c905  741e                 je 0x45c925
// 0045c907  8b442408             mov eax, dword ptr [esp + 8]
// 0045c90b  8b542404             mov edx, dword ptr [esp + 4]
// 0045c90f  50                   push eax
// 0045c910  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c913  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c916  52                   push edx
// 0045c917  6870080000           push 0x870
// 0045c91c  50                   push eax
// 0045c91d  ffd1                 call ecx
// 0045c91f  83c410               add esp, 0x10
// 0045c922  c20c00               ret 0xc
// 0045c925  8b542408             mov edx, dword ptr [esp + 8]
// 0045c929  8b442404             mov eax, dword ptr [esp + 4]
// 0045c92d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c930  52                   push edx
// 0045c931  50                   push eax
// 0045c932  6870080000           push 0x870
// 0045c937  51                   push ecx
// 0045c938  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c93e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSel@CScintillaCtrl@@QAEXJJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
