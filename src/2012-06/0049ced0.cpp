// roc 2012-06 0049ced0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049ced0
//
// 0049ced0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049ced5  741e                 je 0x49cef5
// 0049ced7  8b442408             mov eax, dword ptr [esp + 8]
// 0049cedb  8b542404             mov edx, dword ptr [esp + 4]
// 0049cedf  50                   push eax
// 0049cee0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049cee3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049cee6  52                   push edx
// 0049cee7  68c0080000           push 0x8c0
// 0049ceec  50                   push eax
// 0049ceed  ffd1                 call ecx
// 0049ceef  83c410               add esp, 0x10
// 0049cef2  c20c00               ret 0xc
// 0049cef5  8b542408             mov edx, dword ptr [esp + 8]
// 0049cef9  8b442404             mov eax, dword ptr [esp + 4]
// 0049cefd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049cf00  52                   push edx
// 0049cf01  50                   push eax
// 0049cf02  68c0080000           push 0x8c0
// 0049cf07  51                   push ecx
// 0049cf08  ff15043cb200         call dword ptr [0xb23c04]
// 0049cf0e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginTypeN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
