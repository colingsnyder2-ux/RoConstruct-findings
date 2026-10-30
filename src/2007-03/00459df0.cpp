// roc 2007-03 00459df0  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459df0
//
// 00459df0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459df5  741e                 je 0x459e15
// 00459df7  8b442408             mov eax, dword ptr [esp + 8]
// 00459dfb  8b542404             mov edx, dword ptr [esp + 4]
// 00459dff  50                   push eax
// 00459e00  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459e03  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459e06  52                   push edx
// 00459e07  6807080000           push 0x807
// 00459e0c  50                   push eax
// 00459e0d  ffd1                 call ecx
// 00459e0f  83c410               add esp, 0x10
// 00459e12  c20c00               ret 0xc
// 00459e15  8b542408             mov edx, dword ptr [esp + 8]
// 00459e19  8b442404             mov eax, dword ptr [esp + 4]
// 00459e1d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459e20  52                   push edx
// 00459e21  50                   push eax
// 00459e22  6807080000           push 0x807
// 00459e27  51                   push ecx
// 00459e28  ff1550ee7700         call dword ptr [0x77ee50]
// 00459e2e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetSize@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
