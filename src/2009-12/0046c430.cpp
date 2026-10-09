// roc 2009-12 0046c430  unit: Scintilla::CScintillaView  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046c430
//
// 0046c430  83ec10               sub esp, 0x10
// 0046c433  56                   push esi
// 0046c434  8bf1                 mov esi, ecx
// 0046c436  e8f5793800           call 0x7f3e30
// 0046c43b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0046c43e  8d442404             lea eax, [esp + 4]
// 0046c442  50                   push eax
// 0046c443  51                   push ecx
// 0046c444  ff1550cc9800         call dword ptr [0x98cc50]
// 0046c44a  8b442408             mov eax, dword ptr [esp + 8]
// 0046c44e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046c452  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046c456  6a01                 push 1
// 0046c458  2bd0                 sub edx, eax
// 0046c45a  52                   push edx
// 0046c45b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0046c45f  2bd1                 sub edx, ecx
// 0046c461  52                   push edx
// 0046c462  50                   push eax
// 0046c463  51                   push ecx
// 0046c464  8d4e58               lea ecx, [esi + 0x58]
// 0046c467  e8c6773800           call 0x7f3c32
// 0046c46c  5e                   pop esi
// 0046c46d  83c410               add esp, 0x10
// 0046c470  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?OnSize@CScintillaView@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
