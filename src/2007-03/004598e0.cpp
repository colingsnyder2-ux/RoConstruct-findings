// roc 2007-03 004598e0  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004598e0
//
// 004598e0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004598e5  741e                 je 0x459905
// 004598e7  8b442408             mov eax, dword ptr [esp + 8]
// 004598eb  8b542404             mov edx, dword ptr [esp + 4]
// 004598ef  50                   push eax
// 004598f0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004598f3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004598f6  52                   push edx
// 004598f7  68f8070000           push 0x7f8
// 004598fc  50                   push eax
// 004598fd  ffd1                 call ecx
// 004598ff  83c410               add esp, 0x10
// 00459902  c20c00               ret 0xc
// 00459905  8b542408             mov edx, dword ptr [esp + 8]
// 00459909  8b442404             mov eax, dword ptr [esp + 4]
// 0045990d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459910  52                   push edx
// 00459911  50                   push eax
// 00459912  68f8070000           push 0x7f8
// 00459917  51                   push ecx
// 00459918  ff1550ee7700         call dword ptr [0x77ee50]
// 0045991e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDefine@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
