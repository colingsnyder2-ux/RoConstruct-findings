// roc 2007-03 0045a090  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a090
//
// 0045a090  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045a095  741e                 je 0x45a0b5
// 0045a097  8b442408             mov eax, dword ptr [esp + 8]
// 0045a09b  8b542404             mov edx, dword ptr [esp + 4]
// 0045a09f  50                   push eax
// 0045a0a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a0a3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a0a6  52                   push edx
// 0045a0a7  6870080000           push 0x870
// 0045a0ac  50                   push eax
// 0045a0ad  ffd1                 call ecx
// 0045a0af  83c410               add esp, 0x10
// 0045a0b2  c20c00               ret 0xc
// 0045a0b5  8b542408             mov edx, dword ptr [esp + 8]
// 0045a0b9  8b442404             mov eax, dword ptr [esp + 4]
// 0045a0bd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045a0c0  52                   push edx
// 0045a0c1  50                   push eax
// 0045a0c2  6870080000           push 0x870
// 0045a0c7  51                   push ecx
// 0045a0c8  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a0ce  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSel@CScintillaCtrl@@QAEXJJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
